#include "client.h"
#include "server.h"

#include <iostream>
#include <string>

using namespace html2;
using namespace dom;

std::string serverTest(int i, float f) [[server]]
{
	std::cout << "SERVER TEST " << i << std::endl;
	std::cout << "SERVER TEST " << f << std::endl;
	return "ServerSide";
}

void webMain() [[client]]
{
	HTMLDocument* d=Client::getDocument();
//	const DOMString& str=serverTest(1,2);
	const std::string str("CreateTest");
	//d->write("CreateTest");
	d->write(str);
}
