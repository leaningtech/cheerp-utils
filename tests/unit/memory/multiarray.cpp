//===---------------------------------------------------------------------===//
//	Copyright 2018 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

class A
{
public:
	static volatile int constructionCount;
	int a;
	A():a(42)
	{
		constructionCount++;
	}
};

volatile int A::constructionCount = 0;

void webMain()
{
	volatile int a[3][4];
	for(int i=0;i<12;i++)
		a[i / 4][i % 4] = i;
	int aTotal = 0;
	for(int i=0;i<12;i++)
		aTotal += a[i / 4][i % 4];
	assertEqual(aTotal, 66, "Multiarray support 1/");
	volatile int(*b)[4] = new int[3][4];
	for(int i=0;i<12;i++)
		b[i / 4][i % 4] = i;
	int bTotal = 0;
	for(int i=0;i<12;i++)
		bTotal += b[i / 4][i % 4];
	assertEqual(bTotal, 66, "Multiarray support 2/");
	A c[3][4];
	assertEqual(int(A::constructionCount), 12, "Multiarray support 3/");
	A (*d)[4] = new A[3][4];
	assertEqual(int(A::constructionCount), 24, "Multiarray support 4/");
}
