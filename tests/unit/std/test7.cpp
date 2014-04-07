//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <set>

void webMain()
{
	std::set<int> a;
	assertEqual(a.size(), 0, "std::set 1/4");
	a.insert(1);
	assertEqual(a.size(), 1, "std::set 2/4");
	a.insert(10);
	a.insert(99);
	a.insert(100);
	a.insert(100);
	a.insert(-2);
	assertEqual(a.size(), 5, "std::set 3/4");
	int expected[] = {-2, 1, 10, 99, 100};
	std::set<int>::iterator it = a.begin();
	bool correctOrder = true;
	for(int i=0;i<a.size();i++)
	{
		if(*it != expected[i])
			correctOrder = false;
		++it;
	}
	assertEqual(correctOrder, true, "std::set ordering 4/4");
}
