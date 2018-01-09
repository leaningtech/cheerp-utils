//===---------------------------------------------------------------------===//
//	Copyright 2018 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cheerp/client.h>

void webMain()
{
	client::Object* o = new client::Object();
	o->set_("prop1", new client::Number(1));
	o->set_("prop2", new client::String("val"));
	o->set_("prop3", nullptr);
	client::Array* ar = client::Object::values(o);

	assertEqual(ar->get_length(), 3, "Object::value 1/4");
	assertEqual((int)*(*ar)[0], 1, "Object::value 2/4");
	assertEqual<client::Object*>((*ar)[1], new client::String("val"), "Object::value 3/4");
	assertEqual<client::Object*>((*ar)[2], nullptr, "Object::value 4/4");
}
