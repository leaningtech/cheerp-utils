#include "client.h"

using namespace html2;

void webMain()
{
	HTMLDocument* d=Client::getDocument();
	d->write(dom::DOMString("Test"));
}
