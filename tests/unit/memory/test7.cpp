//===---------------------------------------------------------------------===//
//	Copyright 2014-2015 Leaning Technlogies
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
	assertEqual(a->a, 42, "New on class types 1/2");
	A* a2=new (std::nothrow) A;
	assertEqual(a->a, 42, "Nothrow new on class types 2/2");
}
