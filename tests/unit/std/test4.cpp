//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <iostream>
#include <sstream>

void webMain()
{
#ifndef PRE_EXECUTE_TEST
	//iostream and sstream test
	std::cout << "Cout output : SUCCESS" << std::endl;
	std::cerr << "Cerr output : SUCCESS" << std::endl;
#endif
	std::ostringstream str;
	str << "test " << 42;
	assertEqual(str.str().c_str(), "test 42", "stringstream");
}
