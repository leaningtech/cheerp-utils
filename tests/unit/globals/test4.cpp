//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

const char str[] = "testStr";

struct A
{
	const char* ptr;
	float f;
};

A a = { str, -123.5f };

void webMain()
{
	const char* p=a.ptr;
	assertEqual(*p, 't', "Access to member pointers to global array");
}
