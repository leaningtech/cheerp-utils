#include "client.h"

using namespace html2;
using namespace dom;

void webMain()
{
	HTMLDocument_ptr d=Client::getDocument();
	Node_ptr child=d->get_firstChild();
	child->set_textContent("New text");
}
