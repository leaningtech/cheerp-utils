#include "client.h"
#include "server.h"

#include <iostream>

using namespace html2;
using namespace dom;

DOMString serverTest(int i) [[server]]
{
	std::cout << "SERVER TEST " << i << std::endl;
	return "ServerSide";
}

void webMain() [[client]]
{
	HTMLDocument* d=Client::getDocument();
	const DOMString& str=serverTest(1);
	d->write(str);
}
