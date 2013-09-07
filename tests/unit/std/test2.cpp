//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <functional>

int func()
{
	return 42;
}

void webMain()
{
	std::function<int()> f=func;
	assertEqual(f(), 42, "Function object");
}
