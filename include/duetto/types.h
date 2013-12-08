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

#ifndef _DUETTO_TYPES_H_2043d438
#define _DUETTO_TYPES_H_2043d438

#include <utility>

namespace client
{

template<typename Ret, typename ...Args>
Ret duettoVariadicTrap(const char*, Args&&... args);
template<typename Ret, typename T, typename ...Args>
Ret duettoVariadicMemberTrap(const char*, const T* t, Args&&... args);

class Object
{
public:
	operator double() const;
};

class String: public Object
{
private:
	static String* fromCharPtr(const char* s)
	{
		String* ret=new String();
		for(;*s;s++)
		{
			ret=ret->concat(*String::fromCharCode(*s));
		}
		return ret;
	}
public:
	String() throw();
	String(const String&) throw();
	//Builtin constructor, implemented in duetto.js
	String(int a) throw();
	String(const char* s):String(*fromCharPtr(s))
	{
	}
	template<typename... Args>
	String* concat(Args&&... args)
	{
		return duettoVariadicMemberTrap<String*>("concat",this,static_cast<const String&>(std::forward<Args>(args))...);
	}
	String* substr(int start) const;
	String* substr(int start, int length) const;
	int charCodeAt(int index) const;
	int get_length() const;
};

class Array: public Object
{
public:
	template<typename... Args>
	Array(Args... args);
	//Element access, implemented in duetto.js
	Object*& operator[](int index);
	int indexOf(Object* searchElement);
	int indexOf(Object* searchElement, int fromIndex);
	template<typename... Args>
	int push(Args... args);
};

class Number: public Object
{
};

typedef unsigned int UnsignedShort;
typedef unsigned int UnsignedLong;
typedef signed int Long;
typedef double UnsignedLongLong;
typedef void Void;
typedef unsigned int Boolean;
typedef double Double;
typedef Object* Any;
typedef void* (*Function)(void*);

}

#endif
