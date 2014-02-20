//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <mutex>

void webMain()
{
	//Test mutex
	std::mutex m;
	m.lock();
	m.unlock();
	assertEqual(true, true, "Fake mutex support");
}
