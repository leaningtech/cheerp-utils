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
}

void webMain()
{
	client::FakeClientObj* o = new client::FakeClientObj();
	o->set_val(42);
	assertEqual(o->get_val(), 42, "Creating client object that do not have a constructor");
}
