//===---------------------------------------------------------------------===//
//      Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	int a;
};

struct B
{
	A* a;
};

void __attribute__((noinline)) func(A** a)
{
	*a = NULL;
}

void webMain()
{
	B b { new A() };
	func(&b.a);
	A* volatile a2 = b.a;
	assertEqual(a2, nullptr, "Pointers to structs in structs");
}
