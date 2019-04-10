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
	uint32_t counter;
private:
	uint32_t state;
} randGen;

int function()
{
	int res = 3044167877;
int INDEX = 0;
	int a=0;
	int b=1;
	int c=2;
	int d=3;
	int e=4;
	int f=5;
	int g=6;
	int h=7;
	int i=8;
	int j=9;
	int A;
	int B;
	int C;
	int D;
	int E;
	int F;
	int G;
	int H;
	int I;
	int J;
INDEX++;
_a:
	res += 305881456*g;
	switch(randGen.get()%2)
	{
	case 0:
	std::swap(g, h);
	std::swap(i, c);
	std::swap(c, h);
	std::swap(c, f);
	std::swap(a, e);
	std::swap(b, b);
	std::swap(h, j);
	std::swap(d, e);
	std::swap(g, g);
	std::swap(i, h);
	std::swap(c, h);
	std::swap(h, h);
	std::swap(i, c);
	std::swap(d, a);
	std::swap(g, e);
	std::swap(a, i);
	std::swap(f, a);
	std::swap(j, i);
	std::swap(i, d);
	std::swap(c, h);
		goto _a;
	default :
	std::swap(e, i);
	std::swap(e, j);
	std::swap(c, h);
	std::swap(c, h);
	std::swap(j, d);
	std::swap(b, g);
	std::swap(e, a);
	std::swap(a, a);
	std::swap(h, e);
	std::swap(d, h);
	std::swap(d, d);
	std::swap(i, j);
	std::swap(a, g);
	std::swap(a, j);
	std::swap(f, a);
	std::swap(g, f);
	std::swap(b, d);
	std::swap(g, a);
	std::swap(j, g);
	std::swap(a, b);
		goto _b;
	}
INDEX++;
_b:
	res += 259698464*h;
	switch(randGen.get()%2)
	{
	case 0:
	std::swap(i, i);
	std::swap(c, i);
	std::swap(i, a);
	std::swap(i, i);
	std::swap(g, f);
	std::swap(j, b);
	std::swap(f, h);
	std::swap(b, c);
	std::swap(g, g);
	std::swap(h, c);
	std::swap(j, j);
	std::swap(b, a);
	std::swap(j, a);
	std::swap(g, f);
	std::swap(a, d);
	std::swap(h, f);
	std::swap(d, h);
	std::swap(c, h);
	std::swap(i, d);
	std::swap(h, j);
		goto _b;
	default :
	std::swap(a, i);
	std::swap(a, e);
	std::swap(d, j);
	std::swap(d, b);
	std::swap(i, j);
	std::swap(d, e);
	std::swap(c, g);
	std::swap(g, h);
	std::swap(j, h);
	std::swap(c, c);
	std::swap(h, i);
	std::swap(b, c);
	std::swap(e, a);
	std::swap(a, e);
	std::swap(f, d);
	std::swap(c, f);
	std::swap(f, a);
	std::swap(a, a);
	std::swap(b, f);
	std::swap(d, c);
		goto _c;
	}
INDEX++;
_c:
	res += 2405095194*c;
	switch(randGen.get()%2)
	{
	case 0:
	std::swap(b, a);
	std::swap(j, c);
	std::swap(f, g);
	std::swap(d, g);
	std::swap(c, a);
	std::swap(i, f);
	std::swap(a, i);
	std::swap(j, i);
	std::swap(b, b);
	std::swap(b, h);
	std::swap(d, e);
	std::swap(a, d);
	std::swap(e, f);
	std::swap(g, a);
	std::swap(c, g);
	std::swap(f, i);
	std::swap(h, g);
	std::swap(d, c);
	std::swap(f, a);
	std::swap(g, a);
		goto _c;
	default :
	std::swap(i, b);
	std::swap(i, g);
	std::swap(b, i);
	std::swap(d, g);
	std::swap(j, f);
	std::swap(j, a);
	std::swap(j, h);
	std::swap(g, c);
	std::swap(j, e);
	std::swap(i, h);
	std::swap(a, j);
	std::swap(a, d);
	std::swap(d, a);
	std::swap(h, b);
	std::swap(e, d);
	std::swap(h, g);
	std::swap(g, f);
	std::swap(b, b);
	std::swap(d, i);
	std::swap(f, e);
		goto _d;
	}
INDEX++;
_d:
	res += 1544230875*b;
	switch(randGen.get()%2)
	{
	case 0:
	std::swap(d, f);
	std::swap(j, a);
	std::swap(h, a);
	std::swap(a, a);
	std::swap(e, a);
	std::swap(b, h);
	std::swap(f, a);
	std::swap(i, i);
	std::swap(j, d);
	std::swap(i, a);
	std::swap(h, b);
	std::swap(h, b);
	std::swap(c, i);
	std::swap(e, f);
	std::swap(g, e);
	std::swap(h, e);
	std::swap(e, a);
	std::swap(e, c);
	std::swap(d, i);
	std::swap(h, g);
		goto _d;
	default :
	std::swap(g, h);
	std::swap(g, e);
	std::swap(e, j);
	std::swap(i, d);
	std::swap(i, g);
	std::swap(j, c);
	std::swap(h, a);
	std::swap(j, f);
	std::swap(c, d);
	std::swap(j, j);
	std::swap(i, d);
	std::swap(d, j);
	std::swap(d, g);
	std::swap(f, b);
	std::swap(c, f);
	std::swap(f, b);
	std::swap(a, a);
	std::swap(h, f);
	std::swap(b, b);
	std::swap(j, e);
		goto _e;
	}
INDEX++;
_e:
	res += 4285626681*i;
	switch(randGen.get()%2)
	{
	case 0:
	std::swap(d, f);
	std::swap(a, e);
	std::swap(e, g);
	std::swap(h, j);
	std::swap(f, i);
	std::swap(f, g);
	std::swap(h, b);
	std::swap(d, b);
	std::swap(i, c);
	std::swap(i, b);
	std::swap(j, d);
	std::swap(a, h);
	std::swap(c, j);
	std::swap(h, b);
	std::swap(j, a);
	std::swap(a, b);
	std::swap(b, d);
	std::swap(d, a);
	std::swap(i, i);
	std::swap(b, h);
		goto _e;
	default :
	std::swap(f, h);
	std::swap(e, g);
	std::swap(h, i);
	std::swap(e, d);
	std::swap(a, a);
	std::swap(b, e);
	std::swap(f, c);
	std::swap(d, g);
	std::swap(d, g);
	std::swap(g, h);
	std::swap(d, a);
	std::swap(g, a);
	std::swap(a, e);
	std::swap(e, i);
	std::swap(b, d);
	std::swap(c, h);
	std::swap(g, c);
	std::swap(j, a);
	std::swap(h, f);
	std::swap(c, f);
		goto _f;
	}
INDEX++;
_f:
	res += 2947674833*a;
	switch(randGen.get()%2)
	{
	case 0:
	std::swap(e, c);
	std::swap(j, a);
	std::swap(g, f);
	std::swap(j, e);
	std::swap(f, j);
	std::swap(g, j);
	std::swap(a, a);
	std::swap(c, f);
	std::swap(b, c);
	std::swap(b, j);
	std::swap(d, i);
	std::swap(e, i);
	std::swap(b, d);
	std::swap(d, g);
	std::swap(j, i);
	std::swap(b, c);
	std::swap(i, f);
	std::swap(i, e);
	std::swap(c, j);
	std::swap(e, j);
		goto _f;
	default :
	std::swap(c, b);
	std::swap(e, c);
	std::swap(i, g);
	std::swap(d, a);
	std::swap(j, e);
	std::swap(j, i);
	std::swap(h, b);
	std::swap(i, a);
	std::swap(j, j);
	std::swap(f, a);
	std::swap(c, j);
	std::swap(e, h);
	std::swap(j, a);
	std::swap(d, j);
	std::swap(c, c);
	std::swap(j, a);
	std::swap(g, f);
	std::swap(b, i);
	std::swap(i, h);
	std::swap(b, c);
		goto _g;
	}
INDEX++;
_g:
	res += 3253169153*c;
	switch(randGen.get()%2)
	{
	case 0:
	std::swap(h, f);
	std::swap(f, j);
	std::swap(h, h);
	std::swap(d, a);
	std::swap(e, f);
	std::swap(h, g);
	std::swap(e, j);
	std::swap(e, h);
	std::swap(d, c);
	std::swap(e, a);
	std::swap(i, j);
	std::swap(b, g);
	std::swap(d, f);
	std::swap(j, i);
	std::swap(h, i);
	std::swap(j, h);
	std::swap(j, a);
	std::swap(a, d);
	std::swap(f, d);
	std::swap(i, g);
		goto _g;
	default :
	std::swap(e, c);
	std::swap(j, e);
	std::swap(d, c);
	std::swap(g, h);
	std::swap(c, g);
	std::swap(d, g);
	std::swap(d, d);
	std::swap(e, i);
	std::swap(c, c);
	std::swap(b, g);
	std::swap(c, a);
	std::swap(f, a);
	std::swap(d, h);
	std::swap(e, f);
	std::swap(g, f);
	std::swap(j, a);
	std::swap(d, a);
	std::swap(c, e);
	std::swap(f, j);
	std::swap(e, a);
		goto _h;
	}
INDEX++;
_h:
	res += 3396256102*f;
	switch(randGen.get()%2)
	{
	case 0:
	std::swap(i, i);
	std::swap(e, b);
	std::swap(e, j);
	std::swap(h, f);
	std::swap(i, j);
	std::swap(d, c);
	std::swap(e, a);
	std::swap(i, a);
	std::swap(c, g);
	std::swap(j, g);
	std::swap(j, a);
	std::swap(a, g);
	std::swap(a, h);
	std::swap(h, f);
	std::swap(e, j);
	std::swap(i, c);
	std::swap(i, e);
	std::swap(h, a);
	std::swap(f, i);
	std::swap(f, c);
		goto _h;
	default :
	std::swap(a, f);
	std::swap(a, c);
	std::swap(e, a);
	std::swap(d, j);
	std::swap(h, g);
	std::swap(i, a);
	std::swap(i, a);
	std::swap(c, f);
	std::swap(a, d);
	std::swap(i, g);
	std::swap(i, h);
	std::swap(b, a);
	std::swap(e, e);
	std::swap(j, i);
	std::swap(f, h);
	std::swap(a, i);
	std::swap(e, d);
	std::swap(a, h);
	std::swap(a, g);
	std::swap(a, d);
		goto _i;
	}
INDEX++;
_i:
	res += 3685325772*e;
	switch(randGen.get()%2)
	{
	case 0:
	std::swap(c, i);
	std::swap(c, b);
	std::swap(a, h);
	std::swap(d, d);
	std::swap(b, j);
	std::swap(a, j);
	std::swap(j, h);
	std::swap(d, a);
	std::swap(i, c);
	std::swap(h, i);
	std::swap(d, b);
	std::swap(j, a);
	std::swap(c, f);
	std::swap(f, e);
	std::swap(g, j);
	std::swap(e, a);
	std::swap(g, h);
	std::swap(b, b);
	std::swap(d, h);
	std::swap(g, a);
		goto _i;
	default :
	std::swap(e, i);
	std::swap(i, b);
	std::swap(i, e);
	std::swap(g, c);
	std::swap(f, f);
	std::swap(f, j);
	std::swap(e, h);
	std::swap(c, f);
	std::swap(i, h);
	std::swap(j, h);
	std::swap(f, g);
	std::swap(f, d);
	std::swap(c, f);
	std::swap(f, h);
	std::swap(a, g);
	std::swap(j, i);
	std::swap(c, i);
	std::swap(f, f);
	std::swap(d, d);
	std::swap(i, b);
		goto _j;
	}
INDEX++;
_j:
	res += 2173615287*d;
	return res;
}

int main()
{
	int K = 0;
	while(randGen.counter < 1000000)
	{
		K+=function();
	}
	assertEqual(K, -615396611, "Random CFG - runOnEdge: 10 swaps on 10 variables");
}
