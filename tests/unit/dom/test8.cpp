//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <cheerp/client.h>
#include <cheerp/clientlib.h>
#include "tests.h"

void webMain()
{
	// Test square parenthesis operator and set_
	client::Object* t = new client::Object();
	t->set_(client::String("a"), new client::String("b"));
	
	client::String* retrieved = (client::String*)(*t)[client::String("a")];
	assertEqual(retrieved, new client::String("b"), "Object::operator[]");
}
