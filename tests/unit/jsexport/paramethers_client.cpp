//===---------------------------------------------------------------------===//
//	Copyright 2020 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

[[cheerp::jsexport]][[cheerp::genericjs]]
client::String* concatenateStrings(const client::String& a, const client::String& b)
{
	return a.concat(b);
}


[[cheerp::genericjs]]
void webMain()
{
	client::String* S;
	__asm__("concatenateStrings('Hello', ' World')" : "=r"(S) :);

	std::string cpp_string = (std::string)(*S);
	assertEqual(cpp_string.c_str(), "Hello World", "JSExport with client paramethers and return");
}
