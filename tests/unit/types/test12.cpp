//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

union U
{
	struct { double x, y, z; };
	double a[3];
};

struct A
{
	U u;
};

// Partial global initialization to test TypeOptimizer
U globalU = { 42, 43 };

void webMain()
{
	// Force globalU linking
	U* volatile gU = &globalU;

	//Test struct in union
	volatile U u;
	u.a[0] = 42;
	u.a[1] = 43;
	u.a[2] = 44;
	assertEqual(u.x, 42.0f, "Struct in unions 1/6");
	assertEqual(u.y, 43.0f, "Struct in unions 2/6");
	assertEqual(u.z, 44.0f, "Struct in unions 3/6");

	volatile A a;
	a.u.a[0] = 45;
	a.u.a[1] = 46;
	a.u.a[2] = 47;
	assertEqual(a.u.x, 45.0f, "Struct in unions 4/6");
	assertEqual(a.u.y, 46.0f, "Struct in unions 5/6");
	assertEqual(a.u.z, 47.0f, "Struct in unions 6/6");

	volatile double* volatile f = &u.a[1];
	assertEqual(f[-1], 42.0f, "Pointers from arrays in unions 1/3");
	assertEqual(f[0], 43.0f, "Pointers from arrays in unions 2/3");
	assertEqual(f[1], 44.0f, "Pointers from arrays in unions 3/3");
}
