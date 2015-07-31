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

#ifndef _CHEERP_TYPES_H_2043d438
#define _CHEERP_TYPES_H_2043d438

#include <utility>
#include <string>
#include <cheerpintrin.h>

namespace client
{

class Object
{
private:
	// Make it impossible to blindly copy a browser object
	Object(const Object&) = delete;
public:
	Object();
	// valueOf may return different types, the users should specify which one is expected
	template<typename T>
	T valueOf();
	operator double() const
	{
		return const_cast<Object*>(this)->valueOf<double>();
	}
};

template<class T>
class TArray;

class String: public Object
{
private:
	template<typename C>
	static String* fromCharPtr(const C* s)
	{
		String* ret=new String();
		for(;*s;s++)
		{
			ret=ret->concat(*String::fromCharCode(*s));
		}
		return ret;
	}
	template<typename... Args>
	String* concat(const String&, Args&&... args);
	String* concat();
public:
	String() throw();
	//Utility constructor to use an existing String
	String(const String*) throw();
	String(long a) throw();
	String(unsigned long a) throw();
	String(int a) throw();
	String(unsigned int a) throw();
	String(float a) throw();
	String(double a) throw();
	String(const char* s) __attribute__((noinline)) :String(fromCharPtr<char>(s))
	{
	}
	String(const wchar_t* s) __attribute__((noinline)) :String(fromCharPtr<wchar_t>(s))
	{
	}
	template<typename... Args>
	String* concat(Args&&... args)
	{
		return concat(static_cast<const String&>(std::forward<Args>(args))...);
	}
	String* substr(int start) const;
	String* substr(int start, int length) const;
	String* substring(int start) const;
	String* substring(int start, int end) const;
	String* replace(const String&, const String&);
	int charCodeAt(int index) const;
	int get_length() const;
	TArray<String>* split(const String&) const;
	static String* fromCharCode(int c) [[static]];
	explicit operator std::string() const
	{
		//This assume an ascii string
		//TODO: Try wstring or similar
		std::string ret;
		ret.resize(get_length());
		for(int i=0;i<get_length();i++)
			ret[i] = charCodeAt(i);
		return ret;
	}
};

class Array: public Object
{
public:
	template<typename... Args>
	Array(Args... args);
	Object*& operator[](int index)
	{
		return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
	}
	Object* operator[](int index) const
	{
		return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
	}
	int indexOf(Object* searchElement);
	int indexOf(Object* searchElement, int fromIndex);
	template<typename... Args>
	int push(Args... args);
	int get_length() const;
};

template<class T>
class TArray: public Array
{
public:
	template<typename... Args>
	TArray(Args... args);
	T*& operator[](int index)
	{
		return (T*&)Array::operator[](index);
	}
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
