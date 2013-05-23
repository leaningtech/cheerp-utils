//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct X
{
	double x;
	virtual ~X()
	{
	}
};

struct B
{
	int b;
	B():b(1){}
	virtual ~B()
	{
	}
	virtual int f()
	{
		return b;
	}
};

struct A: public X, public B
{
	int a;
	A():a(2){}
	~A()
	{
	}
	int f()
	{
		return a;
	}
};

void webMain()
{
	A a;
	A* volatile a2=&a;
	B* volatile b=&a;

	assertEqual(b->f(), 2, "Simple virtual call 1/2");
	assertEqual(a2->f(),2, "Simple virtual call 2/2");
}
