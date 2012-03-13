#include "client.h"

using namespace html2;
using namespace dom;

void webMain()
{
	HTMLDocument* d=Client::getDocument();
	Node* child=d->get_firstChild();
	child->set_textContent("New text");
}
