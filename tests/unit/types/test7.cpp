//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <string>

void webMain()
{
	//Test string constructor
	client::String* ret=client::String::fromCharCode(0x30);
	assertEqual(ret->charCodeAt(0), 0x30, "String::fromCharCode");

	ret=new client::String("1");
	assertEqual(ret->charCodeAt(0), 0x31, "String from const char*");
}
