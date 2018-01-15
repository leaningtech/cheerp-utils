//===---------------------------------------------------------------------===//
//	Copyright 2018 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

class A
{
public:
	static int constructionCount;
	static int destructionCount;
	int a;
	A():a(42)
	{
		constructionCount++;
	}
	~A()
	{
		destructionCount++;
	}
};

int A::constructionCount = 0;
int A::destructionCount = 0;

void webMain()
{
	A* a = new A[10];
	delete[] a;
	assertEqual(A::constructionCount, 10, "Array new support 1/2");
	assertEqual(A::destructionCount, 10, "Array new support 2/2");

}
