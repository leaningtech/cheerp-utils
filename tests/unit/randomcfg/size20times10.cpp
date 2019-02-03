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
private:
	uint32_t state;
	uint32_t counter;
} randGenerator;

struct E
{
	int pre{0};
	int post[10];
};

struct D
{
	int pre{0};
	E e[3];
	int post[10];
};

struct C
{
	int pre{0};
	D d[3];
	int post[10];
};

struct B
{
	int pre{0};
	C c[3];
	int post[10];
};

struct A
{
	int pre{0};
	B b[3];
	int post[10];
};

A* ff()
{
	static A* K = new A;
	return K;
}

int functiona()
{
	int res = 1289360871;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 2078107280;
	res ^= bp->post[1]++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	case 2:
		goto _e;
	case 3:
		goto _f;
	case 4:
		goto _m;
	default :
		goto _q;
	}
_b:
	res += 672563970;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _i;
	default :
		goto _l;
	}
_c:
	res += 1599893069;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _s;
	}
_d:
	res += 113974112;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _h;
	case 1:
		goto _o;
	default :
		goto _r;
	}
_e:
	res += 394709364;
	res ^= bp->b[x[0]].post[4]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _g;
	default :
		goto _i;
	}
_f:
	res += 991039875;
	res ^= bp->post[8]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _h;
	default :
		goto _t;
	}
_g:
	res += 1209734969;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[0]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _f;
	case 1:
		goto _j;
	case 2:
		goto _k;
	default :
		goto _r;
	}
_h:
	res += 1020406649;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[6]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _e;
	default :
		goto _g;
	}
_i:
	res += 1934660183;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _l;
	default :
		goto _s;
	}
_j:
	res += 1994320152;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _b;
	default :
		goto _d;
	}
_k:
	res += 10150109;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _j;
	}
_l:
	res += 1607774548;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _g;
	case 1:
		goto _n;
	case 2:
		goto _q;
	default :
		goto _t;
	}
_m:
	res += 1872666833;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _c;
	default :
		goto _j;
	}
_n:
	res += 1340157793;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _p;
	default :
		goto _q;
	}
_o:
	res += 781098823;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _d;
	}
_p:
	res += 625040140;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _m;
	default :
		goto _r;
	}
_q:
	res += 14933990;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[5]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_r:
	res += 1372668364;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _f;
	default :
		goto _k;
	}
_s:
	res += 592456289;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _g;
	default :
		goto _k;
	}
_t:
	res += 242474976;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	return res;
}

int functionb()
{
	int res = 1840019304;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1953161956;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	case 2:
		goto _e;
	case 3:
		goto _f;
	case 4:
		goto _m;
	default :
		goto _q;
	}
_b:
	res += 530788967;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[8]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _i;
	default :
		goto _l;
	}
_c:
	res += 1111088131;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[6]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _s;
	}
_d:
	res += 1330301183;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _h;
	case 1:
		goto _o;
	default :
		goto _r;
	}
_e:
	res += 1450238957;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _g;
	default :
		goto _i;
	}
_f:
	res += 698312496;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _h;
	default :
		goto _t;
	}
_g:
	res += 522971726;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _f;
	case 1:
		goto _j;
	case 2:
		goto _k;
	default :
		goto _r;
	}
_h:
	res += 827385948;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _e;
	default :
		goto _g;
	}
_i:
	res += 1600206898;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _l;
	default :
		goto _s;
	}
_j:
	res += 1163384280;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[6]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _b;
	default :
		goto _d;
	}
_k:
	res += 1024027583;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _j;
	}
_l:
	res += 1374600938;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[0]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _g;
	case 1:
		goto _n;
	case 2:
		goto _q;
	default :
		goto _t;
	}
_m:
	res += 649785905;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _c;
	default :
		goto _j;
	}
_n:
	res += 2086963638;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _p;
	default :
		goto _q;
	}
_o:
	res += 836802671;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _d;
	}
_p:
	res += 1589513899;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[9]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _m;
	default :
		goto _r;
	}
_q:
	res += 695258232;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[3]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_r:
	res += 917609663;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _f;
	default :
		goto _k;
	}
_s:
	res += 1282291499;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[0]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _g;
	default :
		goto _k;
	}
_t:
	res += 272312086;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[1]++;
	return res;
}

