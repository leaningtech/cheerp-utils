//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <stdlib.h>

struct A
{
	int a;
	float b;
};

union BL
{
	int a;
	float b;
};

void webMain()
{
	//Test legacy C memory allocation
	int* volatile a=(int*)malloc(2*sizeof(int));
	a[1] = 42;
	assertEqual(a[1], 42, "Access malloc allocated memory");
	free(a);

	//Test legacy C memory calloc
	int* volatile d=(int*)calloc(2,sizeof(int));
	d[1] = 45;
	assertEqual(d[1], 45, "Access calloc allocated memory 1/3");
	free(d);
	d=(int*)calloc(1,sizeof(int)*2);
	d[1] = 44;
	assertEqual(d[1], 44, "Access calloc allocated memory 2/3");
	free(d);
	volatile int elementCount = 1;
	d=(int*)calloc(elementCount,sizeof(int)*2);
	d[1] = 43;
	assertEqual(d[1], 43, "Access calloc allocated memory 3/3");
	free(d);

	//Test legacy C memory realloc
	a[0] = 46;
	int* volatile e=(int*)realloc(a, 1*sizeof(int));
	assertEqual(e[0], 46, "Access realloc-ed memory 1/6");
	int* volatile f=(int*)realloc(e, 3*sizeof(int));
	f[1] = 47;
	assertEqual(f[1], 47, "Access realloc-ed memory 2/6");
	A* volatile objA= (A*)malloc(2*sizeof(A));
	objA[0].a = 42;
	A* volatile objB = (A*)realloc(objA, 1*sizeof(A));
	assertEqual(objB[0].a, 42, "Access realloc-ed memory 3/6");
	A* volatile objC = (A*)realloc(objB, 3*sizeof(A));
	objC[2].a = 43;
	assertEqual(objC[2].a, 43, "Access realloc-ed memory 4/6");
	BL* volatile objBLA= (BL*)malloc(2*sizeof(BL));
	objBLA[0].b = 2.3;
	BL* volatile objBLB = (BL*)realloc(objBLA, 1*sizeof(BL));
	assertEqual(objBLB[0].a, 1075000115, "Access realloc-ed memory 5/6");
	BL* volatile objBLC = (BL*)realloc(objBLB, 3*sizeof(BL));
	objBLC[2].b = 2.4;
	assertEqual(objBLC[2].a, 1075419546, "Access realloc-ed memory 6/6");

	//Test C++ memory allocation
	int* volatile b=new int[2];
	b[1]=43;
	assertEqual(b[1], 43, "Access new allocated memory");
	delete[] b;

	//Test variable sized C++ memory alllocation
	volatile int n = 2;
	int* volatile c=new int[n];
	c[1]=44;
	assertEqual(c[1], 44, "Access variable sized new allocated memory");
	delete[] c;
}
