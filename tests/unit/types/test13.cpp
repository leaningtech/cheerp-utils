//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	int i;
};

struct B
{
	int i;
};

void webMain()
{
	volatile B b = { 2 };
	volatile A a = { 1 };
	volatile void * volatile p = &b.i;
	volatile int ai = a.i;
	volatile int bi = b.i;

	assertEqual(ai, 1, "Pointers to member variables 1/2");
	assertEqual(bi, 2, "Pointers to member variables 2/2");
}
