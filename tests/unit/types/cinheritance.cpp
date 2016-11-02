//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct BaseStruct
{
	int a;
	float b;
};

struct DerivedStruct
{
	BaseStruct base;
	int c;
};

struct DerivedStruct2
{
	DerivedStruct2():base({2,4}),c(5)
	{
	}
	BaseStruct base;
	int c;
};

DerivedStruct2 gd2;

void webMain()
{
	//Test merging of the first struct member into the class
	//this is useful to support C-style polymorphism
	DerivedStruct s = { { 1, 2.5f }, 2 };
	DerivedStruct* volatile d = &s;

	assertEqual(d->base.a, 1, "C-style polymorphism 1/5");
	assertEqual(d->base.b, 2.5f, "C-style polymorphism 2/5");
	assertEqual(d->c, 2, "C-style polymorphism 3/5");

	BaseStruct* volatile b = (BaseStruct*)d;
	assertEqual(b->a, 1, "C-style polymorphism 4/5");
	assertEqual(b->b, 2.5f, "C-style polymorphism 5/5");
}
