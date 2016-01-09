#include <cheerp/client.h>
#include <cheerp/clientlib.h>

using namespace client;

void loadCallback() [[cheerp::client]]
{
	HTMLElement* body=document.get_body();
	HTMLElement* newTitle=document.createElement("h1");
	newTitle->set_textContent("Hello World");
	body->appendChild(newTitle);
}

void webMain() [[cheerp::client]]
{
	document.addEventListener("DOMContentLoaded",cheerp::Callback(loadCallback));
}
