#include "client.h"
#include "server.h"

#include <iostream>

inline int serverTest() [[server]]
{
//	return "String created on the server";
	std::cerr << "SERVER SIDE" << std::endl;
	return 42;
}

void clientTest() [[client]]
{
	int ret=serverTest();
	client::Document* d=client::Client::get_document();
	client::String* s=new client::String(ret);
	client::Element* e=d->createElement("p");
	e->set_textContent(s);
	d->get_firstChild().appendChild(*e);
}

void webMain() [[client]]
{
//	serverTest();
}
