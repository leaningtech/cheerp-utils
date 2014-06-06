#ifdef __CHEERP_CLIENT__
#include <cheerp/client.h>
#include <cheerp/clientlib.h>
#endif
#ifdef __CHEERP_SERVER__
#include <cheerp/server.h>
#endif
#include <iostream>

void serverTest(int a) [[server]]
{
	std::cout << "Server side call [" << a << "/4]" << std::endl;
}

void serverTest2() [[server]]
{
	std::cout << "Server side call [2/4]" << std::endl;
}

void serverTest3(int a, float f) [[server]]
{
	std::cout << "Server side call [" << a << '/' << f << "]" << std::endl;
}

void clientTest() [[client]]
{
	serverTest(4);
}

void webMain() [[client]]
{
	serverTest(1);
	serverTest2();
	serverTest3(3, 4);
	client::document.addEventListener("DOMContentLoaded",cheerp::Callback(clientTest));
}
