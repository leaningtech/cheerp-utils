#include "client.h"
#include "server.h"

using namespace html2;
using namespace dom;

DOMString serverTest(int) [[server]]
{
	__asm__("int $3");
	return "ServerSide";
}

void webMain() [[client]]
{
	HTMLDocument* d=Client::getDocument();
	const DOMString& str=serverTest(1);
	d->write(str);
}
