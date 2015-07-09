//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	int a;
	A():a(1)
	{
	}
	virtual A* clone()
	{
		return new A(*this);
	}
	virtual ~A()
	{
	}
};

struct B: public A
{
	B()
	{
		a=2;
	}
	virtual ~B()
	{
	}
	virtual B* clone()
	{
		return new B(*this);
	}
};

struct C
{
	virtual ~C()
	{
	}
	int c;
};

struct D: public C, public A
{
	D()
	{
		a=3;
	}
	virtual ~D()
	{
	}
	virtual D* clone()
	{
		return new D(*this);
	}
};

void webMain()
{
	B b;
	A* volatile a=&b;
	A* a2=a->clone();
	B* b2=b.clone();

	assertEqual(a2->a, 2, "Covariant return types 1/4");
	assertEqual(b2->a, 2, "Covariant return types 2/4");

	D d;
	A* volatile a3=&d;
	A* a4=a3->clone();
	D* d2=d.clone();

	assertEqual(a4->a, 3, "Covariant return types 3/4");
	assertEqual(d2->a, 3, "Covariant return types 4/4");
}
