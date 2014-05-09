#ifdef __DUETTO_CLIENT__
#include <duetto/client.h>
#endif
#ifdef __DUETTO_SERVER__
#include <duetto/server.h>
#endif

inline std::string serverTest() [[server]]
{
	return "String created on the server";
}

void clientTest() [[client]]
{
	std::string ret=serverTest();
	client::Document* d=&client::document;
	client::String* s=new client::String(ret.c_str());
	client::Element* e=d->createElement("p");
	e->set_textContent(s);
	d->get_body()->appendChild(e);
}

void webMain() [[client]]
{
	client::document.addEventListener("DOMContentLoaded",duetto::Callback(clientTest));
}
