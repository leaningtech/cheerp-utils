#include <tests.h>

namespace [[cheerp::genericjs]] client
{
	bool someFunc();
}

[[cheerp::jsexport]]
int someValue(unsigned char a)
{
	unsigned char X(a);
	X+=23;

	unsigned char d;

	if (client::someFunc())
		d = (unsigned char) (X & (unsigned char)12);
	else
		d = (unsigned char)X;

	return d;
}
