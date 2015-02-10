//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct B;

struct A
{
	A* a;
	A* (*func)(A*);
};

struct B
{
	B* b;
	A* (*func)(A*);
};

A* funcDef(A*)
{
}

A globalA = { NULL, funcDef };

void webMain()
{
	A a;
	a.a = &a;
	volatile B b;
	assertEqual(a.a, &a, "Recursive structure uses");
}
