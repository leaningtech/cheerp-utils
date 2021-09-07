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
	int res = 3044167877u;
	int INDEX = 0;
	volatile int x;
	volatile int y;
	char A[]="3670570269";
	char *a=A;
	char B[]="599126397";
	char *b=B;
	char C[]="1822649803";
	char *c=C;
	char D[]="3046173291";
	char *d=D;
	char E[]="4269696921";
	char *e=E;
	char F[]="1198252169";
	char *f=F;
	char G[]="2421774919";
	char *g=G;
	char H[]="3645297367";
	char *h=H;
	char I[]="573851669";
	char *i=I;
	char J[]="1797377493";
	char *j=J;
	char K[]="3020912579";
	char *k=K;
INDEX++;
_a:
	res += 305881456*i[0];
	switch(randGen.get()%2)
	{
	case 0:
	x = 5;
	y = 6;
	std::swap(j[x], e[y]);
	std::swap(h, e);
	std::swap(h, i);
	x = 0;
	y = 4;
	std::swap(b[x], h[y]);
	std::swap(k, a);
	std::swap(h, g);
	x = 4;
	y = 2;
	std::swap(d[x], d[y]);
	std::swap(h, c);
	std::swap(b, d);
	x = 3;
	y = 1;
	std::swap(a[x], d[y]);
	x = 6;
	y = 6;
	std::swap(f[x], f[y]);
		goto _a;
	default :
	std::swap(k, i);
	x = 2;
	y = 1;
	std::swap(b[x], h[y]);
	std::swap(a, i);
	std::swap(d, e);
	x = 6;
	y = 0;
	std::swap(e[x], k[y]);
	x = 0;
	y = 4;
	std::swap(a[x], e[y]);
	x = 6;
	y = 0;
	std::swap(k[x], h[y]);
	x = 1;
	y = 6;
	std::swap(k[x], c[y]);
	std::swap(f, d);
	x = 0;
	y = 1;
	std::swap(g[x], f[y]);
	std::swap(j, j);
		goto _b;
	}
INDEX++;
_b:
	res += 1982123398*i[4];
	switch(randGen.get()%2)
	{
	case 0:
	x = 5;
	y = 3;
	std::swap(j[x], d[y]);
	std::swap(f, g);
	x = 0;
	y = 6;
	std::swap(e[x], h[y]);
	std::swap(b, g);
	std::swap(i, b);
	x = 5;
	y = 3;
	std::swap(d[x], g[y]);
	std::swap(i, j);
	x = 5;
	y = 4;
	std::swap(a[x], a[y]);
	std::swap(i, e);
	x = 4;
	y = 2;
	std::swap(i[x], a[y]);
	x = 3;
	y = 3;
	std::swap(f[x], e[y]);
		goto _b;
	default :
	x = 3;
	y = 5;
	std::swap(b[x], g[y]);
	x = 2;
	y = 3;
	std::swap(h[x], d[y]);
	std::swap(i, f);
	x = 3;
	y = 0;
	std::swap(i[x], k[y]);
	std::swap(d, e);
	x = 2;
	y = 1;
	std::swap(j[x], h[y]);
	std::swap(b, d);
	x = 6;
	y = 5;
	std::swap(b[x], f[y]);
	std::swap(k, f);
	std::swap(b, e);
	std::swap(j, b);
		goto _c;
	}
INDEX++;
_c:
	res += 4099959521*f[0];
	switch(randGen.get()%2)
	{
	case 0:
	x = 4;
	y = 6;
	std::swap(e[x], b[y]);
	std::swap(a, b);
	std::swap(e, f);
	x = 4;
	y = 4;
	std::swap(k[x], c[y]);
	std::swap(h, f);
	std::swap(i, h);
	x = 6;
	y = 4;
	std::swap(j[x], h[y]);
	x = 3;
	y = 2;
	std::swap(a[x], b[y]);
	std::swap(f, a);
	std::swap(k, j);
	std::swap(k, h);
		goto _c;
	default :
	std::swap(d, e);
	x = 5;
	y = 4;
	std::swap(c[x], a[y]);
	std::swap(b, b);
	std::swap(f, h);
	x = 3;
	y = 0;
	std::swap(g[x], c[y]);
	std::swap(a, e);
	x = 3;
	y = 4;
	std::swap(d[x], k[y]);
	std::swap(j, g);
	std::swap(f, g);
	x = 5;
	y = 5;
	std::swap(d[x], b[y]);
	x = 2;
	y = 0;
	std::swap(e[x], d[y]);
		goto _d;
	}
INDEX++;
_d:
	res += 2785812171*j[1];
	switch(randGen.get()%2)
	{
	case 0:
	std::swap(g, a);
	x = 5;
	y = 3;
	std::swap(f[x], d[y]);
	std::swap(c, k);
	std::swap(c, d);
	x = 1;
	y = 5;
	std::swap(e[x], e[y]);
	std::swap(h, h);
	std::swap(h, d);
	std::swap(d, h);
	x = 6;
	y = 4;
	std::swap(i[x], b[y]);
	x = 4;
	y = 2;
	std::swap(g[x], h[y]);
	x = 3;
	y = 4;
	std::swap(f[x], h[y]);
		goto _d;
	default :
	x = 5;
	y = 4;
	std::swap(i[x], e[y]);
	std::swap(d, j);
	x = 5;
	y = 5;
	std::swap(g[x], e[y]);
	x = 6;
	y = 4;
	std::swap(e[x], a[y]);
	std::swap(i, f);
	x = 4;
	y = 5;
	std::swap(d[x], d[y]);
	std::swap(j, g);
	x = 6;
	y = 6;
	std::swap(c[x], i[y]);
	x = 5;
	y = 0;
	std::swap(d[x], k[y]);
	std::swap(b, h);
	x = 3;
	y = 5;
	std::swap(d[x], h[y]);
		goto _e;
	}
INDEX++;
_e:
	res += 1730901361*h[1];
	return res;
}

int main()
{
	int K = 0; while(randGen.counter < 1000000)
	{
		K+=function();
	}
	assertEqual(K, 42757263, "Random CFG + swap of char[]");
}
