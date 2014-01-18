//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

class A
{
public:
	char a;
};

class B: public A
{
public:
	int b;
	B():b(0xdeadbeaf)
	{
		a=42;
	}
};

class C
{
public:
	short a;
	unsigned int b : 1;
	C():a(3),b(1)
	{
	}
};

void webMain()
{
	B b;

	assertEqual(b.a, 42, "Alignment at the end of class [1/3]");
	assertEqual(b.b, 0xdeadbeaf, "Alignment at the end of class [2/3]");

	volatile C c;
	assertEqual(c.a, 3, "Alignment at the end of class [3/3]");
}
