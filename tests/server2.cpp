#include "client.h"
#include "xhr.h"
#include "server.h"

#include <iostream>

void serverTest(int a) [[server]]
{
	std::cout << "CALLED ON THE SERVER" << std::endl;
	std::cerr << "INT2 " << a << std::endl;
}

void serverTest2() [[server]]
{
	std::cerr << "NO ARGS" << std::endl;
}

void serverTest3(int a, float f) [[server]]
{
	std::cerr << "INT " << a << std::endl;
	std::cerr << "FLOAT " << f << std::endl;
}

void clientTest() [[client]]
{
	serverTest(10);
}

void webMain() [[client]]
{
	serverTest(9);
	serverTest2();
	serverTest3(2, 9.2);
}
