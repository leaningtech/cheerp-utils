//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <mutex>
#include <atomic>

void webMain()
{
	//Test mutex
	std::mutex m;
	m.lock();
	m.unlock();
	assertEqual(true, true, "Fake mutex support");
	//Test atomic
	std::atomic<int> a(1);
	a++;
	a--;
	++a;
	assertEqual(a.load(), 2, "Fake atomic support");
}
