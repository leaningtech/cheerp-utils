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

#ifndef _DUETTO_TYPES_H_2043d438
#define _DUETTO_TYPES_H_2043d438

namespace client
{

class Object
{
public:
	operator double() const;
};

class String: public Object
{
public:
	//Builtin constructor, implemented in duetto.js
	String(const char* s) throw();
	String(int a) throw();
	String* concat(const String*);
	String* concat(const String&);
	String* concat(const String&,const String&);
	String* concat(const String&,const String&,const String&);
};

class Array: public Object
{
public:
	//Builtin constructor, implemented in duetto.js
	template<typename... Args>
	Array(Args... args);
	//Element access, implemented in duetto.js
	Object* operator[](int index);
};

class Number: public Object
{
};

class JSON: public Object
{
public:
	String* stringify(int);
	String* stringify(float);
	Object* parse(const String& s);
};

class Date: public Object
{
public:
	double now();
};

extern Date Date;

typedef unsigned int UnsignedShort;
typedef unsigned int UnsignedLong;
typedef signed int Long;
typedef double UnsignedLongLong;
typedef void Void;
typedef unsigned int Boolean;
typedef double Double;
typedef Object* Any;

}

#endif
