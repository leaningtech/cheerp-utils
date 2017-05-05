//===---------------------------------------------------------------------===//
//	Copyright 2017 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <map>
#include <unordered_map>

struct A
{
	~A()
	{
		destructionCount++;
	}
	static int destructionCount;
};

int A::destructionCount = 0;

void webMain()
{
	std::map<int, A> m1;
        m1[1];
	m1.clear();
	assertEqual(A::destructionCount, 1, "Destructors in std::map 1/2");
	std::unordered_map<int, A> m2;
        m2[1];
	m2.clear();
	assertEqual(A::destructionCount, 2, "Destructors in std::map 2/2");
}
