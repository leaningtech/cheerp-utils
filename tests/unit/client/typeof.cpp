//===---------------------------------------------------------------------===//
//	Copyright 2024 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cheerp/types.h>

class [[cheerp::genericjs]] [[cheerp::jsexport]] Base {};
class [[cheerp::genericjs]] [[cheerp::jsexport]] Derived : public Base {};

#define TEST(value, type) assertEqual(value->_typeof()->toUtf8(), std::string(type), "typeof " #value " == " #type)

[[cheerp::genericjs]]
int main() {
	client::_Any* base = new client::_Any(new Base());
	client::_Any* derived = new client::_Any(new Derived());
	client::_Any* primitiveString = new client::String("test");
	client::_Any* primitiveNumber = new client::_Any(1);
	client::_Any* primitiveBoolean;
	client::Object* object = new client::Object();
	client::Object* string = new client::Object(primitiveString);
	client::Number* number = new client::Number();
	client::Boolean* boolean = new client::Boolean();
	client::Function* function = new client::Function();
	client::Array* array = new client::Array();
	client::TArray<>* tarray = new client::TArray<>();
	client::Map<>* map = new client::Map<>();

	__asm__("true" : "=r"(primitiveBoolean));

	TEST(base, "object");
	TEST(derived, "object");
	TEST(primitiveString, "string");
	TEST(primitiveNumber, "number");
	TEST(primitiveBoolean, "boolean");
	TEST(object, "object");
	TEST(string, "object");
	TEST(number, "object");
	TEST(boolean, "object");
	TEST(function, "function");
	TEST(array, "object");
	TEST(tarray, "object");
	TEST(map, "object");

	return 1;
}
