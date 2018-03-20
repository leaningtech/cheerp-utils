//===---------------------------------------------------------------------===//
//	Copyright 2018 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	double x;
	A():x(f())
	{
		assertEqual(x, 42.0, "Virtual calls in constructor 1/3");
	}
	virtual int f()
	{
		return 42;
	}
};

struct B: public A
{
	int b;
	B():b(f())
	{
		assertEqual(b, 43, "Virtual calls in constructor 2/3");
	}
	virtual int f()
	{
		return 43;
	}
};

void webMain()
{
	B* b = new B();
	assertEqual(b->b, 43, "Virtual calls in constructor 3/3");
}
