//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <list>

class Point
{
public:
	int x;
	int y;
	Point():x(1),y(2){}
};

void webMain()
{
	std::list<Point> l;
	assertEqual(l.size(), 0, "List construction");
}
