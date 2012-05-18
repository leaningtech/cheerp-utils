#include "../client.h"

using namespace html2;
using namespace dom;

DOMString serverTest() [[server]]
{
	__asm__("int $3");
	return "ServerSide";
}

void webMain() [[client]]
{
	HTMLDocument* d=Client::getDocument();
	const DOMString& str=serverTest();
	d->write(str);
}
