//===---------------------------------------------------------------------===//
//	Copyright 2024 Leaning Technologies
//===----------------------------------------------------------------------===//

#include <tests.h>
struct [[cheerp::jsexport]] Struct {
	[[cheerp::jsexport]]
	static int staticVariable;

	static int getStaticVariable() {
		return staticVariable;
	}

	static void setStaticVariable(int value) {
		staticVariable = value;
	}
};

int Struct::staticVariable = 1;

int main() {
	assertEqual(1, Struct::staticVariable, "CPP: 1 == staticVariable");
	assertEqual(1, Struct::getStaticVariable(), "CPP: 1 == getStaticVariable()");
	Struct::staticVariable = 2;
	assertEqual(2, Struct::staticVariable, "CPP: 2 == staticVariable");
	assertEqual(2, Struct::getStaticVariable(), "CPP: 2 == getStaticVariable()");
	Struct::setStaticVariable(3);
	assertEqual(3, Struct::staticVariable, "CPP: 3 == staticVariable");
	assertEqual(3, Struct::getStaticVariable(), "CPP: 3 == getStaticVariable()");
}
