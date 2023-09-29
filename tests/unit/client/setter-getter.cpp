//===---------------------------------------------------------------------===//
//	Copyright 2021 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <cheerp/client.h>
#include "tests.h"

namespace [[cheerp::genericjs]] client
{
	namespace [[cheerp::genericjs]] someNamespace
	{
		void set_(int a, int b);
		int get_(int a);
		void set_(const String& a, int b);
		int get_(const String& a);

		void set_someString(int b);
		int get_someString();
	}
}

namespace someNamespace
{
	//Needed to force the namespace to be declared
	void [[cheerp::jsexport]] emptyFunc()
	{
	}
}

void [[cheerp::genericjs]] webMain()
{
	// Test set_ and get_ generic versions
	client::someNamespace::set_(6, 36);
	client::someNamespace::set_(new client::String("someString"), -36);
	assertEqual(client::someNamespace::get_(6), 36, "set_/get_ in namespace 1/2");
	assertEqual(client::someNamespace::get_(new client::String("someString")), -36, "set_/get_ in namespace 2/2");

	// Test set_ and get_ non-generic versions
	assertEqual(client::someNamespace::get_someString(), -36, "get_* in namespace 1/2");
	client::someNamespace::set_someString(100);
	assertEqual(client::someNamespace::get_someString(), 100, "get_* in namespace 2/2");
}
