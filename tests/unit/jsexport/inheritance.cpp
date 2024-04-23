//===---------------------------------------------------------------------===//
//	Copyright 2024 Leaning Technologies
//===----------------------------------------------------------------------===//

struct [[cheerp::jsexport]] Interface {
	virtual int pureVirtualTest() = 0;

	virtual ~Interface() {}
};

struct [[cheerp::jsexport]] Base : Interface {
	Base() {}

	int memberBaseTest() { return 1; }
	int memberShadowTest() { return 0; }
	virtual int virtualTest() { return 0; }
	int pureVirtualTest() override { return 0; }

	static int staticBaseTest() { return 1; }
	static int staticShadowTest() { return 0; }
};

struct [[cheerp::jsexport]] Derived : Base {
	Derived() {}

	int memberDerivedTest() { return 1; }
	int memberShadowTest() { return 1; }
	int virtualTest() override { return 1; }
	int pureVirtualTest() override { return 1; }
	
	static int staticDerivedTest() { return 1; }
	static int staticShadowTest() { return 1; }
};
