//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <list>

namespace {

struct Point
{
	int x;
	int y;
};

};

void webMain()
{
	std::list<Point> l;
	assertEqual(l.size(), 0u, "List construction");
	l.insert(l.begin(),Point{.x=1,.y=2});
	assertEqual(l.size(), 1u, "List insert");
}
