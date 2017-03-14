//===---------------------------------------------------------------------===//
//	Copyright 2017 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <chrono>

void webMain()
{
	std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
	std::chrono::high_resolution_clock::time_point t2 = t1+std::chrono::high_resolution_clock::duration(1);
	assertEqual((t2-t1).count(), 1LL, "std::chrono");
}
