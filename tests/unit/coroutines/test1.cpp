#include <coroutine>
#include <tests.h>
#include <cheerp/client.h>

struct CallbackAwaiter {
  using CbTy = client::EventListener*;
  using RetTy = int;
  template<typename... Args>
  using FnTy = RetTy(*)(Args..., CbTy cb);

  bool* ready = new bool(false);
  RetTy res;
  std::coroutine_handle<>* handle = new std::coroutine_handle<>();

  CallbackAwaiter(const CallbackAwaiter&) = delete;
  CallbackAwaiter(CallbackAwaiter&&) = default;
  template<typename... Args>
  CallbackAwaiter(FnTy<Args...> fn, Args&&... args) {
    bool* ready = this->ready;
    auto* handle = this->handle;
    res = fn(std::forward<Args>(args)..., cheerp::Callback([ready, handle]
    {
      *ready = true;
      if (*handle) {
        handle->resume();
      }
    }));
  }
  bool await_ready() { return *ready; }
  void await_suspend(std::coroutine_handle<> handle) noexcept {
    *this->handle = handle;
  }
  RetTy await_resume() { return res; }
};

struct Task {
  struct promise_type;
  using handle_type = std::coroutine_handle<promise_type>;

  struct promise_type {
    Task get_return_object() {
      return Task(handle_type::from_promise(*this));
    }
    template<typename... Args>
    auto await_transform(CallbackAwaiter ca) {
      return ca;
    }
    std::suspend_never initial_suspend() { return {}; }
    std::suspend_never final_suspend() noexcept { return {}; }
    void unhandled_exception() { std::terminate(); }
    void return_void() {}
  };

  handle_type h_;

  Task(handle_type h) : h_(h) {}
  ~Task() { }
};

int cb_test(int i, int j, client::EventListener* cb)
{
  int res = i+j;
  client::setTimeout(cheerp::Callback([cb,res]()
  {
    reinterpret_cast<int(*)(int)>(cb)(res);
  }),0);
  return res;
}

Task test() {
  int test = co_await CallbackAwaiter(cb_test, unitBlackBox(1), unitBlackBox(2));
  assertEqual(test, 3, "genericjs coroutine support 1/1");
}

void webMain()
{
  test();
}
