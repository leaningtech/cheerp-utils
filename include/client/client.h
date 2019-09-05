/****************************************************************
 *
 * Copyright (C) 2012-2015 Alessandro Pignotti <alessandro@leaningtech.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 ***************************************************************/

#ifndef _CHEERP_CLIENT_a335cd00
#define _CHEERP_CLIENT_a335cd00

#include "cheerp/types.h"
#include "cheerp/clientlib.h"
#include <cheerpintrin.h>

#include <utility>
#include <functional>
#include <vector>

namespace [[cheerp::genericjs]] cheerp
{

template<typename... Args>
void console_log(const char* message, Args... optionalParams)
{ 
	client::console.log(message, optionalParams...);
}

static void console_log(int message)
{
	client::console.log(message);
}

static void console_log(double message)
{
	client::console.log(message);
}

static double date_now()
{
	return client::Date::now();
}

template<typename T>
typename std::remove_reference<T>::type&& move(T&& t) noexcept
{
	return static_cast<typename std::remove_reference<T>::type&&>(t);
}
template<typename T>
T&& forward(typename std::remove_reference<T>::type&& t) noexcept
{
	return static_cast<T&&>(t);
}
template<typename T>
T&& forward(typename std::remove_reference<T>::type& t) noexcept
{
	return static_cast<T&&>(t);
}

template<class R>
struct InvokeHelper
{
	template<class T, class... Args>
	static R invoke(T* func, Args... args)
	{
		auto ret = (*func)(static_cast<Args&&>(args)...);
		return ret;
	}
};

template<>
struct InvokeHelper<void>
{
	template<class T, class... Args>
	static void invoke(T* func, Args... args)
	{
		(*func)(static_cast<Args&&>(args)...);
	}
};

template<class R>
struct EscapedResourcesList
{
	using deleter_t =  void(R*);
	static client::Map* resources;
	static void add(R* r, client::Object* d)
	{
		if (resources == nullptr)
			resources = new client::Map;
		resources->set(r, d);
	}
	static void free(R* r)
	{
		if (resources == nullptr)
			return;
		client::Object* o = resources->get<R*, client::Object*>(r);
		asm("%1===undefined?null:%2" : "=r"(o) : "r"(o),"r"(o));
		if (o == nullptr)
			return;
		resources->delete_(r);
		reinterpret_cast<deleter_t*>(o)(r);
	}
};
template<class R>
client::Map* EscapedResourcesList<R>::resources = nullptr;

using EscapedListeners = EscapedResourcesList<client::EventListener>;

inline void freeCallback(client::EventListener* e)
{
	EscapedListeners::free(e);
}

template<class>
class Closure;
template<class R, class... Args>
class Closure<R(Args...)>
{
	client::EventListener* inner;
	void(*deleter)(void*);
	void* obj;

	typedef R(func_t)(Args...);

	template<typename _Tp>
	using _Convertible = typename std::enable_if<std::is_convertible<_Tp, func_t*>::value>::type;

	template<typename _Tp>
	using _NConvertible = typename std::enable_if<!std::is_convertible<_Tp, func_t*>::value>::type;

      template<typename _Cond>
	using _en_if = typename std::enable_if<_Cond::value>::type;
      template<typename _Cond>
	using _en_if_not = typename std::enable_if<!_Cond::value>::type;

	template <bool V>
	struct _bool_const
	{
		static constexpr bool value = V;
	};
	template <class _Tp> struct _must_destroy
	    : public _bool_const<!__has_trivial_destructor(typename std::remove_reference<_Tp>::type)> {};

