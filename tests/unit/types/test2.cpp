//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct S
{
	int i;
};

struct T
{
	float f;
};

void webMain()
{
	//Test casting to void*
	void* volatile opaque1 = (void*)0;
	float a = 0.2f;

	opaque1 = &a;

	float* pa = (float*)opaque1;
	assertEqual(*pa, 0.2f, "Float, cast to void* and back");

	S s;
	s.i = 42;
	opaque1 = &s;

	S* ps = (S*)opaque1;
	assertEqual(ps->i, 42, "Structure, cast to void* and back 1/2");

	T t;
	t.f = 42;
	opaque1 = &t;

	T* pt = (T*)opaque1;
	assertEqual(pt->f, 42.f, "Structure, cast to void* and back 2/2");
}
