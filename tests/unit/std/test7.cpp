//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <set>
#include <unordered_set>

void testSet()
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

void testMultiSet()
{
	std::multiset<int> a;
	assertEqual(a.size(), 0, "std::multiset 1/4");
	a.insert(1);
	assertEqual(a.size(), 1, "std::multiset 2/4");
	a.insert(10);
	a.insert(99);
	a.insert(100);
	a.insert(100);
	a.insert(-2);
	assertEqual(a.size(), 6, "std::multiset 3/4");
	int expected[] = {-2, 1, 10, 99, 100, 100};
	std::multiset<int>::iterator it = a.begin();
	bool correctOrder = true;
	for(int i=0;i<a.size();i++)
	{
		if(*it != expected[i])
			correctOrder = false;
		++it;
	}
	assertEqual(correctOrder, true, "std::multiset ordering 4/4");
}

void testUnorderedSet()
{
	std::unordered_set<int> a;
	assertEqual(a.size(), 0, "std::unordered_set 1/4");
	a.insert(1);
	assertEqual(a.size(), 1, "std::unordered_set 2/4");
	a.insert(10);
	a.insert(99);
	a.insert(100);
	a.insert(100);
	a.insert(-2);
	assertEqual(a.size(), 5, "std::unordered_set 3/4");
	int expected[] = {-2, 99, 100, 10, 1};
	std::unordered_set<int>::iterator it = a.begin();
	bool correctOrder = true;
	for(int i=0;i<a.size();i++)
	{
		if(*it != expected[i])
			correctOrder = false;
		++it;
	}
	assertEqual(correctOrder, true, "std::unordered_set ordering 4/4");
}

void testUnorderedSetOfPointers()
{
	std::unordered_set<void*> a;
	assertEqual(a.size(), 0, "std::unordered_set of pointers 1/4");
	a.insert(NULL);
	assertEqual(a.size(), 1, "std::unordered_set of pointers 2/4");
	int i1,i2,i3,i4;
	a.insert(&i1);
	a.insert(&i2);
	a.insert(&i3);
	a.insert(&i3);
	a.insert(&i4);
	assertEqual(a.size(), 5, "std::unordered_set of pointers 3/4");
}

void testPointerSet()
{
	//These report an error as sets of pointers are not supported
	//std::set<void*> a;
	//std::multiset<void*> m;
}

void webMain()
{
	testSet();
	testMultiSet();
	testUnorderedSet();
	testPointerSet();
	testUnorderedSetOfPointers();
}
