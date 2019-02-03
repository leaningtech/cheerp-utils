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
	int res = 971899228;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1476153275;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[5]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _b;
	case 1:
		goto _e;
	case 2:
		goto _f;
	default :
		goto _g;
	}
_b:
	res += 1239036029;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _e;
	default :
		goto _h;
	}
_c:
	res += 1789366143;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _d;
	default :
		goto _i;
	}
_d:
	res += 2103318776;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _a;
	default :
		goto _b;
	}
_e:
	res += 1067854538;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _h;
	default :
		goto _j;
	}
_f:
	res += 532670688;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _c;
	default :
		goto _i;
	}
_g:
	res += 680466996;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_h:
	res += 480298490;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[0]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _f;
	default :
		goto _j;
	}
_i:
	res += 1544617505;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_j:
	res += 968338082;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	return res;
}

int functionb()
{
	int res = 6939507;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 740759355;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[8]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _b;
	case 1:
		goto _e;
	case 2:
		goto _f;
	default :
		goto _g;
	}
_b:
	res += 1034949299;
	res ^= bp->post[0]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _e;
	default :
		goto _h;
	}
_c:
	res += 87755422;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _d;
	default :
		goto _i;
	}
_d:
	res += 745425661;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _a;
	default :
		goto _b;
	}
_e:
	res += 1569229320;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[5]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _h;
	default :
		goto _j;
	}
_f:
	res += 1402586708;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[7]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _c;
	default :
		goto _i;
	}
_g:
	res += 1473442062;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[9]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_h:
	res += 1431419379;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _f;
	default :
		goto _j;
	}
_i:
	res += 407487131;
	res ^= bp->pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_j:
	res += 711845894;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	return res;
}

int functionc()
{
	int res = 1642548899;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1501252996;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _b;
	case 1:
		goto _e;
	case 2:
		goto _f;
	default :
		goto _g;
	}
_b:
	res += 1662739668;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[4]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _e;
	default :
		goto _h;
	}
_c:
	res += 1176911340;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[6]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _d;
	default :
		goto _i;
	}
_d:
	res += 1237379107;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _a;
	default :
		goto _b;
	}
_e:
	res += 1057418418;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[9]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _h;
	default :
		goto _j;
	}
_f:
	res += 1469262009;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _c;
	default :
		goto _i;
	}
_g:
	res += 1799878206;
	res ^= bp->b[x[0]].c[x[1]].post[1]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_h:
	res += 260401255;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[9]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _f;
	default :
		goto _j;
	}
_i:
	res += 1335939811;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[7]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_j:
	res += 1414829150;
	res ^= bp->b[x[0]].c[x[1]].post[4]++;
	return res;
}

int functiond()
{
	int res = 231602422;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1389867269;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[2]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _b;
	case 1:
		goto _e;
	case 2:
		goto _f;
	default :
		goto _g;
	}
_b:
	res += 2006811972;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _e;
	default :
		goto _h;
	}
_c:
	res += 1046741222;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[3]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _d;
	default :
		goto _i;
	}
_d:
	res += 1197352298;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _a;
	default :
		goto _b;
	}
_e:
	res += 700108581;
	res ^= bp->post[5]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _h;
	default :
		goto _j;
	}
_f:
	res += 1927495994;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _c;
	default :
		goto _i;
	}
_g:
	res += 1662981776;
	res ^= bp->post[2]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_h:
	res += 105575579;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _f;
	default :
		goto _j;
	}
_i:
	res += 1017679567;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[6]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_j:
	res += 1411154259;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[4]++;
	return res;
}

int functione()
{
	int res = 1676902021;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1486222842;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _b;
	case 1:
		goto _e;
	case 2:
		goto _f;
	default :
		goto _g;
	}
_b:
	res += 1242608872;
	res ^= bp->b[x[0]].c[x[1]].post[6]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _e;
	default :
		goto _h;
	}
_c:
	res += 1908518808;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _d;
	default :
		goto _i;
	}
_d:
	res += 1329132133;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _a;
	default :
		goto _b;
	}
_e:
	res += 212251746;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _h;
	default :
		goto _j;
	}
_f:
	res += 624549797;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _c;
	default :
		goto _i;
	}
_g:
	res += 1415505363;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[5]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_h:
	res += 661761152;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _f;
	default :
		goto _j;
	}
_i:
	res += 1448703729;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_j:
	res += 677870460;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[8]++;
	return res;
}

int functionf()
{
	int res = 1192707556;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 31308902;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _b;
	case 1:
		goto _e;
	case 2:
		goto _f;
	default :
		goto _g;
	}
_b:
	res += 559301039;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[1]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _e;
	default :
		goto _h;
	}
_c:
	res += 1498617647;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _d;
	default :
		goto _i;
	}
_d:
	res += 1144522535;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _a;
	default :
		goto _b;
	}
_e:
	res += 860516127;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _h;
	default :
		goto _j;
	}
_f:
	res += 1455590964;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _c;
	default :
		goto _i;
	}
_g:
	res += 402903177;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_h:
	res += 12260289;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _f;
	default :
		goto _j;
	}
_i:
	res += 389040743;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[2]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_j:
	res += 672655340;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[2]++;
	return res;
}

int functiong()
{
	int res = 1780172261;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1450956042;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _b;
	case 1:
		goto _e;
	case 2:
		goto _f;
	default :
		goto _g;
	}
_b:
	res += 1516266761;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[5]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _e;
	default :
		goto _h;
	}
