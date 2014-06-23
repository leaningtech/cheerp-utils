//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

class A
{
public:
	int a;
	A():a(42)
	{
	}
};

void webMain()
{
	//Test new on classes
	A* a=new A;
	assertEqual(a->a, 42, "New on class types");
}
