//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

class A
{
public:
	int a;
	A(int _a):a(_a)
	{
	}
};

void webMain()
{
	//Test new with [[cheerp::nonit]]
	//Note that A has no default constructor
	A* a=new A[2] [[cheerp::noinit]];
	a[1].a = 42;
	assertEqual(a[1].a, 42, "New array with [[cheerp::noinit]]");
	A(*a2)[3]=new A[2][3] [[cheerp::noinit]];
	a2[1][1].a = 43;
	assertEqual(a2[1][1].a, 43, "New multi array with [[cheerp::noinit]]");
	A* a3=new A [[cheerp::noinit]];
	a3->a = 44;
	assertEqual(a3->a, 44, "New with [[cheerp::noinit]]");
}
