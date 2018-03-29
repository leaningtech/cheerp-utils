//===---------------------------------------------------------------------===//
//	Copyright 2018 Leaning Technlogies
//===---------------------------------------------------------------------===//

#include <tests.h>

struct X
{
	double x;
	virtual ~X()
	{
	}
};

struct J {
	int j{10};
	virtual ~J()
	{
	}
};
struct K {
	int k{20};
	virtual int f() {
		return k;
	}
};
struct B: public K, public  J
{
	int b;
	B():b(1){}
	virtual ~B()
	{
	}
	virtual int f() override
	{
		return b;
	}
};

struct A: public X, public virtual B
{
	int a;
	A():a(2){}
	~A()
	{
	}
	int f() override
	{
		return a;
	}
};

void webMain()
{
	A a;
	A* volatile a2=&a;
	B* volatile b=&a;
	K* volatile k=&a;

	assertEqual(2, b->f(), "Virtual Bases This adjustment 1/3");
	assertEqual(2, a2->f(), "Virtual Bases This adjustment 2/3");
	assertEqual(2, k->f(), "Virtual Bases This adjustment 3/3");
}
