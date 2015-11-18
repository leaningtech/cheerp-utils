//===---------------------------------------------------------------------===//
//      Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	int i;
};

struct B
{
	A* a;
};

void webMain()
{
	volatile B b;
	b.a = new A;
	b.a->i = 42;
	volatile A* a2 = new A[10];
	for(int i=0;i<10;i++)
		a2[i].i = i;
	assertEqual(b.a->i, 42, "Accessing member of stack allocated struct");
	assertEqual((int)a2[8].i, 8, "Accessing member of heap allocated struct");
}
