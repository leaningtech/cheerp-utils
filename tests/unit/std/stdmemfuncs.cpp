//===---------------------------------------------------------------------===//
//	Copyright 2017 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int b[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	std::uninitialized_copy(&a[0], &a[7], &b[0]);
	assertEqual(b[6], 6, "std::uninitialized_copy 1/2");
	assertEqual(b[7], 0, "std::uninitialized_copy 2/2");
	
	std::uninitialized_fill(&b[0], &b[7], 42);
	assertEqual(b[6], 42, "std::uninitialized_fill 1/2");
	assertEqual(b[7], 0, "std::uninitialized_fill 2/2");

	std::uninitialized_fill_n(&b[0], 7, 43);
	assertEqual(b[6], 43, "std::uninitialized_fill_n 1/2");
	assertEqual(b[7], 0, "std::uninitialized_fill_n 2/2");
}
