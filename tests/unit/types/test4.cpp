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

void webMain()
{
	B b;

	assertEqual(b.a, 42, "Alignment at the end of class [1/2]");
	assertEqual(b.b, 0xdeadbeaf, "Alignment at the end of class [2/2]");
}
