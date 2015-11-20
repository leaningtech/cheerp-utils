//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	const char test[] = {0, 1, 4, 5*2};
	assertEqual<char>(test[2], 4, "Constant arrays in methods");
}
