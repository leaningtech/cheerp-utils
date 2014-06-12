//===---------------------------------------------------------------------===//
//      Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

int fwd( int(*f)(int), int i )
{
	return f(i);
}

int g(int i) { return i*2; }

int (*ptr)( int(*)(int), int ) = &fwd;

void webMain()
{
	assertEqual( ptr(&g, 2), 4, "Indirect call with pointer to function" );
}
