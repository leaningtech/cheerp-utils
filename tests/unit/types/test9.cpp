//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

class A
{
public:
	int a;
};

class B: public A
{
public:
	int b;
};

class C: public B
{
public:
	int c;
};

void webMain()
{
	C c;
	B* b = &c;
	A* a = &c;
	B* b2 = static_cast<B*>(a);
	assertEqual(b, b2, "Pointer equality for classes with downcast array");
}
