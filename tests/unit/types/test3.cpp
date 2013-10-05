//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

class A
{
};

class B: public A
{
};

class C: public B
{
	union u
	{
		int a;
		float b;
	};
	u namedUnion;
	union
	{
		float c;
		int d;
	};
};

void webMain()
{
	C c;
	B* volatile b = &c;
	A* volatile a = &c;
}
