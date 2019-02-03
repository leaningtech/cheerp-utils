//===---------------------------------------------------------------------===//
//      Copyright 2019 Leaning Technlogies                                   //
//===---------------------------------------------------------------------===//

#include <tests.h>

using namespace std;

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
	int res = 1914544919;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 608413784;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 2038664370;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[6]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 749241873;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 511702305;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 572660336;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	return res;
}

int functionb()
{
	int res = 1433925857;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1141616124;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 1998898814;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[3]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 760313750;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 709393584;
	res ^= bp->post[9]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 2053999932;
	res ^= bp->post[9]++;
	return res;
}

int functionc()
{
	int res = 1984210012;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 855636226;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 1036140795;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 1892066601;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[2]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 660260756;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 1194953865;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[9]++;
	return res;
}

int functiond()
{
	int res = 1063958031;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1633108117;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 822890675;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 498777856;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 269455306;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[1]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 112805732;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[8]++;
	return res;
}

int functione()
{
	int res = 1409959708;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 2077486715;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 1117142618;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 1760243555;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[1]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 438792350;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[4]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 155324914;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	return res;
}

int functionf()
{
	int res = 350322227;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 841148365;
	res ^= bp->post[1]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 1244316437;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[1]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 653468858;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 1350573793;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 1875335928;
	res ^= bp->post[3]++;
	return res;
}

int functiong()
{
	int res = 2112255763;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1432114613;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 1395235128;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 1504569917;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 159259470;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[5]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 601385644;
	res ^= bp->pre++;
	return res;
}

int functionh()
{
	int res = 1012502954;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1272469786;
	res ^= bp->b[x[0]].post[4]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 933110197;
	res ^= bp->post[8]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 502278611;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 1529195746;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 1494613810;
	res ^= bp->pre++;
	return res;
}

int functioni()
{
	int res = 396473730;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1308044878;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[6]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 1977648522;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[8]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 559412924;
	res ^= bp->b[x[0]].post[0]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 776532036;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 619290071;
	res ^= bp->pre++;
	return res;
}

int functionj()
{
	int res = 7684930;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1776808933;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 1973387981;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 824272813;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 1850952926;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[4]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 1953443376;
	res ^= bp->pre++;
	return res;
}

int functionk()
{
	int res = 349517445;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 588219756;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 625032172;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[0]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 1295166342;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 476667372;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 697517721;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[7]++;
	return res;
}

int functionl()
{
	int res = 1065311705;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 719346228;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[0]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 155789224;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 711645630;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[0]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 1414647625;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 1896306640;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[0]++;
	return res;
}

int functionm()
{
	int res = 1782280524;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 846942590;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[2]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 726371155;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 1682085273;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[2]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 105575579;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 1017679567;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[6]++;
	return res;
}

int functionn()
{
	int res = 1411154259;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1737518944;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[1]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 1486222842;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 1242608872;
	res ^= bp->b[x[0]].c[x[1]].post[6]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 1908518808;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 1329132133;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	return res;
}

int functiono()
{
	int res = 212251746;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1983690368;
	res ^= bp->post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 624549797;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 1415505363;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[5]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 661761152;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 1448703729;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	return res;
}

int functionp()
{
	int res = 677870460;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 932026304;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[6]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 31308902;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 559301039;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[1]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 1498617647;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 1144522535;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	return res;
}

int functionq()
{
	int res = 860516127;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 777720504;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 70636429;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[8]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 1219407971;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[2]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 1841585795;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[2]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 672655340;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[2]++;
	return res;
}

int functionr()
{
	int res = 1780172261;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1450956042;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 1516266761;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[5]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 500618996;
	res ^= bp->b[x[0]].post[0]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 1186631626;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[5]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 2137390358;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[6]++;
	return res;
}

int functions()
{
	int res = 1630634994;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1665204916;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[0]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 1708302647;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 1314218593;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[4]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 70788355;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 241909610;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	return res;
}

int functiont()
{
	int res = 826047641;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1369356620;
	res ^= bp->b[x[0]].post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _d;
	default :
		goto _e;
	}
_b:
	res += 873524566;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	case 2:
		goto _d;
	default :
		goto _e;
	}
_c:
	res += 1251300606;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _b;
	default :
		goto _e;
	}
_d:
	res += 159473059;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _c;
	default :
		goto _e;
	}
_e:
	res += 1353436873;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	return res;
}

int main()
{
	uint32_t res = 0;

	res += functiond();
	res += functionh();
	res += functions();
	res += functionr();
	res += functiono();
	res += functionl();
	res += functionj();
	res += functiona();
	res += functiont();
	res += functions();
	res += functions();
	res += functionf();
	res += functioni();
	res += functiono();
	res += functionn();
	res += functionr();
	res += functionb();
	res += functionn();
	res += functions();
	res += functionk();
	res += functiont();
	res += functionr();
	res += functiont();
	res += functionj();
	res += functiond();
	res += functionc();
	res += functiono();
	res += functionn();
	res += functionh();
	res += functionl();
	res += functionc();
	res += functionc();
	res += functionk();
	res += functionm();
	res += functionl();
	res += functionr();
	res += functionp();
	res += functionb();
	res += functionr();
	res += functiono();
	res += functionl();
	res += functionh();
	res += functionl();
	res += functionl();
	res += functionb();
	res += functionr();
	res += functiona();
	res += functiono();
	res += functionk();
	res += functions();
	res += functionf();
	res += functionb();
	res += functionq();
	res += functionq();
	res += functionc();
	res += functionl();
	res += functiont();
	res += functionq();
	res += functione();
	res += functions();
	res += functiona();
	res += functions();
	res += functionb();
	res += functionk();
	res += functionc();
	res += functionm();
	res += functiont();
	res += functionr();
	res += functionf();
	res += functionq();
	res += functione();
	res += functionq();
	res += functiond();
	res += functionh();
	res += functiont();
	res += functionr();
	res += functione();
	res += functiont();
	res += functionl();
	res += functionh();
	res += functionk();
	res += functionq();
	res += functiona();
	res += functions();
	res += functionf();
	res += functiond();
	res += functionj();
	res += functione();
	res += functionl();
	res += functionf();
	res += functiono();
	res += functionl();
	res += functionp();
	res += functionp();
	res += functiono();
	res += functionj();
	res += functioni();
	res += functionn();
	res += functions();
	res += functionf();
	assertEqual(res, 1049805753u, "Random CFG: 20 functions of size 5");
	return 0;
}
