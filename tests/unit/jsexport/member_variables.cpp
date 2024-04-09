//===---------------------------------------------------------------------===//
//	Copyright 2024 Leaning Technologies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct [[cheerp::jsexport]] Struct {
	[[cheerp::jsexport]]
	int memberVariable = 1;

	int getMemberVariable() {
		return memberVariable;
	}

	void setMemberVariable(int value) {
		memberVariable = value;
	}
};

Struct* instance = new Struct();

[[cheerp::jsexport]]
Struct* getInstance() {
	return instance;
}

int main() {
	assertEqual(1, instance->memberVariable, "CPP: 1 == memberVariable");
	assertEqual(1, instance->getMemberVariable(), "CPP: 1 == getMemberVariable()");
	instance->memberVariable = 2;
	assertEqual(2, instance->memberVariable, "CPP: 2 == memberVariable");
	assertEqual(2, instance->getMemberVariable(), "CPP: 2 == getMemberVariable()");
	instance->setMemberVariable(3);
	assertEqual(3, instance->memberVariable, "CPP: 3 == memberVariable");
	assertEqual(3, instance->getMemberVariable(), "CPP: 3 == getMemberVariable()");
}
