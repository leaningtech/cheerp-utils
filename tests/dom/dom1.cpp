#include <duetto/client.h>
#include <duetto/clientlib.h>
#include <duetto/webgl.h>

using namespace client;

void loadCallback() [[client]]
{
	HTMLElement* body=document.get_body();
	HTMLElement* newTile=document.createElement("h1");
	newTile->set_textContent("Hello World");
	body->appendChild(newTile);
}

int webMain() [[client]]
{
	document.addEventListener("DOMContentLoaded",Callback(loadCallback));
	return 0;
}
