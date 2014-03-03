/****************************************************************
 *
 * Copyright (C) 2012-2014 Alessandro Pignotti <alessandro@leaningtech.com>
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

#ifndef _DUETTO_SERVER_H
#define _DUETTO_SERVER_H

#include <utility>
#include <exception>
#include <iostream>
#include <string.h>
#include <duetto/promise.h>
#include <duetto/connection.h>

namespace duetto
{

class DeserializationException//: public std::exception
{
private:
	const char* message;
public:
	DeserializationException(const char* m):message(m)
	{
	}
	const char* what() const throw()
	{
		return message;
	}
};

template<typename T>
struct serialize
{
	static void run(SerializationInterface* outData, const T& data)
	{
		data.serialize(outData);
	}
};

template<>
struct serialize<bool>
{
	static void run(SerializationInterface* outData, bool data)
	{
		if(data)
			outData->write("1",1);
		else
			outData->write("0",1);
	}
};

inline void serializeInt(SerializationInterface* outData, int data)
{
	int reqBuf = snprintf(NULL,0,"%i",data);
	if(reqBuf < 0)
		return;
	char buf[reqBuf+1];
	sprintf(buf,"%i",data);
	outData->write(buf, reqBuf);
}

inline void serializeUnsignedInt(SerializationInterface* outData, unsigned int data)
{
	int reqBuf = snprintf(NULL,0,"%u",data);
	if(reqBuf < 0)
		return;
	char buf[reqBuf+1];
	sprintf(buf,"%u",data);
	outData->write(buf, reqBuf);
}

template<>
struct serialize<char>
{
	static void run(SerializationInterface* outData, char data)
	{
		serializeInt(outData, data);
	}
};

template<>
struct serialize<unsigned char>
{
	static void run(SerializationInterface* outData, unsigned char data)
	{
		serializeUnsignedInt(outData, data);
	}
};

template<>
struct serialize<int>
{
	static void run(SerializationInterface* outData, int data)
	{
		serializeInt(outData, data);
	}
};

template<>
struct serialize<std::string>
{
	static void run(SerializationInterface* outData, const std::string& data)
	{
		outData->write(data.data(), data.size());
	}
};

template<class InputIterator>
inline void serializeRange(duetto::SerializationInterface* outData, InputIterator begin, const InputIterator end)
{
	//Serialize as an array
	outData->write("[",1);
	bool first=true;
	for(;begin!=end;++begin)
	{
		if(!first)
			outData->write(",",1);
		serialize<
			typename std::remove_const<typename std::remove_reference<decltype(*begin)>::type>::type
			>::run(outData, *begin);
		first=false;
	}
	outData->write("]",1);
}

template<class T>
struct serialize<std::vector<T>>
{
	static void run(duetto::SerializationInterface* outData, const std::vector<T>& data)
	{
		serializeRange(outData, data.begin(), data.end());
	}
};

template<class T>
T deserialize(const char*& data);

//This is used for the no arguments case
template<typename Signature, Signature Func, typename Ret, typename ...Args>
struct argumentDeserializer
{
	template<typename ...FuncArgs>
	static Ret execute(const char* data, FuncArgs&&... funcArgs)
	{
		//Arguments are passed as array, skip the first parenthesis
		if(data[0]!=']')
			throw DeserializationException("Malformed arguments array");
		//Finally call the method
		return Func(std::forward<FuncArgs>(funcArgs)...);
	}
};

//Base version for no arguments
template<typename Signature, Signature Func, typename Ret, typename Deserialize, typename ...Args>
struct argumentDeserializer<Signature, Func, Ret, Deserialize, Args...>
{
	template<typename ...FuncArgs>
	static Ret execute(const char* data, FuncArgs&&... funcArgs)
	{
		const Deserialize& d=deserialize<typename std::remove_reference<Deserialize>::type>(data);
		//Expect a comma if we expect more args
		if(sizeof...(Args)>0)
		{
			if(data[0]!=',')
				throw DeserializationException("Malformed arguments array");
			else
				data++;
		}
		//Pass down the updated data, the previous args and the new arg
		return argumentDeserializer<Signature,Func,Ret,Args...>::
			execute(data, std::forward<FuncArgs>(funcArgs)..., d);
	}
};

template<class R>
struct voidUtils
{
	static void addCallback(Promise<R>* p)
	{
		Connection* c=connection;
		p->then([c] (const R& r) mutable {
			duetto::serialize<R>::run(c, r);
			c->flush();
			});
	}
};

template<>
struct voidUtils<void>
{
	static void addCallback(Promise<void>* p)
	{
		Connection* c(connection);
		p->then([c]() mutable {
			c->flush();
			});
	}
};

template<typename Signature, Signature Func, typename Ret, typename ...Args>
struct returnSerializer
{
	static PromiseBase* serialize(SerializationInterface* outData, const char* inData)
	{
		const Ret& r=argumentDeserializer<Signature,Func,Ret,Args...>::execute(inData);
		duetto::serialize<Ret>::run(outData, r);
		return NULL;
	}
};

template<typename Signature, Signature Func, typename ...Args>
struct returnSerializer<Signature,Func,void,Args...>
{
	static PromiseBase* serialize(SerializationInterface* outData, const char* inData)
	{
		argumentDeserializer<Signature,Func,void,Args...>::execute(inData);
		return NULL;
	}
};

template<typename Signature, Signature Func, typename Ret, typename ...Args>
struct returnSerializer<Signature,Func,Promise<Ret>*,Args...>
{
	static PromiseBase* serialize(SerializationInterface* outData, const char* inData)
	{
		argumentDeserializer<Signature,Func,Promise<Ret>*,Args...> serializer;
		Promise<Ret>* ret=serializer.execute(inData);
		voidUtils<Ret>::addCallback(ret);
		// Save connection by copy in the lambda, this seems to require a temporary
		return ret;
	}
};

}

/*
 * The output buffer is assumed to be 1024 bytes in size
 * It the method returns a promise it is forwarded to the caller
 */
template<typename Signature, Signature Func, typename Ret, typename ...Args>
duetto::PromiseBase* serverSkel(duetto::SerializationInterface* outData, const char* inData)
{
	try
	{
		//Arguments are passed as array, skip the first parenthesis
		if(inData[0]!='[')
			throw duetto::DeserializationException("Missing [ at the start of parameters");
		return duetto::returnSerializer<Signature,Func,Ret,Args...>::serialize(outData,inData+1);
	}
	catch(duetto::DeserializationException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return NULL;
}
#endif
