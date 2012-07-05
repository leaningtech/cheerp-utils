#include "xhr.h"

void webMain() [[client]]
{
	client::XMLHttpRequest* r=new client::XMLHttpRequest();
	r->open("GET","http://127.0.0.1");
	r->send();
}
