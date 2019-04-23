//===---------------------------------------------------------------------===//
//	Copyright 2019 Leaning Technlogies
//===---------------------------------------------------------------------===//

#include <tests.h>
#include <cheerp/client.h>
#include <string>
#include <iostream>

#include <cstddef>

[[cheerp::genericjs]] client::String* s = new client::String("aaa");
std::string ss = "bbb";

int main()
{
	assertEqual(ss, std::string("bbb"), "Static constructors 1/2");
	return 1;
}

[[cheerp::genericjs]] void webMain()
{
	main();
	client::String* i = new client::String("aaa");
	assertEqualImpl(s == i, "Static constructor 2/2");
}
