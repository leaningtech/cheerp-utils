//===---------------------------------------------------------------------===//
//	Copyright 2020 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <vector>
#include <cheerp/client.h>

[[cheerp::genericjs]]
client::String* retValJs(const char* str)
{
	return new client::String(str);
}
[[cheerp::genericjs]]
bool argJs(client::String* s)
{
	return (new client::String("aaa") == s);
}
[[cheerp::wasm]]
[[clang::optnone]]
client::String* forward(client::String* s)
{
	return s;
}

void webMain()
{
	client::String* s = retValJs("aaa");
	bool eq = argJs(s);
	assertEqual(eq, true, "anyref argument passing 1/2");
	s = forward(s);
	eq = argJs(s);
	assertEqual(eq, true, "anyref argument passing 2/2");
}
