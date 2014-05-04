//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct C
{
	float c;
	C():c(3){}
};

struct B
{
	int b;
	B():b(1){}
};

struct A: public B, public C
{
	int a;
	A():a(2){}
};

void webMain()
{
	A a;
	B* volatile b=&a;
	C* volatile c=&a;
	A* volatile a2=static_cast<A*>(b);
	assertEqual(a2->a, 2, "Downcast 1/2");
	A* volatile a3=static_cast<A*>(c);
	assertEqual(a3->a, 2, "Downcast 2/2");
}
