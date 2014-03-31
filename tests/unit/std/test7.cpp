//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <set>

void webMain()
{
	std::set<int> a;
	assertEqual(a.size(), 0, "std::set 1/2");
	a.insert(1);
	assertEqual(a.size(), 1, "std::set 2/2");
}
