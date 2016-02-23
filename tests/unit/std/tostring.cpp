//===---------------------------------------------------------------------===//
//	Copyright 2016 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <string>

void webMain()
{
	std::string val = std::to_string(40.0f);
	assertEqual<std::string>(val, "40.000000", "std::to_string for floats");
}