int functionc()
{
	int res = 532495011;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 415675634;
	res ^= bp->b[x[0]].post[7]++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	case 2:
		goto _e;
	case 3:
		goto _f;
	case 4:
		goto _m;
	default :
		goto _q;
	}
_b:
	res += 454806773;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[4]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _i;
	default :
		goto _l;
	}
_c:
	res += 657103124;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[3]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _s;
	}
_d:
	res += 692981712;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _h;
	case 1:
		goto _o;
	default :
		goto _r;
	}
_e:
	res += 837626799;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _g;
	default :
		goto _i;
	}
_f:
	res += 1947691087;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[7]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _h;
	default :
		goto _t;
	}
_g:
	res += 67974802;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[5]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _f;
	case 1:
		goto _j;
	case 2:
		goto _k;
	default :
		goto _r;
	}
_h:
	res += 1260995960;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _e;
	default :
		goto _g;
	}
_i:
	res += 172623403;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[5]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _l;
	default :
		goto _s;
	}
_j:
	res += 529302443;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[7]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _b;
	default :
		goto _d;
	}
_k:
	res += 177332700;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _j;
	}
_l:
	res += 1651675551;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[8]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _g;
	case 1:
		goto _n;
	case 2:
		goto _q;
	default :
		goto _t;
	}
_m:
	res += 962764794;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[7]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _c;
	default :
		goto _j;
	}
_n:
	res += 750679664;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[4]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _p;
	default :
		goto _q;
	}
_o:
	res += 312186354;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[7]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _d;
	}
_p:
	res += 1987106312;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _m;
	default :
		goto _r;
	}
_q:
	res += 240959156;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_r:
	res += 1947867422;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _f;
	default :
		goto _k;
	}
_s:
	res += 1718264801;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[5]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _g;
	default :
		goto _k;
	}
_t:
	res += 805251743;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	return res;
}

int functiond()
{
	int res = 473903566;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 13798878;
	res ^= bp->post[4]++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	case 2:
		goto _e;
	case 3:
		goto _f;
	case 4:
		goto _m;
	default :
		goto _q;
	}
_b:
	res += 636453333;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[4]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _i;
	default :
		goto _l;
	}
_c:
	res += 1588695568;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _s;
	}
_d:
	res += 1582482437;
	res ^= bp->b[x[0]].c[x[1]].post[9]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _h;
	case 1:
		goto _o;
	default :
		goto _r;
	}
_e:
	res += 1033206202;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _g;
	default :
		goto _i;
	}
_f:
	res += 1485511804;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[5]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _h;
	default :
		goto _t;
	}
_g:
	res += 943190495;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[4]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _f;
	case 1:
		goto _j;
	case 2:
		goto _k;
	default :
		goto _r;
	}
_h:
	res += 956134158;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _e;
	default :
		goto _g;
	}
_i:
	res += 1220585472;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _l;
	default :
		goto _s;
	}
_j:
	res += 1701475883;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _b;
	default :
		goto _d;
	}
_k:
	res += 922587542;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[6]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _j;
	}
_l:
	res += 547407330;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _g;
	case 1:
		goto _n;
	case 2:
		goto _q;
	default :
		goto _t;
	}
_m:
	res += 2003980519;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[6]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _c;
	default :
		goto _j;
	}
_n:
	res += 562390279;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _p;
	default :
		goto _q;
	}
_o:
	res += 1018041598;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[6]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _d;
	}
_p:
	res += 1170132540;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[2]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _m;
	default :
		goto _r;
	}
_q:
	res += 1154615609;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_r:
	res += 1316505735;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[3]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _f;
	default :
		goto _k;
	}
_s:
	res += 127052251;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _g;
	default :
		goto _k;
	}
_t:
	res += 1114646704;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	return res;
}

int functione()
{
	int res = 1131761079;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1076919591;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	case 2:
		goto _e;
	case 3:
		goto _f;
	case 4:
		goto _m;
	default :
		goto _q;
	}
_b:
	res += 107939561;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _i;
	default :
		goto _l;
	}
_c:
	res += 1199420528;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _s;
	}
_d:
	res += 1042517543;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _h;
	case 1:
		goto _o;
	default :
		goto _r;
	}
_e:
	res += 700287639;
	res ^= bp->b[x[0]].c[x[1]].post[4]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _g;
	default :
		goto _i;
	}
