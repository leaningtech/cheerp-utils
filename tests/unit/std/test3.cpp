//===---------------------------------------------------------------------===//
//	Copyright 2013,2016 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <string>

void webMain()
{
	std::string str;
	assertEqual(str.size(), 0u, "String empty construction 1/2");
	assertEqual(str.capacity(), 0u, "String empty construction 2/2");
	std::string str2("test");
	assertEqual(str2.size(), 4u, "String construction 1/2");
	assertEqual(str2.capacity(), 15u, "String construction 2/2");
	str2.insert(0, "pre", 3);
	assertEqual(str2, std::string("pretest"), "String insertion 1/2");
	str2.insert(0, str2.data()+3, 4);
	assertEqual(str2, std::string("testpretest"), "String insertion 2/2");
	std::string a("BBBBB-CCC-");
	a.append("AAAAAA",6);
	assertEqual(a, std::string("BBBBB-CCC-AAAAAA"), "String concatenation");
}
