//===---------------------------------------------------------------------===//
//	Copyright 2018 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct [[cheerp::genericjs]] A
{
	virtual int f()
	{
		return 42;
	}
	virtual ~A()
	{
	}
};

struct [[cheerp::genericjs]] B: public A
{
	virtual int f()
	{
		return 43;
	}
};

struct [[cheerp::wasm]] C
{
	virtual int f()
	{
		return 44;
	}
	virtual ~C()
	{
	}
};

struct [[cheerp::wasm]] D: public C
{
	virtual int f()
	{
		return 45;
	}
};

[[cheerp::genericjs]] int runGeneric(A* a)
{
	return a->f();
}

[[cheerp::wasm]] int runWasm(C* c)
{
	return c->f();
}

void webMain()
{
	B b;
	D d;
	A* volatile a = &b;
	C* volatile c = &d;
	assertEqual(runGeneric(a), 43, "Virtual calls in both modes 1/2");
	assertEqual(runWasm(c), 45, "Virtual calls in both modes 2/2");
}
