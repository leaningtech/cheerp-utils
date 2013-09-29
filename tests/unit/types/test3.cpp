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
};

void webMain()
{
	C c;
	B* volatile b = &c;
	A* volatile a = &c;
}
