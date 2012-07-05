#include "client.h"
#include "server.h"

#include <iostream>
#include <string>

using namespace client;

std::string serverTest(int i, float f) [[server]]
{
	std::cout << "SERVER TEST " << i << std::endl;
	std::cout << "SERVER TEST " << f << std::endl;
	return "ServerSide";
}

void webMain() [[client]]
{
	Document* d=Client::getDocument();
//	const DOMString& str=serverTest(1,2);
	const std::string str("CreateTest");
	//d->write("CreateTest");
	d->write(str);
}