_f:
	res += 306851320;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[2]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _h;
	default :
		goto _t;
	}
_g:
	res += 493886463;
	res ^= bp->post[5]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _f;
	case 1:
		goto _j;
	case 2:
		goto _k;
	default :
		goto _r;
	}
_h:
	res += 1160063179;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _e;
	default :
		goto _g;
	}
_i:
	res += 307571472;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _l;
	default :
		goto _s;
	}
_j:
	res += 454416748;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[2]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _b;
	default :
		goto _d;
	}
_k:
	res += 673365159;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _j;
	}
_l:
	res += 592962932;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _g;
	case 1:
		goto _n;
	case 2:
		goto _q;
	default :
		goto _t;
	}
_m:
	res += 1453048498;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[4]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _c;
	default :
		goto _j;
	}
_n:
	res += 1371570003;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[7]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _p;
	default :
		goto _q;
	}
_o:
	res += 1073781763;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _d;
	}
_p:
	res += 461851014;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _m;
	default :
		goto _r;
	}
_q:
	res += 554602408;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_r:
	res += 104852634;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _f;
	default :
		goto _k;
	}
_s:
	res += 649022765;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[6]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _g;
	default :
		goto _k;
	}
_t:
	res += 2054306629;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[5]++;
	return res;
}

int functionf()
{
	int res = 354367395;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 25222833;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	case 2:
		goto _e;
	case 3:
		goto _f;
	case 4:
		goto _m;
	default :
		goto _q;
	}
_b:
	res += 1693485026;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _i;
	default :
		goto _l;
	}
_c:
	res += 888830763;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[5]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _s;
	}
_d:
	res += 1802491982;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _h;
	case 1:
		goto _o;
	default :
		goto _r;
	}
_e:
	res += 31797565;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _g;
	default :
		goto _i;
	}
_f:
	res += 62299853;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[2]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _h;
	default :
		goto _t;
	}
_g:
	res += 574596534;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _f;
	case 1:
		goto _j;
	case 2:
		goto _k;
	default :
		goto _r;
	}
_h:
	res += 1244453596;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[2]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _e;
	default :
		goto _g;
	}
_i:
	res += 1336194465;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _l;
	default :
		goto _s;
	}
_j:
	res += 1731563037;
	res ^= bp->post[1]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _b;
	default :
		goto _d;
	}
_k:
	res += 575705360;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _j;
	}
_l:
	res += 313823293;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _g;
	case 1:
		goto _n;
	case 2:
		goto _q;
	default :
		goto _t;
	}
_m:
	res += 1390387708;
	res ^= bp->b[x[0]].post[6]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _c;
	default :
		goto _j;
	}
_n:
	res += 2044554163;
	res ^= bp->post[5]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _p;
	default :
		goto _q;
	}
_o:
	res += 1891066487;
	res ^= bp->b[x[0]].post[0]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _d;
	}
_p:
	res += 551008693;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[3]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _m;
	default :
		goto _r;
	}
_q:
	res += 1781485213;
	res ^= bp->b[x[0]].post[5]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_r:
	res += 1501830323;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _f;
	default :
		goto _k;
	}
_s:
	res += 1821115873;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _g;
	default :
		goto _k;
	}
_t:
	res += 322334813;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	return res;
}

int functiong()
{
	int res = 1820965014;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 2115115464;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[1]++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	case 2:
		goto _e;
	case 3:
		goto _f;
	case 4:
		goto _m;
	default :
		goto _q;
	}
_b:
	res += 1438865740;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _i;
	default :
		goto _l;
	}
_c:
	res += 1999337836;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[4]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _s;
	}
_d:
	res += 356228371;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[3]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _h;
	case 1:
		goto _o;
	default :
		goto _r;
	}
_e:
	res += 1817049764;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _g;
	default :
		goto _i;
	}
_f:
	res += 2141153674;
	res ^= bp->b[x[0]].c[x[1]].post[7]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _h;
	default :
		goto _t;
	}
_g:
	res += 566112132;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _f;
	case 1:
		goto _j;
	case 2:
		goto _k;
	default :
		goto _r;
	}
_h:
	res += 1942481690;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _e;
	default :
		goto _g;
	}
_i:
	res += 989492335;
	res ^= bp->post[3]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _l;
	default :
		goto _s;
	}
