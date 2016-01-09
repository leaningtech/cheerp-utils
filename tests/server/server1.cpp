#include <cheerp/server.h>
#include <iostream>

std::string serverTest(int i, float f) [[cheerp::server]]
{
	std::cout << "Expected -42: " << i << "\n";
	std::cout << "Expected 0.0021: " << f << "\n";
	return "ServerTest";
}
