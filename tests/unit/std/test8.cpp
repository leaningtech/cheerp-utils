//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <map>
#include <unordered_map>

void testMap()
{
	std::map<int, int> a;
	assertEqual(a.size(), 0u, "std::map 1/4");
	a.insert(std::make_pair(1,2));
	assertEqual(a.size(), 1u, "std::map 2/4");
	a.insert(std::make_pair(10,11));
	a.insert(std::make_pair(99,100));
	a.insert(std::make_pair(100,101));
	a.insert(std::make_pair(100,101));
	a.insert(std::make_pair(-2, -1));
	assertEqual(a.size(), 5u, "std::map 3/4");
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

void testMultiMap()
{
	std::multimap<int, int> a;
	assertEqual(a.size(), 0u, "std::multimap 1/4");
	a.insert(std::make_pair(1,2));
	assertEqual(a.size(), 1u, "std::multimap 2/4");
	a.insert(std::make_pair(10,11));
	a.insert(std::make_pair(99,100));
	a.insert(std::make_pair(100,101));
	a.insert(std::make_pair(100,101));
	a.insert(std::make_pair(-2, -1));
	assertEqual(a.size(), 6u, "std::multimap 3/4");
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

void testUnorderedMap()
{
	std::unordered_map<int, int> a;
	assertEqual(a.size(), 0u, "std::unordered_map 1/4");
	a.insert(std::make_pair(1,2));
	assertEqual(a.size(), 1u, "std::unordered_map 2/4");
	a.insert(std::make_pair(10,11));
	a.insert(std::make_pair(99,100));
	a.insert(std::make_pair(100,101));
	a.insert(std::make_pair(100,101));
	a.insert(std::make_pair(-2, -1));
	assertEqual(a.size(), 5u, "std::unordered_map 3/4");
	int expected[] = {-2, 99, 100, 10, 1};
	std::unordered_map<int, int>::iterator it = a.begin();
	bool correctOrder = true;
	for(int i=0;i<a.size();i++)
	{
		if(it->first != expected[i] || it->second != expected[i]+1)
			correctOrder = false;
		++it;
	}
	assertEqual(correctOrder, true, "std::unordered_map ordering 4/4");
}

void testUnorderedMapOrPointers()
{
	std::unordered_map<void*, int> a;
	assertEqual(a.size(), 0u, "std::unordered_map of pointers 1/4");
	a.insert(std::make_pair((void*)NULL,2));
	assertEqual(a.size(), 1u, "std::unordered_map of pointers 2/4");
	int i1,i2,i3,i4;
	a.insert(std::make_pair(&i1,11));
	a.insert(std::make_pair(&i2,100));
	a.insert(std::make_pair(&i3,101));
	a.insert(std::make_pair(&i3,101));
	a.insert(std::make_pair(&i4, -1));
	assertEqual(a.size(), 5u, "std::unordered_map of pointers 3/4");
}

void testPointerMap()
{
	//These report an error as maps of pointers are not supported
	//std::map<void*,int> a;
	//std::multimap<void*,int> m;
}

void webMain()
{
	testMap();
	testMultiMap();
	testUnorderedMap();
	testPointerMap();
	testUnorderedMapOrPointers();
}
