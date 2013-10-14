//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <stdlib.h>

void webMain()
{
	//Test legacy C memory allocation
	int* volatile a=(int*)malloc(2*sizeof(int));
	a[1] = 42;
	assertEqual(a[1], 42, "Access malloc allocated memory");
	free(a);

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
