//===---------------------------------------------------------------------===//
//      Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	int p;
};

int g = 43;

int* __attribute__((noinline)) selectorFunc(A* a, int d)
{
	if(d)
		return &g;
	else
		return &a->p;
}

void webMain()
{
	A a;
	a.p = 42;
	volatile bool cond=false;
	int* p2 = 0;
	if(cond)
		p2 = selectorFunc(&a, 1);
	else
		p2 = selectorFunc(&a, 0);
	a.p = 44;
	volatile int p3 = *p2;
	assertEqual(p3,44,"GEP aliasing");
}
