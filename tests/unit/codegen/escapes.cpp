//===---------------------------------------------------------------------===//
//	Copyright 2016 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	client::String* escaped = new client::String("V\bery evil\t string\n\xff");
	assertEqual(escaped->get_length(), 20, "String literal support");
}
