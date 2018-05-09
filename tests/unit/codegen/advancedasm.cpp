//===---------------------------------------------------------------------===//
//	Copyright 2018 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <cheerp/client.h>
#include <tests.h>

void webMain()
{
	int a;
	client::String* s = new client::String("testString");
	__asm__("1+%0.length" : "=r"(a) : "r"(s));
	assertEqual(a, 11, "Advanced inline asm 1/3");
	double b;
	__asm__("0.5+%0.length" : "=r"(b) : "r"(s));
	assertEqual(b, 10.5, "Advanced inline asm 2/3");
	client::String* s2;
	__asm__("%0" : "=r"(s2) : "r"(s));
	assertEqual(s2, s, "Advanced inline asm 3/3");
}
