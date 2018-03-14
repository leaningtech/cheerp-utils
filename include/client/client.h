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
#include <cheerp/promise.h>
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

template<bool B, class R, class... Args> struct CallbackHelperBase;

template<class R, class... Args>
struct CallbackHelperBase<false, R, Args...>
{
	typedef R (func_type)(Args...);
	static R invoke(std::function<R(Args...)>* func, Args... args)
	{
		std::unique_ptr<std::function<R(Args...)>> funcDeleter(func);
		return (*func)(static_cast<Args&&>(args)...);
	}
	template<class T>
	static client::EventListener* make_callback(const T& func)
	{
		return __builtin_cheerp_create_closure<client::EventListener>(&invoke,
						new std::function<func_type>(func));
	}
};

template<class R, class... Args>
struct CallbackHelperBase<true, R, Args...>
{
	typedef R (func_type)(Args...);
	template<class T>
	static client::EventListener* make_callback(const T& func)
	{
		return __builtin_cheerp_make_complete_object<client::EventListener>((func_type*)func);
	}
};

template<class T, class C, class R, class... Args>
struct CallbackHelper<T, R(C::*)(Args...) const>:
	public CallbackHelperBase<std::is_convertible<T, R(*)(Args...)>::value, R, Args...>
{
};

template<class T, class C, class R, class... Args>
struct CallbackHelper<T, R(C::*)(Args...)>:
	public CallbackHelperBase<std::is_convertible<T, R(*)(Args...)>::value, R, Args...>
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
		return new T(buf->get_buffer(), offset*elementSize, size/elementSize);
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

#endif
