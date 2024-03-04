#ifndef CHEERP_FUNCTION_H
#define CHEERP_FUNCTION_H
#include "cheerp/types.h"
namespace [[cheerp::genericjs]] client {
	class EventListener;
}
namespace [[cheerp::genericjs]] cheerp {
	template<class T>
	struct FunctionTypeImpl;
	template<class C, class R, class... Args>
	struct FunctionTypeImpl<R(C::*)(Args...) const> {
		using type = R(Args...);
	};
	template<class C, class R, class... Args>
	struct FunctionTypeImpl<R(C::*)(Args...)> {
		using type = R(Args...);
	};
	template<class T>
	using FunctionType = typename FunctionTypeImpl<decltype(&RemoveReference<T>::operator())>::type;
	template<class T>
	client::EventListener* Callback(T&& func);
	template<class R, class... Args>
	client::EventListener* Callback(R(*func)(Args...));
}
namespace [[cheerp::genericjs]] client {
	template<class F>
	class _Function : public Function {
	public:
		template<class T, class = cheerp::EnableIf<cheerp::CanCast<_Function<cheerp::FunctionType<T>>, _Function<F>>>>
		_Function(T&& func) : Function(cheerp::Callback(func)) {
		}
		template<class R, class... Args, class = cheerp::EnableIf<cheerp::CanCast<_Function<R(Args...)>, _Function<F>>>>
		_Function(R(*func)(Args...)) : Function(cheerp::Callback(func)) {
		}
		[[gnu::always_inline]]
		_Function(const EventListener* listener) : Function(listener) {
		}
	};
}
#endif
