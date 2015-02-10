//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

class A
{
public:
	int a;
	A():a(42)
	{
	}
};

class B
{
public:
	A a[2];
};

void webMain()
{
	B b;
	assertEqual(b.a[1].a, 42, "Initialization of arrays in classes");
}