_j:
	res += 1803602255;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _b;
	default :
		goto _d;
	}
_k:
	res += 1322710936;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[7]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _j;
	}
_l:
	res += 198619204;
	res ^= bp->b[x[0]].c[x[1]].post[1]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _g;
	case 1:
		goto _n;
	case 2:
		goto _q;
	default :
		goto _t;
	}
_m:
	res += 1953534826;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[8]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _c;
	default :
		goto _j;
	}
_n:
	res += 104665169;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[3]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _p;
	default :
		goto _q;
	}
_o:
	res += 1564739221;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _d;
	}
_p:
	res += 1538128223;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _m;
	default :
		goto _r;
	}
_q:
	res += 1899542553;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[5]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_r:
	res += 1595371198;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _f;
	default :
		goto _k;
	}
_s:
	res += 2126362173;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _g;
	default :
		goto _k;
	}
_t:
	res += 1768794057;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	return res;
}

int functionh()
{
	int res = 1230674396;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1815983044;
	res ^= bp->post[9]++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	case 2:
		goto _e;
	case 3:
		goto _f;
	case 4:
		goto _m;
	default :
		goto _q;
	}
_b:
	res += 866596855;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[9]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _i;
	default :
		goto _l;
	}
_c:
	res += 1138101281;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[1]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _s;
	}
_d:
	res += 310273413;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[4]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _h;
	case 1:
		goto _o;
	default :
		goto _r;
	}
_e:
	res += 628257755;
	res ^= bp->post[1]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _g;
	default :
		goto _i;
	}
_f:
	res += 429363923;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[2]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _h;
	default :
		goto _t;
	}
_g:
	res += 988506952;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _f;
	case 1:
		goto _j;
	case 2:
		goto _k;
	default :
		goto _r;
	}
_h:
	res += 856979759;
	res ^= bp->post[7]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _e;
	default :
		goto _g;
	}
_i:
	res += 278190158;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[4]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _l;
	default :
		goto _s;
	}
_j:
	res += 1483332973;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _b;
	default :
		goto _d;
	}
_k:
	res += 1182176620;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[6]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _j;
	}
_l:
	res += 2026478004;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _g;
	case 1:
		goto _n;
	case 2:
		goto _q;
	default :
		goto _t;
	}
_m:
	res += 1189914410;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _c;
	default :
		goto _j;
	}
_n:
	res += 1566586128;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[5]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _p;
	default :
		goto _q;
	}
_o:
	res += 1824700010;
	res ^= bp->pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _d;
	}
_p:
	res += 1113331867;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[9]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _m;
	default :
		goto _r;
	}
_q:
	res += 701943705;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_r:
	res += 2018373832;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _f;
	default :
		goto _k;
	}
_s:
	res += 7426169;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _g;
	default :
		goto _k;
	}
_t:
	res += 1961415139;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[0]++;
	return res;
}

int functioni()
{
	int res = 167368542;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 251836754;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[0]++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	case 2:
		goto _e;
	case 3:
		goto _f;
	case 4:
		goto _m;
	default :
		goto _q;
	}
_b:
	res += 233233021;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[0]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _i;
	default :
		goto _l;
	}
_c:
	res += 88639634;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _s;
	}
_d:
	res += 825791694;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _h;
	case 1:
		goto _o;
	default :
		goto _r;
	}
_e:
	res += 203845520;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[2]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _g;
	default :
		goto _i;
	}
_f:
	res += 914600930;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[4]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _h;
	default :
		goto _t;
	}
_g:
	res += 132629780;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[5]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _f;
	case 1:
		goto _j;
	case 2:
		goto _k;
	default :
		goto _r;
	}
_h:
	res += 349121784;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _e;
	default :
		goto _g;
	}
_i:
	res += 1825051735;
	res ^= bp->b[x[0]].post[6]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _l;
	default :
		goto _s;
	}
_j:
	res += 955798986;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _b;
	default :
		goto _d;
	}
_k:
	res += 995097051;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[8]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _j;
	}
_l:
	res += 102194872;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[6]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _g;
	case 1:
		goto _n;
	case 2:
		goto _q;
	default :
		goto _t;
	}
_m:
	res += 1401262337;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[5]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _c;
	default :
		goto _j;
	}
_n:
	res += 1090438014;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _p;
	default :
		goto _q;
	}
_o:
	res += 106242869;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[3]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _d;
	}
