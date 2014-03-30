//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <list>

using namespace std;

void webMain()
{
	struct A
	{
		list<int> v;
		int a,b;
	} obj;

	list<A> l;

	l.push_back(move(obj));
	assertEqual(l.size(), 1, "List push_back 1/2");
	l.push_back(obj);
	assertEqual(l.size(), 2, "List push_back 2/2");
}
