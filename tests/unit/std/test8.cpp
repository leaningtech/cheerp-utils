//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <map>

void testMap()
{
	std::map<int, int> a;
	assertEqual(a.size(), 0, "std::map 1/4");
	a.insert(std::make_pair(1,2));
	assertEqual(a.size(), 1, "std::map 2/4");
	a.insert(std::make_pair(10,11));
	a.insert(std::make_pair(99,100));
	a.insert(std::make_pair(100,101));
	a.insert(std::make_pair(100,101));
	a.insert(std::make_pair(-2, -1));
	assertEqual(a.size(), 5, "std::map 3/4");
	int expected[] = {-2, 1, 10, 99, 100};
	std::map<int, int>::iterator it = a.begin();
	bool correctOrder = true;
	for(int i=0;i<a.size();i++)
	{
		if(it->first != expected[i] || it->second != expected[i]+1)
			correctOrder = false;
		++it;
	}
	assertEqual(correctOrder, true, "std::map ordering 4/4");
}

void testMultimap()
{
	std::multimap<int, int> a;
	assertEqual(a.size(), 0, "std::multimap 1/4");
	a.insert(std::make_pair(1,2));
	assertEqual(a.size(), 1, "std::multimap 2/4");
	a.insert(std::make_pair(10,11));
	a.insert(std::make_pair(99,100));
	a.insert(std::make_pair(100,101));
	a.insert(std::make_pair(100,101));
	a.insert(std::make_pair(-2, -1));
	assertEqual(a.size(), 6, "std::multimap 3/4");
	int expected[] = {-2, 1, 10, 99, 100, 100};
	std::multimap<int, int>::iterator it = a.begin();
	bool correctOrder = true;
	for(int i=0;i<a.size();i++)
	{
		if(it->first != expected[i] || it->second != expected[i]+1)
			correctOrder = false;
		++it;
	}
	assertEqual(correctOrder, true, "std::multimap ordering 4/4");
}

void webMain()
{
	testMap();
	testMultimap();
}