	template<class T>
	static void do_delete(void* o)
	{
		T* t = reinterpret_cast<T*>(o);
		delete t;
	}
	struct DeleterHelper
	{
		void(*deleter)(void*);
		void* obj;
	};
	static void deleter_helper(DeleterHelper* h)
	{
		h->deleter(h->obj);
	}
public:
	Closure():inner(nullptr), deleter(nullptr), obj(nullptr)
	{
	}
	template<class F>
	Closure(F&& f, _NConvertible<F>* = 0, _en_if<_must_destroy<F>>* = 0)
	{
		using FF = typename std::remove_reference<F>::type;
		FF* newf = new FF(::cheerp::forward<F>(f));
		inner = __builtin_cheerp_create_closure<client::EventListener>(&InvokeHelper<R>::template invoke<FF, Args...>, newf);
		deleter = &do_delete<FF>;
		obj = newf;
	}
	template<class F>
	Closure(F&& f, _NConvertible<F>* = 0, _en_if_not<_must_destroy<F>>* = 0)
	{
		using FF = typename std::remove_reference<F>::type;
		FF* newf = new FF(::cheerp::forward<F>(f));
		inner = __builtin_cheerp_create_closure<client::EventListener>(&InvokeHelper<R>::template invoke<FF, Args...>, newf);
		deleter = nullptr;
		obj = newf;
	}
	template<class F>
	Closure(F f, _Convertible<F>* = 0)
	{
		inner = __builtin_cheerp_make_complete_object<client::EventListener>((func_t*)f);
		deleter = nullptr;
		obj = nullptr;
	}
	Closure(R(*f)(Args...))
	{
		inner = __builtin_cheerp_make_complete_object<client::EventListener>(f);
		deleter = nullptr;
		obj = nullptr;
	}
	Closure(const Closure&) = delete;
	Closure& operator=(const Closure&) = delete;
	Closure(Closure&& c)
	{
		inner = c.inner;
		deleter = c.deleter;
		obj = c.obj;
		c.inner = nullptr;
		c.deleter = nullptr;
		c.obj = nullptr;
	}
	Closure& operator=(Closure&& c)
	{
		if (this == &c)
			return *this;
		if (deleter)
		{
			deleter(obj);
		}
		inner = c.inner;
		deleter = c.deleter;
		obj = c.obj;
		c.inner = nullptr;
		c.deleter = nullptr;
		c.obj = nullptr;
		return *this;
	}
	R operator()(Args&&... args)
	{
		return reinterpret_cast<func_t*>(inner)(::cheerp::forward<Args>(args)...);
	}
	operator bool()
	{
		return inner != nullptr;
	}
	operator client::EventListener*()
	{
		if (deleter)
		{
			DeleterHelper* h = new DeleterHelper{deleter, obj};
			auto* d = __builtin_cheerp_create_closure<client::Object>(&deleter_helper, h);
			EscapedListeners::add(inner, d);
			deleter = nullptr;
		}
		return inner;
	}
	~Closure()
	{
		if (deleter)
		{
			deleter(obj);
		}
	}
};

template<class, class> struct ClosureHelper; // undefined
template<class T, bool B, class R, class... Args> struct ClosureHelperBase;

template<class T, class C, class R, class... Args>
struct ClosureHelper<T, R(C::*)(Args...) const>
{
	typedef R (func_type)(Args...);
	static Closure<func_type> make_closure(T&& func)
	{
		return Closure<func_type>(::cheerp::forward<T>(func));
	}
};
template<class T, class C, class R, class... Args>
struct ClosureHelper<T, R(C::*)(Args...)>
{
	typedef R (func_type)(Args...);
	static Closure<func_type> make_closure(T&& func)
	{
		return Closure<func_type>(::cheerp::forward<T>(func));
	}
};

template<class T>
auto make_closure(T&& func) -> decltype(ClosureHelper<T, decltype(&std::remove_reference<T>::type::operator())>::make_closure(::cheerp::forward<T>(func)))
{
	typedef decltype(&std::remove_reference<T>::type::operator()) lambda_type;
	typedef ClosureHelper<T, lambda_type> closure_helper;
	return closure_helper::make_closure(::cheerp::forward<T>(func));
}

/**
 * Adapter from C++ functors and lambdas to code callable from JavaScript and the browser
 * The implementation tries hard to directly forward the C++ function to JavaScript woth zero overhead when possible.
 * For functors and capturing lambdas an std::function object and a JavaScript closure are created.
 */
template<class T>
client::EventListener* Callback(T&& func)
{
	return make_closure(::cheerp::forward<T>(func));
}
/**
 * Adapter from C++ funtions to code callable from JavaScript and the browser
 * The implementation directly forward the C++ function to JavaScript with zero overhead.
 */
template<class R, class... Args>
client::EventListener* Callback(R (*func)(Args...))
{
	return Closure<R(Args...)>(func);
}

template<typename T>
struct TypedArrayForPointerType;

template<>
struct TypedArrayForPointerType<unsigned char>
{
	typedef client::Uint8Array type;
};

template<>
struct TypedArrayForPointerType<signed char>
{
	typedef client::Int8Array type;
};

template<>
struct TypedArrayForPointerType<unsigned short>
{
	typedef client::Uint16Array type;
};

template<>
struct TypedArrayForPointerType<signed short>
{
	typedef client::Int16Array type;
};

template<>
struct TypedArrayForPointerType<unsigned int>
{
	typedef client::Uint32Array type;
};

template<>
struct TypedArrayForPointerType<signed int>
{
	typedef client::Int32Array type;
};

template<>
struct TypedArrayForPointerType<float>
{
	typedef client::Float32Array type;
};

template<>
struct TypedArrayForPointerType<double>
{
	typedef client::Float64Array type;
};

template<typename P,typename T=typename TypedArrayForPointerType<P>::type>
T* MakeTypedArray(const P* ptr, size_t size=0)
{
	size_t offset=__builtin_cheerp_pointer_offset(ptr);
	T* buf=__builtin_cheerp_make_complete_object<T>(__builtin_cheerp_pointer_base<T>(ptr));
	size_t elementSize=sizeof(P);
	if(size==0)
		return offset==0 ? buf : buf->subarray(offset);
	else
		return offset==0 && buf->get_length()==size/elementSize ? buf : buf->subarray(offset, offset+size/elementSize);
}

template<typename T>
T* MakeTypedArray(const void* ptr, size_t size=0)
{
	size_t offset=__builtin_cheerp_pointer_offset(ptr);
	//We use Int8Array to access BYTES_PER_ELEMENT
	client::Int8Array* buf=__builtin_cheerp_make_complete_object<client::Int8Array>(__builtin_cheerp_pointer_base<client::Int8Array>(ptr));
	size_t elementSize=buf->get_BYTES_PER_ELEMENT();
	if(size==0)
		return new T(buf->get_buffer(), offset*elementSize);
	else
	{
		size_t newElementSize = sizeof((*((T*)nullptr))[0]);
		return new T(buf->get_buffer(), offset*elementSize, size/newElementSize);
	}
}

inline client::ArrayBufferView* MakeArrayBufferView(const void* ptr, size_t size=0)
{
	size_t offset=__builtin_cheerp_pointer_offset(ptr);
	//We use Int8Array to access BYTES_PER_ELEMENT
	client::Int8Array* buf=__builtin_cheerp_make_complete_object<client::Int8Array>(__builtin_cheerp_pointer_base<client::Int8Array>(ptr));
	size_t elementSize=buf->get_BYTES_PER_ELEMENT();
	if(size==0)
		return offset==0 ? buf : buf->subarray(offset);
	else
		return offset==0 && buf->get_length()==size/elementSize ? buf : buf->subarray(offset, offset+size/elementSize);
}

// Helper class to access the [] operator on JS array-like objects
template<class T>
class ArrayRef
{
private:
	T* obj;
public:
	ArrayRef(T* o):obj(o)
	{
	}
	T* operator->()
	{
		return obj;
	}
	const T* operator->() const
	{
		return obj;
	}
	decltype((*obj)[0]) operator[](int index)
	{
		return (*obj)[index];
	}
	decltype((*static_cast<const T*>(obj))[0]) operator[](int index) const
	{
		return (*obj)[index];
	}
};

template<class T>
ArrayRef<T> makeArrayRef(T* obj)
{
	return ArrayRef<T>(obj);
}

} //End of namespace cheerp

