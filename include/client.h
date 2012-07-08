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

#include "types.h"
#include "dom4.h"

namespace client
{

class Client
{
public:
	static client::Document* get_document();
	static client::JSON* get_JSON();
};

}

template<typename T>
client::String* serialize(const T& data)
{
	return data.serialize();
}

client::String* serialize(int data)
{
	return client::Client::get_JSON()->stringify(data);
}

client::String* serialize(float data)
{
	return client::Client::get_JSON()->stringify(data);
}

template<class Serialize, typename ...Args>
struct argumentSerializer
{
	static client::String* executeImpl(const Serialize& s, Args... args)
	{
		client::String* ret=serialize(s)->concat(",");
		argumentSerializer<Args...> downSerializer;
		return ret->concat(downSerializer.executeImpl(std::forward<Args>(args)...));
	}
	static client::String* execute(const Serialize& s, Args... args)
	{
		//We must return an array
		client::String* ret=new client::String("[");
		ret=ret->concat(executeImpl(s,std::forward<Args>(args)...));
		return ret->concat("]");
	}
};

template<class Serialize>
struct argumentSerializer<Serialize>
{
	static client::String* executeImpl(const Serialize& s)
	{
		return serialize(s);
	}
	static client::String* execute(const Serialize& s)
	{
		//We must return an array
		client::String* ret=new client::String("[");
		ret=ret->concat(executeImpl(s));
		return ret->concat("]");
	}
};

template<typename Ret, typename ...Args>
Ret clientStub(const char* funcName, Args... args) [[client]]
{
	argumentSerializer<Args...> serializer;
	volatile client::String* data=serializer.execute(std::forward<Args>(args)...);
}

