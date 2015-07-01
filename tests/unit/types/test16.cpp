//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A;

struct C
{
	A* a;
};

struct B
{
	C c;
};

struct A
{
	B b;
};

void webMain()
{
	// Test collapsing of recursive struct
	A a;
	a.b.c.a = &a;
	// Do a cast that is only valid if the struct is collapsed
	B* b = reinterpret_cast<B*>(&a);

	assertEqual(b->c.a, &a, "Collapsing of recursive structs");
}
