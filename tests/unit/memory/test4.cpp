//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	int a;
	float b;
	virtual void f()
	{
	}
	A(int x, float y):a(x),b(y)
	{
	}
};

void webMain()
{
	//Test copy constructor, it must not use memcpy
	A a1(10, 0.2);
	A a2(0,0);

	assertEqual(a2.a, 0, "C++ implicit operator=() 1/4");
	assertEqual(a2.b, 0, "C++ implicit operator=() 2/4");
	a2 = a1;
	assertEqual(a2.a, 10, "C++ implicit operator=() 3/4");
	assertEqual(a2.b, 0.2, "C++ implicit operator=() 4/4");
}
