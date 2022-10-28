//===---------------------------------------------------------------------===//
//	Copyright 2022 Leaning Technologies
//===----------------------------------------------------------------------===//

#include <tests.h>

#include <cheerp/client.h>

class [[cheerp::jsexport]] Cat {
public:
	[[cheerp::genericjs]]
	Cat(client::String* name) : age(name->operator int()) {}
	int age;

	[[cheerp::genericjs]]
	~Cat() {
		client::console.log("Print something to console");
	}
	int i0() {
		return age * age;
	}
};
