/****************************************************************
 *
 * Copyright (C) 2012-2013 Alessandro Pignotti <alessandro@leaningtech.com>
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

#ifndef _DUETTO_CLIENT_a335cd00
#define _DUETTO_CLIENT_a335cd00

#include "duetto/types.h"
#include "duetto/clientlib.h"
#include <duetto/promise.h>

#include <utility>
#include <functional>
#include <vector>

//Passthrough code to pass event handlers in a semi type safe manner
inline client::EventListener* SimpleCallback(void (*func)())
{
	//Return the value itself, it is a valid JS method
	return (client::EventListener*)func;
}

//Handled internally by the compiler
client::EventListener* Callback(void (*func)(), void* obj);

template<class, class> struct CallbackHelper; // undefined

template<bool B, class R, class... Args> struct CallbackHelperBase;

template<class R, class... Args>
struct CallbackHelperBase<false, R, Args...>
{
	typedef R (func_type)(Args...);
	static R invoke(std::function<R(Args...)>* func, Args... args)
	{
		return (*func)(std::forward<Args>(args)...);
		//delete func;
	}
	template<class T>
	static client::EventListener* make_callback(const T& func)
	{
		return Callback((void (*)())&invoke, new std::function<func_type>(func));
	}
};

template<class R, class... Args>
struct CallbackHelperBase<true, R, Args...>
{
	typedef R (func_type)(Args...);
	template<class T>
	static client::EventListener* make_callback(const T& func)
	{
		return SimpleCallback((void(*)())(func_type*)func);
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

namespace client
{

extern Document document;

template<class T>
client::EventListener* Callback(const T& func)
{
	typedef decltype(&T::operator()) lambda_type;
	typedef CallbackHelper<T, lambda_type> callback_helper;
	return callback_helper::make_callback(func);
}

template<class R, class... Args>
client::EventListener* Callback(R func(Args...))
{
	return SimpleCallback((void (*)())func);
}

}

namespace duetto
{

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
	size_t offset=__builtin_duetto_pointer_offset(ptr);
	T* buf=(T*)__builtin_duetto_pointer_base(ptr);
	size_t elementSize=sizeof(P);
	if(size==0)
		return buf->subarray(offset);
	else
		return buf->subarray(offset, size/elementSize);
}

template<typename T>
T* MakeTypedArray(const void* ptr, size_t size=0)
{
	size_t offset=__builtin_duetto_pointer_offset(ptr);
	T* buf=(T*)__builtin_duetto_pointer_base(ptr);
	size_t elementSize=buf->get_BYTES_PER_ELEMENT();
	if(size==0)
		return buf->subarray(offset);
	else
		return buf->subarray(offset, size/elementSize);
}

inline client::ArrayBufferView* MakeArrayBufferView(const void* ptr, size_t size=0)
{
	size_t offset=__builtin_duetto_pointer_offset(ptr);
	//We use Int8Array to access BYTES_PER_ELEMENT
	client::Int8Array* buf=(client::Int8Array*)__builtin_duetto_pointer_base(ptr);
	size_t elementSize=buf->get_BYTES_PER_ELEMENT();
	if(size==0)
		return buf->subarray(offset);
	else
		return buf->subarray(offset, size/elementSize);
}

template<typename T>
struct serializeImpl
{
	static client::String* run(const T& data)
	{
		return data.serialize();
	}
};

template<>
struct serializeImpl<char>
{
	static client::String* run(char data) [[client]]
	{
		return client::JSON.stringify(data);
	}
};

template<>
struct serializeImpl<unsigned char>
{
	static client::String* run(unsigned char data) [[client]]
	{
		return client::JSON.stringify(data);
	}
};

template<>
struct serializeImpl<int>
{
	static client::String* run(int data) [[client]]
	{
		return client::JSON.stringify(data);
	}
};

template<>
struct serializeImpl<unsigned int>
{
	static client::String* run(unsigned int data) [[client]]
	{
		return client::JSON.stringify(data);
	}
};

template<>
struct serializeImpl<long>
{
	static client::String* run(long data) [[client]]
	{
		return client::JSON.stringify(data);
	}
};

template<>
struct serializeImpl<unsigned long>
{
	static client::String* run(unsigned long data) [[client]]
	{
		return client::JSON.stringify(data);
	}
};

template<>
struct serializeImpl<float>
{
	static client::String* run(float data) [[client]]
	{
		return client::JSON.stringify(data);
	}
};

template<>
struct serializeImpl<std::string>
{
	static client::String* run(const std::string& data) [[client]]
	{
		return client::JSON.stringify(new client::String(data.c_str()));
	}
};

template<typename T>
struct serializeImpl<std::vector<T>>
{
	static client::String* run(const std::vector<T>& data) [[client]]
	{
		client::String* ret=new client::String("[");
		for(uint32_t i=0;i<data.size();i++)
		{
			if(i!=0)
				ret=ret->concat(",",serializeImpl<T>::run(data[i]));
			else
				ret=ret->concat(serializeImpl<T>::run(data[i]));
		}
		return ret->concat("]");
	}
};

template<class InputIterator>
inline client::String* serializeRange(InputIterator begin, const InputIterator end)
{
	//Serialize as an array
	client::String* ret=new client::String("[");
	bool first=true;
	for(;begin!=end;++begin)
	{
		if(!first)
			ret=ret->concat(",");
		ret=ret->concat(serializeImpl<
			typename std::remove_const<typename std::remove_reference<decltype(*begin)>::type>::type
			>::run(*begin));
		first=false;
	}
	return ret->concat("]");
}


template<typename T>
inline client::String* serialize(const T& data) [[client]]
{
	return serializeImpl<T>::run(data);
}

//TODO: add generic deserializer
template<typename T>
struct deserializeImpl
{
	static T run(const client::String* s)
	{
		return T::deserialize(s);
	}
};

template<>
struct deserializeImpl<int>
{
	static int run(const client::String* s) [[client]]
	{
		client::Object* ret=client::JSON.parse(*s);
		return *ret;
	}
};

template<>
struct deserializeImpl<unsigned int>
{
	static unsigned int run(const client::String* s) [[client]]
	{
		client::Object* ret=client::JSON.parse(*s);
		return *ret;
	}
};

template<>
struct deserializeImpl<long>
{
	static long run(const client::String* s) [[client]]
	{
		client::Object* ret=client::JSON.parse(*s);
		return *ret;
	}
};

template<>
struct deserializeImpl<unsigned long>
{
	static unsigned long run(const client::String* s) [[client]]
	{
		client::Object* ret=client::JSON.parse(*s);
		return *ret;
	}
};

template<typename T>
struct deserializeImpl<std::vector<T>>
{
	static std::vector<T> run(const client::String* s) [[client]]
	{
		std::vector<T> ret;
		if(s->charCodeAt(0)!='[')
			return ret;
		int wrapCount=0;
		int firstChar=1;
		for(int lastChar=1;lastChar<s->get_length();lastChar++)
		{
			//TODO: Support [], inside strings
			if(wrapCount==0 && lastChar!=firstChar &&
				(s->charCodeAt(lastChar)==',' || s->charCodeAt(lastChar)==']'))
			{
				ret.emplace_back(deserializeImpl<T>::run(s->substring(firstChar, lastChar)));
				firstChar=lastChar+1;
			}
			else if(s->charCodeAt(lastChar)=='[')
				wrapCount++;
			else if(s->charCodeAt(lastChar)==']')
				wrapCount--;
		}
		return ret;
	}
};

template<>
struct deserializeImpl<std::string>
{
	static std::string run(const client::String* s) [[client]]
	{
		return (std::string)*s;
	}
};

template<class OutputIterator>
inline void deserializeArrayInPlace(OutputIterator begin, const OutputIterator end, const client::String* s)
{
	const client::Array& a=*(client::Array*)client::JSON.parse(*s);
	int index=0;
	for(;begin!=end;++begin)
	{
		//TODO: Fix this, Currently only works for integer
		*begin = *a[index];
		index++;
	}
}

//TODO: add meaningful error messages when the deserializer is missing
template<>
struct deserializeImpl<void>
{
	static void run(const client::String* s) [[client]]
	{
		return;
	}
};

template<typename T>
T deserialize(const client::String* s) [[client]]
{
	return deserializeImpl<T>::run(s);
}

template<class T>
struct voidUtils
{
	static void triggerDone(duetto::Promise<T>* p, client::XMLHttpRequest* r)
	{
		p->done(duetto::deserialize<T>(r->get_responseText()));
	}
};

template<>
struct voidUtils<void>
{
	static void triggerDone(duetto::Promise<void>* p, client::XMLHttpRequest*)
	{
		p->done();
	}
};

template<class T>
struct promiseUtils: public std::false_type
{
	static void* addCallbackIfNeeded(client::XMLHttpRequest* r)
	{
		return NULL;
	}
	static T getReturn(void* p, client::XMLHttpRequest* r)
	{
		return duetto::deserialize<T>(r->get_responseText());
	}
	static bool is_promise()
	{
		return value;
	}
};

template<class T>
struct promiseUtils<duetto::Promise<T>*>: public std::true_type
{
	// addCallback create the onload callback for the asynchronous case
	// and returns a pointer to the promise. The synchronous implementation
	// returns an unused NULL void*
	static duetto::Promise<T>* addCallbackIfNeeded(client::XMLHttpRequest* r)
	{
		duetto::Promise<T>* ret=new duetto::Promise<T>();
		r->addEventListener("load",client::Callback([ret](client::ProgressEvent* e) mutable {
				client::XMLHttpRequest* r=(client::XMLHttpRequest*)e->get_target();
				voidUtils<T>::triggerDone(ret, r);
				}));
		return ret;
	}
	// This forwards the promise to the caller. The synchronous implementation runs the
	// deserialization and returns the full object, while ignoring the fake promiseRet
	static duetto::Promise<T>* getReturn(duetto::Promise<T>* p, client::XMLHttpRequest* r)
	{
		return p;
	}
	static bool is_promise()
	{
		return value;
	}
};

template<typename Ret, typename ...Args>
struct clientStubImpl
{
	static client::String* serializeArgsImpl(client::String* ret) [[client]]
	{
		return ret;
	}
	template<class Serialize, typename ...Args2>
	static client::String* serializeArgsImpl(client::String* ret, const Serialize& s, Args2&&... args) [[client]]
	{
		ret=ret->concat(",",*serialize(s));
		return serializeArgsImpl(ret, std::forward<Args2>(args)...);
	}
	template<class Serialize, typename ...Args2>
	static client::String* serializeArgs(const Serialize& s, Args2&&... args) [[client]]
	{
		client::String* ret=serialize(s);
		return serializeArgsImpl(ret, std::forward<Args2>(args)...);
	}
	static client::String* serializeArgs() [[client]]
	{
		return new client::String("");
	}
	static Ret run(const char* funcName, Args&&... args)
	{
		client::String* data=serializeArgs(std::forward<Args>(args)...);
		client::XMLHttpRequest* r=new client::XMLHttpRequest();
		client::String* url=new client::String("/duetto_call?f=");
		url=url->concat(funcName,"&a=[",*encodeURIComponent(*data),"]");
		auto promiseRet = promiseUtils<Ret>::addCallbackIfNeeded(r);
		// If the return is not a promise we will be synchronous
		r->open("GET",*url,promiseUtils<Ret>::is_promise());
		r->send();
		return promiseUtils<Ret>::getReturn(promiseRet, r);
	}
};
} //End of namespace duetto

template<typename Ret, typename ...Args>
Ret clientStub(const char* funcName, Args... args) [[client]]
{
	return duetto::clientStubImpl<Ret, Args...>::run(funcName, std::forward<Args>(args)...);
}

#endif
