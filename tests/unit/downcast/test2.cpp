//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	int a;
	A() : a(1){}
};

struct B: public A
{
	int b;
	B():b(2){}
};

void docheck(A * p)
{
    B * a = static_cast<B*>(p);

    assertEqual(a[4].b, 32, "Downcast on array 1/2");
    assertEqual(a[6].a, 15, "Downcast on array 2/2");
}

void webMain()
{
	B e[10];
	
	e[4].b = 32;
	e[6].a = 15;
        
        docheck(e);
}
