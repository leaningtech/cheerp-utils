//===---------------------------------------------------------------------===//
//      Copyright 2019 Leaning Technlogies                                   //
//===---------------------------------------------------------------------===//

#include <tests.h>

class Random
{
public:
	Random() : state(123457), counter(0)
	{
	}
	void seed(int x)
	{
		state = x;
	}
	int get()
	{
		counter++;
		state ^= state << 13;
		state ^= state >> 17;
		state ^= state << 5;
		return state;
	}
	uint32_t state;
	uint32_t counter;
} randGen;

int function()
{
	int res = 2225070699u;
int INDEX = 0;
	int a=0;
	int b=1;
	int c=2;
	int d=3;
	int e=4;
INDEX++;
_a:
	res += 1652915778*d;
	switch(randGen.get()%3)
	{
	case 0:
	std::swap(d, c);
	std::swap(c, e);
	std::swap(d, e);
	std::swap(e, c);
	std::swap(c, c);
		goto _b;
	case 1:
	std::swap(c, e);
	std::swap(d, b);
	std::swap(b, e);
	std::swap(a, a);
	std::swap(a, c);
		goto _c;
	default :
	std::swap(e, d);
	std::swap(c, d);
	std::swap(d, d);
	std::swap(e, a);
	std::swap(b, a);
		goto _e;
	}
INDEX++;
_b:
	res += 1249248059*a;
	switch(randGen.get()%2)
	{
	case 0:
	std::swap(a, b);
	std::swap(a, b);
	std::swap(d, b);
	std::swap(a, e);
	std::swap(b, a);
		goto _a;
	default :
	std::swap(b, e);
	std::swap(c, d);
	std::swap(d, c);
	std::swap(d, d);
	std::swap(a, d);
		goto _c;
	}
INDEX++;
_c:
	res += 1982123398*b;
	switch(randGen.get()%2)
	{
	case 0:
	std::swap(a, e);
	std::swap(b, a);
	std::swap(c, b);
	std::swap(c, b);
	std::swap(b, c);
		goto _a;
	default :
	std::swap(c, e);
	std::swap(e, b);
	std::swap(a, e);
	std::swap(a, b);
	std::swap(a, a);
		goto _d;
	}
INDEX++;
_d:
	res += 2243848383*c;
	switch(randGen.get()%2)
	{
	case 0:
	std::swap(a, d);
	std::swap(c, c);
	std::swap(c, d);
	std::swap(d, c);
	std::swap(e, a);
		goto _a;
	default :
	std::swap(d, a);
	std::swap(e, d);
	std::swap(e, d);
	std::swap(b, d);
	std::swap(e, d);
		goto _c;
	}
INDEX++;
_e:
	res += 3527375484*c;
	return res;
}

int main()
{
	int K = 0; while(randGen.counter < 100000)
	{
		K+=function();
	}
	assertEqual(K, 174632726, "Random CFG + swap of variables on phi edges: size 5 with 5 variables");
}
