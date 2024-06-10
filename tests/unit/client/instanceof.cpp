//===---------------------------------------------------------------------===//
//	Copyright 2024 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cheerp/types.h>

#define TRUE(value, type) assertEqual(value->instanceof<type>(), true, #value " should be instance of " #type)
#define FALSE(value, type) assertEqual(value->instanceof<type>(), false, #value " should not be instance of " #type)

[[cheerp::genericjs]]
int main() {
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

	FALSE(primitiveString, client::Object  );
	FALSE(primitiveString, client::String  );
	FALSE(primitiveString, client::Number  );
	FALSE(primitiveString, client::Boolean );
	FALSE(primitiveString, client::Function);
	FALSE(primitiveString, client::Array   );
	FALSE(primitiveString, client::TArray<>);
	FALSE(primitiveString, client::Map   <>);

	FALSE(primitiveNumber, client::Object  );
	FALSE(primitiveNumber, client::String  );
	FALSE(primitiveNumber, client::Number  );
	FALSE(primitiveNumber, client::Boolean );
	FALSE(primitiveNumber, client::Function);
	FALSE(primitiveNumber, client::Array   );
	FALSE(primitiveNumber, client::TArray<>);
	FALSE(primitiveNumber, client::Map   <>);

	FALSE(primitiveBoolean, client::Object  );
	FALSE(primitiveBoolean, client::String  );
	FALSE(primitiveBoolean, client::Number  );
	FALSE(primitiveBoolean, client::Boolean );
	FALSE(primitiveBoolean, client::Function);
	FALSE(primitiveBoolean, client::Array   );
	FALSE(primitiveBoolean, client::TArray<>);
	FALSE(primitiveBoolean, client::Map   <>);

	TRUE (object, client::Object  );
	FALSE(object, client::String  );
	FALSE(object, client::Number  );
	FALSE(object, client::Boolean );
	FALSE(object, client::Function);
	FALSE(object, client::Array   );
	FALSE(object, client::TArray<>);
	FALSE(object, client::Map   <>);

	TRUE (string, client::Object  );
	TRUE (string, client::String  );
	FALSE(string, client::Number  );
	FALSE(string, client::Boolean );
	FALSE(string, client::Function);
	FALSE(string, client::Array   );
	FALSE(string, client::TArray<>);
	FALSE(string, client::Map   <>);

	TRUE (number, client::Object  );
	FALSE(number, client::String  );
	TRUE (number, client::Number  );
	FALSE(number, client::Boolean );
	FALSE(number, client::Function);
	FALSE(number, client::Array   );
	FALSE(number, client::TArray<>);
	FALSE(number, client::Map   <>);

	TRUE (boolean, client::Object  );
	FALSE(boolean, client::String  );
	FALSE(boolean, client::Number  );
	TRUE (boolean, client::Boolean );
	FALSE(boolean, client::Function);
	FALSE(boolean, client::Array   );
	FALSE(boolean, client::TArray<>);
	FALSE(boolean, client::Map   <>);

	TRUE (function, client::Object  );
	FALSE(function, client::String  );
	FALSE(function, client::Number  );
	FALSE(function, client::Boolean );
	TRUE (function, client::Function);
	FALSE(function, client::Array   );
	FALSE(function, client::TArray<>);
	FALSE(function, client::Map   <>);

	TRUE (array, client::Object  );
	FALSE(array, client::String  );
	FALSE(array, client::Number  );
	FALSE(array, client::Boolean );
	FALSE(array, client::Function);
	TRUE (array, client::Array   );
	TRUE (array, client::TArray<>);
	FALSE(array, client::Map   <>);

	TRUE (tarray, client::Object  );
	FALSE(tarray, client::String  );
	FALSE(tarray, client::Number  );
	FALSE(tarray, client::Boolean );
	FALSE(tarray, client::Function);
	TRUE (tarray, client::Array   );
	TRUE (tarray, client::TArray<>);
	FALSE(tarray, client::Map   <>);

	TRUE (map, client::Object  );
	FALSE(map, client::String  );
	FALSE(map, client::Number  );
	FALSE(map, client::Boolean );
	FALSE(map, client::Function);
	FALSE(map, client::Array   );
	FALSE(map, client::TArray<>);
	TRUE (map, client::Map   <>);

	return 1;
}
