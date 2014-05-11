//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

class A
{
public:
	int a;
	A(int i=42):a(i)
	{
	}
};

class B: public A
{
public:
	float f;
	B(int i=43):A(i),f(2.3f)
	{
	}
};

class C
{
public:
	B b;
	C():b(44)
	{
	}
};

class D
{
public:
	B* b;
	D():b(NULL)
	{
		b = new B(45);
	}
};

void webMain()
{
	A a;
	B b;
	C c;
	D d;
	assertEqual(a.a, 42, "Struct flattening 1/5");
	assertEqual(b.a, 43, "Struct flattening 2/5");
	assertEqual(b.f, 2.3f, "Struct flattening 3/5");
	assertEqual(c.b.a, 44, "Struct flattening 4/5");
	assertEqual(d.b->a, 45, "Struct flattening 5/5");
}
