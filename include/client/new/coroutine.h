#ifndef CHEERP_ASYNC_H
#define CHEERP_ASYNC_H

#include "cheerp/client.h"
#include "cheerp/clientlib.h"

#include <coroutine>
#include <exception>

template<class T, class... Args>
struct std::coroutine_traits<client::Promise<T>*, Args...> {
	struct [[cheerp::genericjs]] promise_type {
		client::Promise<T>* get_return_object() {
			return client::Promise<T>::template _New<client::_Any*>([this](client::Function* resolve) {
				this->resolve = resolve;
			});
		}

		auto initial_suspend() const noexcept {
			return std::suspend_never();
		}

		auto final_suspend() const noexcept {
			return std::suspend_never();
		}

		void return_value(T value) {
			resolve->call(nullptr, value);
		}

		void unhandled_exception() {
			// TODO
		}

	private:
		client::Function* resolve;
	};
};

template<class T>
[[cheerp::genericjs]]
auto operator co_await(client::Promise<T>& promise) {
	struct promise_awaiter {
		promise_awaiter(client::Promise<T>* promise) {
			this->promise = promise;
		}

		bool await_ready() const noexcept {
			return false;
		}

		void await_suspend(std::coroutine_handle<> handle) {
			promise->template then<client::_Any*>([this, handle](T value) {
				this->value = value;
				handle.resume();
			});
		}

		T await_resume() const {
			return value;
		}

	private:
		client::Promise<T>* promise;
		T value;
	};

	return promise_awaiter(&promise);
}

#endif
