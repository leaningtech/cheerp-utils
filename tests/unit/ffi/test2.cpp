
//===---------------------------------------------------------------------===//
//	Copyright 2017 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct Foo {
	int i;
	Foo* next;
	Foo(int i, Foo* next): i(i), next(next)
	{}
};

[[cheerp::genericjs]]
int process_foo(const Foo& f)
{
	return f.i+ (f.next == nullptr? 0 : process_foo(*f.next));
}

void webMain()
{
	Foo f(1,new Foo(2, new Foo(3, nullptr)));
	assertEqual(process_foo(f), 6, "ffi store support for RAW pointers");
}
