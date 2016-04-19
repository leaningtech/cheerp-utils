//===---------------------------------------------------------------------===//
//	Copyright 2016 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cheerp/client.h>
#include <cheerp/types.h>

namespace client
{
	class FakeClientObj: public Object
	{
	public:
		void set_val(int);
		int get_val();
	};
	class FakeClientObj2
	{
	public:
		void set_val(int);
		int get_val();
	};
}

void webMain()
{
	client::FakeClientObj* o = new client::FakeClientObj();
	o->set_val(42);
	assertEqual(o->get_val(), 42, "Creating client object that do not have a constructor 1/2");
	client::FakeClientObj2* o2 = new client::FakeClientObj2();
	o2->set_val(43);
	assertEqual(o2->get_val(), 43, "Creating client object that do not have a constructor 2/2");
	client::TArray<client::String>* ta = new client::TArray<client::String>();
	assertEqual(ta->get_length(), 0, "Creating template array wrapper type");
}
