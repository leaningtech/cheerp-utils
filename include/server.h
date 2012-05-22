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

template<typename Signature, Signature Func, class Deserialize, typename ...Args>
struct argumentDeserializer
{
	template<typename ...FuncArgs>
	void executeImpl(char* data, FuncArgs... funcArgs)
	{
		const Deserialize& d=deserialize<Deserialize>(data);
		argumentDeserializer<Signature,Func,Args...> downDeserializer;
		//Expect a comma and skip it
		if(data[0]!=',')
			throw DeserializationException("Missing comma between parameters");
		//Pass down the updated data, the previous args and the new arg
		downDeserializer.executeImpl(data+1, std::forward<FuncArgs>(funcArgs)..., d);
	}
	void execute(char* data)
	{
		//Arguments are passed as array, skip the first parenthesis
		if(data[0]!='[')
			throw DeserializationException("Missing [ at the start of parameters");
		executeImpl(data+1);
	}
};

template<typename Signature, Signature Func, class Deserialize>
struct argumentDeserializer<Signature, Func, Deserialize>
{
	template<typename ...FuncArgs>
	void executeImpl(char* data, FuncArgs... funcArgs)
	{
		const Deserialize& d=deserialize<Deserialize>(data);
		//Check that the array is complete
		if(data[0]!=']')
			throw DeserializationException("Missing ] at the end of parameters");
		//Finally call the method
		Func(std::forward<FuncArgs>(funcArgs)..., d);
	}
	void execute(char* data)
	{
		//Arguments are passed as array, skip the first parenthesis
		if(data[0]!='[')
			throw DeserializationException("Missing [ at the start of parameters");
		executeImpl(data+1);
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
