//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <string>

void webMain()
{
	std::string str;
	assertEqual(str.size(), 0, "String empty construction 1/2");
	assertEqual(str.capacity(), 0, "String empty construction 2/2");
	std::string str2("test");
	assertEqual(str2.size(), 4, "String construction 1/2");
	assertEqual(str2.capacity(), 9, "String construction 2/2");
}
