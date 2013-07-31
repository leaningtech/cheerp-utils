//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	//Test pointer arithmetic
	int a[6] = { 1, 2, 3, 4, 5, 6};

	int* volatile a1=&a[1];
	int* volatile a2=&a[5];
	assertEqual(a2-a1, 4, "Pointer subtraction");

	int* volatile a3=a+2;
	assertEqual(*a3, 3, "Pointer addition");
}
