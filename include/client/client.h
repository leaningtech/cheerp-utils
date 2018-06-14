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
void console_log(const char* message, Args&&... optionalParams)
{ 
	client::console.log(message, static_cast<Args&&>(optionalParams)...);
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

template<class, class> struct CallbackHelper; // undefined

template<class T, bool B, class R, class... Args> struct CallbackHelperBase;

template<class R>
struct InvokeHelper
{
	template<class T, class... Args>
	static R invoke(T* func, Args... args)
	{
		auto ret = (*func)(static_cast<Args&&>(args)...);
		delete func;
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
		delete func;
	}
};

template<class T, class R, class... Args>
struct CallbackHelperBase<T, false, R, Args...>
{
	typedef R (func_type)(Args...);
	static client::EventListener* make_callback(const T& func)
	{
		return __builtin_cheerp_create_closure<client::EventListener>(&InvokeHelper<R>::template invoke<T, Args...>,
						new T(func));
	}
};

template<class T, class R, class... Args>
struct CallbackHelperBase<T, true, R, Args...>
{
	typedef R (func_type)(Args...);
	static client::EventListener* make_callback(const T& func)
	{
		return __builtin_cheerp_make_complete_object<client::EventListener>((func_type*)func);
	}
};

template<class T, class C, class R, class... Args>
struct CallbackHelper<T, R(C::*)(Args...) const>:
	public CallbackHelperBase<T, std::is_convertible<T, R(*)(Args...)>::value, R, Args...>
{
};

template<class T, class C, class R, class... Args>
struct CallbackHelper<T, R(C::*)(Args...)>:
	public CallbackHelperBase<T, std::is_convertible<T, R(*)(Args...)>::value, R, Args...>
{
};

/**
 * Adapter from C++ functors and lambdas to code callable from JavaScript and the browser
 * The implementation tries hard to directly forward the C++ function to JavaScript woth zero overhead when possible.
 * For functors and capturing lambdas an std::function object and a JavaScript closure are created.
 */
template<class T>
client::EventListener* Callback(const T& func)
{
	typedef decltype(&T::operator()) lambda_type;
	typedef CallbackHelper<T, lambda_type> callback_helper;
	return callback_helper::make_callback(func);
}

/**
 * Adapter from C++ funtions to code callable from JavaScript and the browser
 * The implementation directly forward the C++ function to JavaScript with zero overhead.
 */
template<class R, class... Args>
client::EventListener* Callback(R (*func)(Args...))
{
	return __builtin_cheerp_make_complete_object<client::EventListener>(func);
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
