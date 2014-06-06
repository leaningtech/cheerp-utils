#ifdef __CHEERP_CLIENT__
#include <cheerp/client.h>
#endif
#ifdef __CHEERP_SERVER__
#include <cheerp/server.h>
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
	client::document.addEventListener("DOMContentLoaded",cheerp::Callback(clientTest));
}
