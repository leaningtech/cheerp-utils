/****************************************************************
 *
 * Copyright (C) 2016 Alessandro Pignotti <alessandro@leaningtech.com>
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

#ifndef _CHEERP_JSOBJECT_H_65a8f9e1
#define _CHEERP_JSOBJECT_H_65a8f9e1

namespace client
{

class String;

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
	Object* operator[](const client::String& name) const;
	// operator[] for arbitrary assignment can't be expressed as we can't have a pointer to an arbitrary member of an object
	// We provide the following function instead
	void set_(const client::String& name, Object* v);
	bool hasOwnProperty(const client::String& name);
};

}

#endif
