//===-- jsobject.h - C++ definition for the JS Object --------------===//
//
//                     Cheerp: The C++ compiler for the Web
//
// This file is distributed under the Apache License v2.0 with LLVM Exceptions.
// See LICENSE.TXT for details.
//
// Copyright 2011-2023 Leaning Technologies
//
//===----------------------------------------------------------------------===//

#ifndef _CHEERP_JSOBJECT_H_65a8f9e1
#define _CHEERP_JSOBJECT_H_65a8f9e1

#ifndef LEAN_CXX_LIB
#include <type_traits>
#endif

namespace [[cheerp::genericjs]] client
{

class String;
class Array;

class [[cheerp::client_layout]] Object
{
private:
	// Make it impossible to blindly copy a browser object
	Object(const Object&) = delete;
public:
	Object();
	// valueOf may return different types, the users should specify which one is expected
	template<typename T>
	T valueOf();
	explicit operator double() const
	{
		return const_cast<Object*>(this)->valueOf<double>();
	}
	explicit operator int() const
	{
		return const_cast<Object*>(this)->valueOf<int>();
	}
	Object* operator[](const client::String& name) const;
	// operator[] for arbitrary assignment can't be expressed as we can't have a pointer to an arbitrary member of an object
	// We provide the following function instead
	void set_(const client::String& name, Object* v);
#ifndef LEAN_CXX_LIB
	template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
	void set_(const client::String& name, T v);
#endif
	bool hasOwnProperty(const client::String& name);
	static Array* keys(Object*) [[cheerp::static]];
	static Array* values(Object*) [[cheerp::static]];
};

}

#endif