#define CHEERP_SAFE_INLINE(r, p, x, ...) ({ struct [[cheerp::genericjs]] CheerpTmp { static r Run p { x; } }; CheerpTmp::Run(__VA_ARGS__); })

// Begin CHEERP_OBJECT macro
// Make a FOREACH macro
#define _CHEERP_ITER_0(WHAT, X)
#define _CHEERP_ITER_1(WHAT, X) WHAT(X)
#define _CHEERP_ITER_2(WHAT, X, ...) WHAT(X), _CHEERP_ITER_1(WHAT, __VA_ARGS__)
#define _CHEERP_ITER_3(WHAT, X, ...) WHAT(X), _CHEERP_ITER_2(WHAT, __VA_ARGS__)
#define _CHEERP_ITER_4(WHAT, X, ...) WHAT(X), _CHEERP_ITER_3(WHAT, __VA_ARGS__)
#define _CHEERP_ITER_5(WHAT, X, ...) WHAT(X), _CHEERP_ITER_4(WHAT, __VA_ARGS__)
#define _CHEERP_ITER_6(WHAT, X, ...) WHAT(X), _CHEERP_ITER_5(WHAT, __VA_ARGS__)
#define _CHEERP_ITER_7(WHAT, X, ...) WHAT(X), _CHEERP_ITER_6(WHAT, __VA_ARGS__)
#define _CHEERP_ITER_8(WHAT, X, ...) WHAT(X), _CHEERP_ITER_7(WHAT, __VA_ARGS__)
#define _CHEERP_ITER_9(WHAT, X, ...) WHAT(X), _CHEERP_ITER_8(WHAT, __VA_ARGS__)
#define _CHEERP_ITER_10(WHAT, X, ...) WHAT(X), _CHEERP_ITER_9(WHAT, __VA_ARGS__)
#define _CHEERP_ITER_11(WHAT, X, ...) WHAT(X), _CHEERP_ITER_10(WHAT, __VA_ARGS__)
#define _CHEERP_ITER_12(WHAT, X, ...) WHAT(X), _CHEERP_ITER_11(WHAT, __VA_ARGS__)
#define _CHEERP_ITER_13(WHAT, X, ...) WHAT(X), _CHEERP_ITER_12(WHAT, __VA_ARGS__)
#define _CHEERP_ITER_14(WHAT, X, ...) WHAT(X), _CHEERP_ITER_13(WHAT, __VA_ARGS__)
#define _CHEERP_ITER_15(WHAT, X, ...) WHAT(X), _CHEERP_ITER_14(WHAT, __VA_ARGS__)
#define _CHEERP_ITER_16(WHAT, X, ...) WHAT(X), _CHEERP_ITER_15(WHAT, __VA_ARGS__)
//... repeat as needed

