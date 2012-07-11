#include "client.h"
#include "xhr.h"
#include "server.h"

#include <iostream>

void serverTest(int) [[server]]
{
	std::cout << "CALLED ON THE SERVER" << std::endl;
}

void clientTest() [[client]]
{
	serverTest(10);
}

void webMain() [[client]]
{
}
