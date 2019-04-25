//===---------------------------------------------------------------------===//
//	Copyright 2019 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

#include <cstdio>
#include <cstdlib>

int foo(int a, int b, int c, int d)
{
	return a+b+c+d;
}
int bar(int a, int b, int c, int d, int e)
{
	return a+b+c+d+e;
}

typedef int (*fptr)(int, int, int, int, int);
void webMain()
{
	fptr f = unitBlackBox(1) ? (fptr)foo : bar;
	int r = f(1,2,3,4,5);
	assertEqual(r, 10, "FixFunctionCasts 1/1");
}
