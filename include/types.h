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

#ifndef DUETTO_TYPES_H
#define DUETTO_TYPES_H

#include <string>

//Toplevel as dom uses this
class Object
{
};

namespace client
{

class DOMString: public Object
{
public:
	DOMString(const char* s);
	__attribute__((always_inline)) DOMString(const std::string& s):DOMString(s.c_str())
	{
	}
};

typedef DOMString String;
typedef unsigned long UnsignedShort;
typedef unsigned long UnsignedLong;
typedef double long UnsignedLongLong;
typedef void Void;
typedef unsigned long Boolean;
typedef Object* Any;

}

#endif
