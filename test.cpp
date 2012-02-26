#include "client.h"

using namespace html2;

void webMain()
{
	HTMLDocument_ptr d=Client::getDocument();
	d->write("Test");
}
