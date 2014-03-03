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

#include <utility>
#include <functional>

//Passthrough code to pass event handlers in a semi type safe manner
inline client::EventListener& SimpleCallback(void (*func)())
{
	//Return the value itself, it is a valid JS method
	return *(client::EventListener*)func;
}

//Handled internally by the compiler
client::EventListener& Callback(void (*func)(), void* obj);

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
	static client::EventListener& make_callback(const T& func)
	{
		return Callback((void (*)())&invoke, new std::function<func_type>(func));
	}
};

template<class R, class... Args>
struct CallbackHelperBase<true, R, Args...>
{
	typedef R (func_type)(Args...);
	template<class T>
	static client::EventListener& make_callback(const T& func)
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

template<typename T>
String* serialize(const T& data)
{
	return data.serialize();
}

inline String* serialize(int data) [[client]]
{
	return JSON.stringify(data);
}

inline String* serialize(float data) [[client]]
{
	return JSON.stringify(data);
}

//TODO: add generic deserializer
template<typename T>
T deserialize(const String* s)
{
	return T::deserialize(s);
}

template<>
inline int deserialize<int>(const String* s) [[client]]
{
	Object* ret=JSON.parse(*s);
	//TODO: Find a proper way to check for type
	return *ret;
}

//TODO: add meaningful error messages when the deserializer is missing
template<>
inline void deserialize<void>(const String* s) [[client]]
{
	return;
}

template<class T>
client::EventListener& Callback(const T& func)
{
	typedef decltype(&T::operator()) lambda_type;
	typedef CallbackHelper<T, lambda_type> callback_helper;
	return callback_helper::make_callback(func);
}

template<class R, class... Args>
client::EventListener& Callback(R func(Args...))
{
	return SimpleCallback((void (*)())func);
}

template<typename Ret, typename ...Args>
struct clientStubImpl
{
	static String* serializeArgsImpl(String* ret) [[client]]
	{
		return ret;
	}
	template<class Serialize, typename ...Args2>
	static String* serializeArgsImpl(String* ret, const Serialize& s, Args2&&... args) [[client]]
	{
		ret=ret->concat(",",*serialize(s));
		return serializeArgsImpl(ret, std::forward<Args2>(args)...);
	}
	template<class Serialize, typename ...Args2>
	static String* serializeArgs(const Serialize& s, Args2&&... args) [[client]]
	{
		String* ret=serialize(s);
		return serializeArgsImpl(ret, std::forward<Args2>(args)...);
	}
	static String* serializeArgs() [[client]]
	{
		return new String("");
	}
	static Ret run(const char* funcName, Args&&... args)
	{
		client::String* data=serializeArgs(std::forward<Args>(args)...);
		client::XMLHttpRequest* r=new client::XMLHttpRequest();
		client::String* url=new client::String("/duetto_call?f=");
		url=url->concat(funcName,"&a=[",*data,"]");
		r->open("GET",*url,false);
		r->send();
		return client::deserialize<Ret>(r->get_responseText());
	}
};
}

template<typename Ret, typename ...Args>
Ret clientStub(const char* funcName, Args... args) [[client]]
{
	return client::clientStubImpl<Ret, Args...>::run(funcName, std::forward<Args>(args)...);
}

#endif
