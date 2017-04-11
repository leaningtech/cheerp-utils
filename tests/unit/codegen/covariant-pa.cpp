//===---------------------------------------------------------------------===//
//	Copyright 2017 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	int val = 42;
	virtual A* covariantFunc()
	{
		return this;
	}
};

struct B: public A
{
	B* covariantFunc() override
	{
		return this;
	}
};

void webMain()
{
	struct A* volatile a = new B;
	A* ret1 = a->covariantFunc();
	// Force REGULAR representation for returned A*
	volatile intptr_t forceRegular = reinterpret_cast<intptr_t>(ret1);
	assertEqual(ret1->val, 42, "PointerAnalyzer safety for covariant returns");
}
