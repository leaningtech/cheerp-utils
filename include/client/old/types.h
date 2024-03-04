//===-- types.h - C++ definitions of JS basic types  --------------===//
//
//                     Cheerp: The C++ compiler for the Web
//
// This file is distributed under the Apache License v2.0 with LLVM Exceptions.
// See LICENSE.TXT for details.
//
// Copyright 2011-2023 Leaning Technologies
//
//===----------------------------------------------------------------------===//

#ifndef _CHEERP_TYPES_H_2043d438
#define _CHEERP_TYPES_H_2043d438

#ifndef LEAN_CXX_LIB
#include <string>
#endif
#include <stddef.h>
#include <stdint.h>
#include <cheerpintrin.h>
#include "jsobject.h"

namespace [[cheerp::genericjs]] client
{

template<class T>
class TArray;

class EventListener;
class RegExp;

class String: public Object
{
private:
	template<typename C>
	static const String& fromCharPtr(const C* s)
	{
		String* ret=new String();
		for(;*s;s++)
		{
			ret=ret->concat(*String::fromCharCode(*s));
		}
		return *ret;
	}
	template<typename Private, typename... Args>
	String* concat(Args&&... args) const;
public:
	String() throw();
	//Utility constructor to use an existing String
	String(const String*) throw();
	String(const String&) throw();
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
	__attribute__((always_inline)) String* concat(const Args&... args) const
	{
		return concat<void>(static_cast<const String&>(args)...);
	}
	String* substr(int start) const;
	String* substr(int start, int length) const;
	String* substring(int start) const;
	String* substring(int start, int end) const;
	String* replace(const String&, const String&) const;
	String* replace(const String&, EventListener*) const;
	String* replace(RegExp*, const String&) const;
	String* replace(RegExp*, EventListener*) const;
	int charCodeAt(int index) const;
	String* charAt(int index) const;
	int get_length() const;
	int indexOf(const String&) const;
	int indexOf(const String&, int) const;
	int lastIndexOf(const String&) const;
	int lastIndexOf(const String&, int) const;
	TArray<String>* split(const String&) const;
	TArray<String>* split(const String&, int limit) const;
	TArray<String>* split(RegExp*) const;
	TArray<String>* split(RegExp*, int limit) const;
	static String* fromCharCode(int c) [[cheerp::static]];
	bool startsWith(const String&) const;
	bool endsWith(const String&) const;
	int localeCompare(const String&) const;
	TArray<String>* match(const String&) const;
	TArray<String>* match(RegExp*) const;
	int search(const String&) const;
	int search(RegExp*) const;
	String* slice(int start) const;
	String* slice(int start, int end) const;
	String* toLowerCase() const;
	String* toLocaleLowerCase() const;
	String* toUpperCase() const;
	String* toLocaleUpperCase() const;
	String* trim() const;
	String* padEnd(int) const;
	String* padEnd(int, const String&) const;
	String* padStart(int) const;
	String* padStart(int, const String&) const;
#ifndef LEAN_CXX_LIB
	explicit operator std::string() const
	{
		//This assume an ascii string
		//TODO: Try wstring or similar
		std::string ret;
		ret.resize(get_length());
		char* ptr = &ret[0];
		for(int i=0;i<get_length();i++)
			ptr[i] = charCodeAt(i);
		return ret;
	}
#endif
	static client::String* fromUtf8(const char * in, size_t len = SIZE_MAX)
	{
		client::String* out = new client::String();
		unsigned int codepoint;
		while (len > 0 && *in != 0)
		{
			unsigned char ch = static_cast<unsigned char>(*in);
			// ASCII range
			if (ch <= 0x7f)
				codepoint = ch;
			// Continuation bytes
			else if (ch <= 0xbf)
				codepoint = (codepoint << 6) | (ch & 0x3f);
			// Start of 2-bytes sequence
			else if (ch <= 0xdf)
				codepoint = ch & 0x1f;
			// Start of 3-bytes sequence
			else if (ch <= 0xef)
				codepoint = ch & 0x0f;
			// Start of 4-bytes sequence
			else
				codepoint = ch & 0x07;
			++in;
			--len;
			// NOTE: we are assuming that invalid codepoints will be handled
			// in a sensible way by javascript strings
			if (len == 0 || ((*in & 0xc0) != 0x80))
			{
				if (codepoint <= 0xffff)
					out = out->concat(client::String::fromCharCode(codepoint));
				else
				{
					// surrogate pair
					codepoint -= 0x10000;
					unsigned int highSurrogate = (codepoint >> 10) + 0xd800;
					unsigned int lowSurrogate = (codepoint & 0x3ff) + 0xdc00;
					out = out->concat(client::String::fromCharCode(highSurrogate));
					out = out->concat(client::String::fromCharCode(lowSurrogate));
				}
			}
		}
		return out;
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
	int indexOf(Object* searchElement) const;
	int indexOf(Object* searchElement, int fromIndex) const;
	int indexOf(double searchElement) const;
	int indexOf(double searchElement, int fromIndex) const;
	int lastIndexOf(Object* searchElement) const;
	int lastIndexOf(Object* searchElement, int fromIndex) const;
	int lastIndexOf(double searchElement) const;
	int lastIndexOf(double searchElement, int fromIndex) const;
	template<typename... Args>
	int push(Args... args);
	int get_length() const;
	Array* splice(int start);
	template<typename... Args>
	Array* splice(int start, int deleteCount, Args... args);
	Array* slice() const;
	Array* slice(int start) const;
	Array* slice(int start, int end) const;
	Object* shift();
	void unshift(client::Object*);
	Object* pop();
	String* toString() const;
	String* toLocaleString() const;
	template<typename... Args>
	Array* concat(Args&&... args) const;
	String* join(const String&) const;
	Array* reverse();
	Array* sort(EventListener* callback);
	bool every(EventListener* callback);
	bool some(EventListener* callback);
	void forEach(EventListener* callback);
	Array* map(EventListener* callback);
	Array* filter(EventListener* callback);
	Object* reduce(EventListener* callback);
	Object* reduceRight(EventListener* callback);
	static bool isArray(Object*) [[cheerp::static]];
};

template<class T>
class TArray: public Array
{
public:
	template<typename... Args>
	TArray(Args... args):Array(args...)
	{
	}
	// TArray can only be used with client types
	T*& operator[](int index)
	{
		T* typeCheck = static_cast<T*>((client::Object*)nullptr);
		return (T*&)Array::operator[](index);
	}
	T* operator[](int index) const
	{
		T* typeCheck = static_cast<T*>((client::Object*)nullptr);
		return (T*)Array::operator[](index);
	}
};

class Map: public Object {
public:
	Map();
	int get_size();
	void clear();
#ifndef LEAN_CXX_LIB
	template<typename K, typename V, typename std::enable_if<
		(std::is_arithmetic<K>::value || std::is_pointer<K>::value) &&
		(std::is_arithmetic<V>::value || std::is_pointer<V>::value), int>::type = 0>
	void set(K k, V v);
	template<typename K, typename V, typename std::enable_if<
		(std::is_arithmetic<K>::value || std::is_pointer<K>::value) &&
		(std::is_arithmetic<V>::value || std::is_pointer<V>::value), int>::type = 0>
	V get(K k);
	template<typename K, typename std::enable_if<
		(std::is_arithmetic<K>::value || std::is_pointer<K>::value), int>::type = 0>
	bool has(K k);
	template<typename K, typename std::enable_if<
		(std::is_arithmetic<K>::value || std::is_pointer<K>::value), int>::type = 0>
	bool delete_(K k)
	{
		bool res;
		__asm__("%1.delete(%2)" : "=r"(res) : "r"(this), "r"(k));
		return res;
	}
#endif
	void forEach(EventListener* callback);
	//TODO: declare methods entries, keys and values
};

#ifndef LEAN_CXX_LIB
template<typename K, typename V>
class TMap: public Map {
	static_assert(std::is_arithmetic<V>::value || std::is_pointer<V>::value, "Value has to be pointer or arithmetic");
	static_assert(std::is_arithmetic<K>::value || std::is_pointer<K>::value, "Key has to be pointer or arithmetic");
	public:
	TMap(): Map()
	{
	}
	void set(K k, V v)
	{
		Map::set<K,V>(k,v);
	}
	V get(K k)
	{
		return Map::get<K,V>(k);
	}
	bool has(K k)
	{
		return Map::has<K>(k);
	}
	bool delete_(K k) 
	{
		return Map::delete_<K>(k);
	}
};
#endif

class Number: public Object
{
public:
	Number(double);
	client::String* toString(int base = 10);
};

class Function: public Object
{
public:
	template<typename... Args>
	Function(Args... args);
	String* get_name();
};

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