#define _CHEERP_GET_MACRO(_0 \
	,_1  \
	,_2  \
	,_3  \
	,_4  \
	,_5  \
	,_6  \
	,_7  \
	,_8  \
	,_9  \
	,_10 \
	,_11 \
	,_12 \
	,_13 \
	,_14 \
	,_15 \
	,_16 \
	,NAME,...) NAME
#define _CHEERP_FOR_EACH(action,...) \
	_CHEERP_GET_MACRO(_0, ##__VA_ARGS__ \
		,_CHEERP_ITER_16 \
		,_CHEERP_ITER_15 \
		,_CHEERP_ITER_14 \
		,_CHEERP_ITER_13 \
		,_CHEERP_ITER_12 \
		,_CHEERP_ITER_11 \
		,_CHEERP_ITER_10 \
		,_CHEERP_ITER_9  \
		,_CHEERP_ITER_8  \
		,_CHEERP_ITER_7  \
		,_CHEERP_ITER_6  \
		,_CHEERP_ITER_5  \
		,_CHEERP_ITER_4  \
		,_CHEERP_ITER_3  \
		,_CHEERP_ITER_2  \
		,_CHEERP_ITER_1  \
		,_CHEERP_ITER_0  \
	)(action,__VA_ARGS__)


#define _CHEERP_STRING_VALUE(...) _CHEERP_STRING_VALUE__(__VA_ARGS__)
#define _CHEERP_STRING_VALUE__(...) #__VA_ARGS__

#define _CHEERP_FIELD(x) x :%[_## x ##_]
#define _CHEERP_REG(x) [_## x ##_]"r"(x)
#define CHEERP_OBJECT(...) ({client::Object* r;__asm__("{" _CHEERP_STRING_VALUE(_CHEERP_FOR_EACH(_CHEERP_FIELD, __VA_ARGS__)) "}" : "=r"(r) : _CHEERP_FOR_EACH(_CHEERP_REG, __VA_ARGS__));r;})
// End CHEERP_OBJECT macro

#endif
