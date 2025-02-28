#include <tests.h>

int testGlobal = 0;

[[cheerp::jsexport]]
int doCalculation(int amount)
{
	return amount * testGlobal;
}

void webMain()
{
	testGlobal = 5;
}
