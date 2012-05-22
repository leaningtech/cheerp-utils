#include "client.h"
#include "server.h"

#include <iostream>

using namespace html2;
using namespace dom;

DOMString serverTest(int i, float f) [[server]]
{
	std::cout << "SERVER TEST " << i << std::endl;
	std::cout << "SERVER TEST " << f << std::endl;
	return "ServerSide";
}

void webMain() [[client]]
{
	HTMLDocument* d=Client::getDocument();
	const DOMString& str=serverTest(1,2);
	d->write(str);
}
