//===---------------------------------------------------------------------===//
//	Copyright 2021 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cheerp/jsobject.h>

namespace [[cheerp::genericjs]] client
{
	void someFunc();

	struct first : public Object
	{
		static void someFunc();

	struct second : public Object
	{
		static void someFunc();

	struct third : public Object
	{
		static void someFunc();
	};
	};
	};
}

int counter = 0;

void [[cheerp::genericjs]][[cheerp::jsexport]] someFunc()
{
	counter += 1;
}

namespace first
{
	void [[cheerp::genericjs]][[cheerp::jsexport]] someFunc()
	{
		counter += 2;
	}

	namespace second
	{
	void [[cheerp::genericjs]][[cheerp::jsexport]] someFunc()
	{
		counter += 4;
	}
	namespace third
	{
	void [[cheerp::genericjs]][[cheerp::jsexport]] someFunc()
	{
		counter += 8;
	}
	}
	}
}

int [[cheerp::genericjs]] main()
{
	client::someFunc();
	assertEqual(counter, 1, "Free standing function");

	client::first::someFunc();
	assertEqual(counter, 3, "Nested struct 1/3");

	client::first::second::someFunc();
	assertEqual(counter, 7, "Nested struct 2/3");

	client::first::second::third::someFunc();
	assertEqual(counter, 15, "Nested struct 3/3");

	return 1;
}