_c:
	res += 500618996;
	res ^= bp->b[x[0]].post[0]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _d;
	default :
		goto _i;
	}
_d:
	res += 1186631626;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[5]++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _a;
	default :
		goto _b;
	}
_e:
	res += 2137390358;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[6]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _h;
	default :
		goto _j;
	}
_f:
	res += 1630634994;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _c;
	default :
		goto _i;
	}
_g:
	res += 1010528946;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_h:
	res += 1426819080;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _f;
	default :
		goto _j;
	}
_i:
	res += 1156541312;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[0]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_j:
	res += 1788014412;
	res ^= bp->pre++;
	return res;
}

int functionh()
{
	int res = 1095966189;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 104152274;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _b;
	case 1:
		goto _e;
	case 2:
		goto _f;
	default :
		goto _g;
	}
_b:
	res += 309198987;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[4]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _e;
	default :
		goto _h;
	}
_c:
	res += 1232056856;
	res ^= bp->post[9]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _d;
	default :
		goto _i;
	}
_d:
	res += 2137100237;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _a;
	default :
		goto _b;
	}
_e:
	res += 1282648518;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[3]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _h;
	default :
		goto _j;
	}
_f:
	res += 993967637;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _c;
	default :
		goto _i;
	}
_g:
	res += 2037770478;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_h:
	res += 1152645729;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _f;
	default :
		goto _j;
	}
_i:
	res += 1899058025;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_j:
	res += 1675518157;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[9]++;
	return res;
}

int functioni()
{
	int res = 712633417;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 864101839;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[3]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _b;
	case 1:
		goto _e;
	case 2:
		goto _f;
	default :
		goto _g;
	}
_b:
	res += 773319847;
	res ^= bp->b[x[0]].post[0]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _e;
	default :
		goto _h;
	}
_c:
	res += 1858504292;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _d;
	default :
		goto _i;
	}
_d:
	res += 1272796157;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _a;
	default :
		goto _b;
	}
_e:
	res += 1210359231;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[0]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _h;
	default :
		goto _j;
	}
_f:
	res += 1291554098;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[2]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _c;
	default :
		goto _i;
	}
_g:
	res += 1047372231;
	res ^= bp->post[8]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_h:
	res += 628974580;
	res ^= bp->post[2]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _f;
	default :
		goto _j;
	}
_i:
	res += 1021784812;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_j:
	res += 1859031536;
	res ^= bp->pre++;
	return res;
}

int functionj()
{
	int res = 395279207;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 606199759;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _b;
	case 1:
		goto _e;
	case 2:
		goto _f;
	default :
		goto _g;
	}
_b:
	res += 378469911;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _e;
	default :
		goto _h;
	}
_c:
	res += 257675105;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[1]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _d;
	default :
		goto _i;
	}
_d:
	res += 1319041805;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _a;
	default :
		goto _b;
	}
_e:
	res += 629593614;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[5]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _c;
	case 1:
		goto _h;
	default :
		goto _j;
	}
_f:
	res += 927376882;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[3]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _c;
	default :
		goto _i;
	}
_g:
	res += 1124311574;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_h:
	res += 1909850543;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _f;
	default :
		goto _j;
	}
_i:
	res += 1646478179;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[9]++;
	switch(randGenerator.get()%1)
	{
	default :
		goto _h;
	}
_j:
	res += 1615935710;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[5]++;
	return res;
}

int main()
{
	uint32_t res = 0;

	res += functionh();
	res += functionb();
	res += functiond();
	res += functiond();
	res += functiond();
	res += functioni();
	res += functionf();
	res += functionb();
	res += functiona();
	res += functioni();
	res += functionh();
	res += functiong();
	res += functiond();
	res += functionf();
	res += functiona();
	res += functioni();
	res += functiona();
	res += functione();
	res += functionb();
	res += functionb();
	res += functiond();
	res += functionf();
	res += functionj();
	res += functiond();
	res += functione();
	res += functionb();
	res += functionf();
	res += functiona();
	res += functioni();
	res += functiond();
	res += functionf();
	res += functiong();
	res += functionf();
	res += functionj();
	res += functionj();
	res += functiona();
	res += functionh();
	res += functiong();
	res += functiond();
	res += functionh();
	res += functiong();
	res += functionb();
	res += functionf();
	res += functiona();
	res += functiong();
	res += functionf();
	res += functiona();
	res += functioni();
	res += functionb();
	res += functionc();
	res += functionc();
	res += functiong();
	res += functionj();
	res += functionb();
	res += functiona();
	res += functione();
	res += functionc();
	res += functionh();
	res += functione();
	res += functiona();
	res += functiond();
	res += functionc();
	res += functioni();
	res += functiona();
	res += functiond();
	res += functionh();
	res += functiona();
	res += functiona();
	res += functiond();
	res += functione();
	res += functionj();
	res += functionc();
	res += functionh();
	res += functione();
	res += functionc();
	res += functionf();
	res += functionc();
	res += functione();
	res += functione();
	res += functiond();
	res += functioni();
	res += functiong();
	res += functiona();
	res += functioni();
	res += functionj();
	res += functionc();
	res += functionc();
	res += functiond();
	res += functionb();
	res += functioni();
	res += functiond();
	res += functione();
	res += functionc();
	res += functionc();
	res += functione();
	res += functionf();
	res += functionb();
	res += functionh();
	res += functionf();
	res += functionh();
	assertEqual(res, 3560117259u, "Random CFG: 10 functions of size 10");
	return 0;
}
