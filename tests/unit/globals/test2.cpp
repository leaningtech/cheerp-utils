//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	int x,y;
	A():x(1),y(2) {}
};

static A a;

static int* ptrX=&a.x;

void webMain()
{
	int a=*ptrX;
	assertEqual(a, 1, "Access to member of global structures");
}
