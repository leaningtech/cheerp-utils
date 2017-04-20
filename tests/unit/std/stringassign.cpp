//===---------------------------------------------------------------------===//
//	Copyright 2017 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <string>

void webMain()
{
	{
		std::string str1;
		str1.reserve(3);
		std::string str2;
		str2.push_back('1');
		str2.push_back('2');
		str2.push_back('5');
		str1 = str2;
		assertEqual(str1, str2, "std::string::assign");
	}
	{
		std::u16string str1;
		str1.reserve(3);
		std::u16string str2;
		str2.push_back('1');
		str2.push_back('2');
		str2.push_back('5');
		str1 = str2;
		assertEqual(str1, str2, "std::u16string::assign");
	}
	{
		std::string str1;
		str1 = 32;
		assertEqual(str1, std::string(" "), "std::string::assign from char 1/3");
		str1 = "A";
		str1 = 32;
		assertEqual(str1, std::string(" "), "std::string::assign from char 2/3");
		str1 = "AB";
		str1 = 32;
		assertEqual(str1, std::string(" "), "std::string::assign from char 3/3");
	}
}
