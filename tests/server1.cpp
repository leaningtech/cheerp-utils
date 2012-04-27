#include "client.h"

using namespace html2;
using namespace dom;

DOMString serverTest() [[server]]
{
	return "ServerSide";
}

void webMain() [[client]]
{
	HTMLDocument* d=Client::getDocument();
	const DOMString& str=serverTest();
	d->write(str);
}

