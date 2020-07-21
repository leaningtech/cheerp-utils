//===---------------------------------------------------------------------===//
//	Copyright 2020 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>


class [[cheerp::jsexport]][[cheerp::genericjs]] Z
{
public:
	Z(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};
class [[cheerp::jsexport]][[cheerp::genericjs]] A
{
public:
	A(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};

[[cheerp::jsexport]]
void emptyFunction()
{
}

namespace B2
{

[[cheerp::jsexport]]
void emptyFunction()
{
}

class [[cheerp::jsexport]][[cheerp::genericjs]] Z
{
public:
	Z(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};
class [[cheerp::jsexport]][[cheerp::genericjs]] A
{
public:
	A(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};

class [[cheerp::jsexport]][[cheerp::genericjs]] F
{
public:
	F(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};

namespace C
{
[[cheerp::jsexport]]
void emptyFunction()
{
}

class [[cheerp::jsexport]][[cheerp::genericjs]] Z
{
public:
	Z(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};
class [[cheerp::jsexport]][[cheerp::genericjs]] A
{
public:
	A(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};

namespace D
{

class [[cheerp::jsexport]][[cheerp::genericjs]] A
{
public:
	A(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};
class [[cheerp::jsexport]][[cheerp::genericjs]] Z
{
public:
	Z(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};

}//namespace D

}//namespace C

}//namespace B2

namespace B
{

class [[cheerp::jsexport]][[cheerp::genericjs]] Z
{
public:
	Z(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};
class [[cheerp::jsexport]][[cheerp::genericjs]] A
{
public:
	A(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};

namespace C
{

class [[cheerp::jsexport]][[cheerp::genericjs]] Z
{
public:
	Z(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};
class [[cheerp::jsexport]][[cheerp::genericjs]] A
{
public:
	A(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};

namespace D
{

class [[cheerp::jsexport]][[cheerp::genericjs]] A
{
public:
	A(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};
class [[cheerp::jsexport]][[cheerp::genericjs]] Z
{
public:
	Z(int X) : value(X) {}
	int getValueAndIncrease()
	{
		return value++;
	}
private:
	int value;
};

}//namespace D

}//namespace C

}//namespace B
