//===---------------------------------------------------------------------===//
//	Copyright 2018 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	char c;
};

struct B: public A
{
	float f;
};


B b;

A* volatile a1 = &b;

char* volatile c1 = &b.c;

struct C
{
	A a;
	float f;
};

C c = { { 'A' }, 42.0f };

A* volatile a2 = &c.a;

char* volatile c2 = &c.a.c;

float* volatile f2 = &c.f;

void* volatile v = &b;

void webMain()
{
	b.c = 'A';
	b.f = 42.0f;
	assertEqual(a1->c, 'A', "Better generation of constant init for globals 1/6");
	assertEqual(*c1, 'A', "Better generation of constant init for globals 2/6");

	assertEqual(a2->c, 'A', "Better generation of constant init for globals 3/6");
	assertEqual(*c2, 'A', "Better generation of constant init for globals 4/6");

	assertEqual(*f2, 42.0f, "Better generation of constant init for globals 5/6");

	assertEqual(((B*)v)->f, 42.0f, "Better generation of constant init for globals 6/6");
}