_p:
	res += 54449299;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[0]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _m;
	default :
		goto _r;
	}
_q:
	res += 237140292;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_r:
	res += 1460674641;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[0]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _f;
	default :
		goto _k;
	}
_s:
	res += 1602182790;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _g;
	default :
		goto _k;
	}
_t:
	res += 1571825916;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[7]++;
	return res;
}

int functionj()
{
	int res = 1749757806;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1922265375;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[5]++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	case 2:
		goto _e;
	case 3:
		goto _f;
	case 4:
		goto _m;
	default :
		goto _q;
	}
_b:
	res += 878777377;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _i;
	default :
		goto _l;
	}
_c:
	res += 1075259134;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[9]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _s;
	}
_d:
	res += 659067697;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[7]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _h;
	case 1:
		goto _o;
	default :
		goto _r;
	}
_e:
	res += 1249152986;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _g;
	default :
		goto _i;
	}
_f:
	res += 1609946277;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _h;
	default :
		goto _t;
	}
_g:
	res += 1896870037;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _f;
	case 1:
		goto _j;
	case 2:
		goto _k;
	default :
		goto _r;
	}
_h:
	res += 1818150212;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _e;
	default :
		goto _g;
	}
_i:
	res += 1184726095;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _l;
	default :
		goto _s;
	}
_j:
	res += 1665728802;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _b;
	default :
		goto _d;
	}
_k:
	res += 1229999242;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[4]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _j;
	}
_l:
	res += 1107484169;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _g;
	case 1:
		goto _n;
	case 2:
		goto _q;
	default :
		goto _t;
	}
_m:
	res += 279527351;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _c;
	default :
		goto _j;
	}
_n:
	res += 297785900;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[1]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _p;
	default :
		goto _q;
	}
_o:
	res += 1537794114;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[2]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _d;
	}
_p:
	res += 1277511625;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _m;
	default :
		goto _r;
	}
_q:
	res += 714481123;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_r:
	res += 1120630960;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _f;
	default :
		goto _k;
	}
_s:
	res += 639286229;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _g;
	default :
		goto _k;
	}
_t:
	res += 1981393799;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[3]++;
	return res;
}

int main()
{
	uint32_t res = 0;

	res += functiong();
	res += functiona();
	res += functione();
	res += functione();
	res += functionj();
	res += functiong();
	res += functiong();
	res += functione();
	res += functionb();
	res += functionj();
	res += functioni();
	res += functiona();
	res += functione();
	res += functionj();
	res += functiona();
	res += functionf();
	res += functionf();
	res += functiona();
	res += functionb();
	res += functiong();
	res += functiona();
	res += functionc();
	res += functioni();
	res += functioni();
	res += functione();
	res += functionj();
	res += functioni();
	res += functiond();
	res += functione();
	res += functione();
	res += functionj();
	res += functionb();
	res += functionh();
	res += functionf();
	res += functionh();
	res += functiong();
	res += functionc();
	res += functione();
	res += functionc();
	res += functionf();
	res += functionf();
	res += functiona();
	res += functionf();
	res += functionc();
	res += functionj();
	res += functionh();
	res += functionh();
	res += functiong();
	res += functioni();
	res += functionb();
	res += functionc();
	res += functiona();
	res += functiond();
	res += functionc();
	res += functioni();
	res += functionh();
	res += functione();
	res += functiong();
	res += functiond();
	res += functioni();
	res += functiona();
	res += functione();
	res += functionj();
	res += functionh();
	res += functionj();
	res += functionh();
	res += functionf();
	res += functionb();
	res += functiond();
	res += functionh();
	res += functioni();
	res += functiona();
	res += functionj();
	res += functionf();
	res += functionc();
	res += functionb();
	res += functiond();
	res += functionc();
	res += functionh();
	res += functiond();
	res += functiond();
	res += functionc();
	res += functiond();
	res += functioni();
	res += functiong();
	res += functionb();
	res += functiong();
	res += functiona();
	res += functionj();
	res += functionb();
	res += functionj();
	res += functionb();
	res += functionf();
	res += functiona();
	res += functionj();
	res += functione();
	res += functionj();
	res += functiong();
	res += functioni();
	res += functionc();
	assertEqual(res, 1985684931u, "Random CFG: 10 functions of size 20");
	return 0;
}
