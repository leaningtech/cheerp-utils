/****************************************************************
 *
 * Copyright (C) 2012 Alessandro Pignotti <alessandro@leaningtech.com>
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

#include <utility>
#include <exception>
#include <iostream>

class DeserializationException: public std::exception
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

template<class T>
T deserialize(char*& data);

template<typename Signature, Signature Func, typename ...Args>
struct argumentDeserializer
{
	template<class Deserialize, typename ...ArgsImpl>
	struct impl
	{
		template<typename ...FuncArgs>
		static void executeImpl(char* data, FuncArgs... funcArgs)
		{
			const Deserialize& d=deserialize<Deserialize>(data);
			//Expect a comma or the end of the array
			if((sizeof...(ArgsImpl)>0 && data[0]!=',') || (sizeof...(ArgsImpl)==0 && data[0]!=']'))
				throw DeserializationException("Malformed arguments array");
			//Pass down the updated data, the previous args and the new arg
			argumentDeserializer<Signature,Func,ArgsImpl...>::
				executeImpl(data+1, std::forward<FuncArgs>(funcArgs)..., d);
		}
	};
	template<typename ...FuncArgs>
	static void executeImpl(char* data, FuncArgs... funcArgs)
	{
		return impl<Args...>::executeImpl(data, std::forward<FuncArgs>(funcArgs)...);
	}
	static void execute(char* data)
	{
		//Arguments are passed as array, skip the first parenthesis
		if(data[0]!='[')
			throw DeserializationException("Missing [ at the start of parameters");
		impl<Args...>::executeImpl(data+1);
	}
};

//Base version for no arguments
template<typename Signature, Signature Func>
struct argumentDeserializer<Signature, Func>
{
	template<typename ...FuncArgs>
	static void executeImpl(char*, FuncArgs... funcArgs)
	{
		//Finally call the method
		return Func(std::forward<FuncArgs>(funcArgs)...);
	}
	static void execute(char* data)
	{
		//Arguments are passed as array, skip the first parenthesis
		if(data[0]!='[' || data[1]!=']')
			throw DeserializationException("Malformed arguments array");
		executeImpl(NULL);
	}
};

template<typename Signature, Signature Func, typename ...Args>
void serverSkel(char* data)
{
	try
	{
		argumentDeserializer<Signature,Func,Args...> deserializer;
		deserializer.execute(data);
	}
	catch(DeserializationException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
