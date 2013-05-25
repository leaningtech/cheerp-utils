//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	int a;
	virtual int f()
	{
		return 1;
	}
	virtual ~A()
	{
	}
};

struct B: public A
{
	virtual int f()
	{
		return 2;
	}
	virtual ~B()
	{
	}
};

struct C: public B
{
	virtual int f()
	{
		return 3;
	}
	virtual ~C()
	{
	}
};

void webMain()
{
	C c;
	B* volatile b=&c;
	A* volatile a=&c;

	assertEqual(a->f(), 3, "Complex virtual call 1/5");
	assertEqual(b->f(), 3, "Complex virtual call 2/5");
	assertEqual(c.f(), 3, "Complex virtual call 3/5");

	B b2;
	A* volatile a2=&b2;
	assertEqual(a2->f(), 2, "Complex virtual call 4/5");
	assertEqual(b2.f(), 2, "Complex virtual call 5/5");
}
