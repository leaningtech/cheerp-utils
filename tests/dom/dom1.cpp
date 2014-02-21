#include <duetto/client.h>
#include <duetto/clientlib.h>

using namespace client;

void loadCallback() [[client]]
{
	HTMLElement* body=document.get_body();
	HTMLElement* newTile=document.createElement("h1");
	newTile->set_textContent("Hello World");
	body->appendChild(newTile);
}

void webMain() [[client]]
{
	document.addEventListener("DOMContentLoaded",Callback(loadCallback));
}
