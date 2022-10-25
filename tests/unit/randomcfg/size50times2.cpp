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
	static A* K = new A();
	return K;
}

int functiona()
{
	int res = 919516060;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 1074252766;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[5]++;
	switch(randGenerator.get()%9)
	{
	case 0:
		goto _b;
	case 1:
		goto _c;
	case 2:
		goto _e;
	case 3:
		goto _q;
	case 4:
		goto _s;
	case 5:
		goto _nb;
	case 6:
		goto _ob;
	case 7:
		goto _qb;
	default :
		goto _sb;
	}
_b:
	res += 1948391333;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _f;
	case 1:
		goto _m;
	case 2:
		goto _cb;
	case 3:
		goto _fb;
	case 4:
		goto _lb;
	default :
		goto _ob;
	}
_c:
	res += 1673963244;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _d;
	case 1:
		goto _h;
	case 2:
		goto _j;
	case 3:
		goto _p;
	case 4:
		goto _ob;
	default :
		goto _pb;
	}
_d:
	res += 1966721140;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[3]++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _e;
	case 1:
		goto _n;
	case 2:
		goto _t;
	case 3:
		goto _v;
	case 4:
		goto _sb;
	default :
		goto _vb;
	}
_e:
	res += 757874954;
	res ^= bp->b[x[0]].c[x[1]].post[6]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _g;
	case 1:
		goto _h;
	case 2:
		goto _i;
	case 3:
		goto _j;
	default :
		goto _rb;
	}
_f:
	res += 94348820;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _g;
	case 1:
		goto _l;
	case 2:
		goto _u;
	case 3:
		goto _y;
	default :
		goto _vb;
	}
_g:
	res += 755632302;
	res ^= bp->b[x[0]].post[5]++;
	switch(randGenerator.get()%7)
	{
	case 0:
		goto _i;
	case 1:
		goto _k;
	case 2:
		goto _p;
	case 3:
		goto _z;
	case 4:
		goto _gb;
	case 5:
		goto _nb;
	default :
		goto _qb;
	}
_h:
	res += 1600380817;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[1]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _p;
	case 1:
		goto _v;
	case 2:
		goto _x;
	case 3:
		goto _cb;
	default :
		goto _fb;
	}
_i:
	res += 1427026162;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _l;
	case 1:
		goto _p;
	case 2:
		goto _q;
	case 3:
		goto _w;
	default :
		goto _eb;
	}
_j:
	res += 248742574;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[7]++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _d;
	case 1:
		goto _o;
	case 2:
		goto _r;
	case 3:
		goto _x;
	case 4:
		goto _sb;
	default :
		goto _tb;
	}
_k:
	res += 1264563976;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _eb;
	case 1:
		goto _kb;
	case 2:
		goto _ob;
	case 3:
		goto _pb;
	default :
		goto _wb;
	}
_l:
	res += 2068187456;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _g;
	default :
		goto _cb;
	}
_m:
	res += 1734927588;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[6]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _e;
	case 1:
		goto _k;
	case 2:
		goto _gb;
	default :
		goto _tb;
	}
_n:
	res += 96108327;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _m;
	case 1:
		goto _p;
	case 2:
		goto _v;
	case 3:
		goto _cb;
	default :
		goto _lb;
	}
_o:
	res += 2072342396;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[6]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _f;
	case 1:
		goto _s;
	case 2:
		goto _t;
	case 3:
		goto _ib;
	default :
		goto _kb;
	}
_p:
	res += 304752628;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[1]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _i;
	case 1:
		goto _db;
	default :
		goto _ub;
	}
_q:
	res += 1603616223;
	res ^= bp->b[x[0]].c[x[1]].post[8]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _g;
	case 1:
		goto _r;
	case 2:
		goto _x;
	default :
		goto _z;
	}
_r:
	res += 1217900676;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[1]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _b;
	case 1:
		goto _e;
	case 2:
		goto _o;
	case 3:
		goto _db;
	default :
		goto _ub;
	}
_s:
	res += 582949170;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[0]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _j;
	case 1:
		goto _q;
	case 2:
		goto _v;
	case 3:
		goto _kb;
	default :
		goto _qb;
	}
_t:
	res += 1419787146;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[2]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _d;
	case 1:
		goto _l;
	case 2:
		goto _u;
	case 3:
		goto _y;
	default :
		goto _ob;
	}
_u:
	res += 1053622201;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _g;
	case 1:
		goto _j;
	case 2:
		goto _z;
	case 3:
		goto _kb;
	default :
		goto _ob;
	}
_v:
	res += 1288761018;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _f;
	case 1:
		goto _l;
	case 2:
		goto _s;
	case 3:
		goto _ab;
	case 4:
		goto _gb;
	default :
		goto _lb;
	}
_w:
	res += 933489709;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _h;
	case 1:
		goto _bb;
	case 2:
		goto _eb;
	case 3:
		goto _jb;
	case 4:
		goto _tb;
	default :
		goto _vb;
	}
_x:
	res += 1045606619;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _c;
	case 1:
		goto _p;
	case 2:
		goto _u;
	case 3:
		goto _ib;
	default :
		goto _jb;
	}
_y:
	res += 2054912741;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[4]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _i;
	default :
		goto _m;
	}
_z:
	res += 871581568;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _l;
	case 1:
		goto _o;
	case 2:
		goto _eb;
	default :
		goto _hb;
	}
_ab:
	res += 2037204294;
	res ^= bp->b[x[0]].post[6]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _b;
	case 1:
		goto _g;
	case 2:
		goto _n;
	default :
		goto _gb;
	}
_bb:
	res += 850791129;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[2]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _s;
	case 1:
		goto _u;
	case 2:
		goto _x;
	case 3:
		goto _qb;
	default :
		goto _xb;
	}
_cb:
	res += 60343334;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _m;
	case 1:
		goto _jb;
	default :
		goto _ub;
	}
_db:
	res += 2115423840;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[8]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _j;
	case 1:
		goto _r;
	case 2:
		goto _z;
	case 3:
		goto _cb;
	default :
		goto _ob;
	}
_eb:
	res += 1500245675;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _u;
	case 1:
		goto _v;
	case 2:
		goto _x;
	case 3:
		goto _gb;
	default :
		goto _lb;
	}
_fb:
	res += 13161731;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _g;
	case 1:
		goto _kb;
	default :
		goto _ub;
	}
_gb:
	res += 1438032889;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _l;
	case 1:
		goto _fb;
	case 2:
		goto _ib;
	default :
		goto _tb;
	}
_hb:
	res += 636705898;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _h;
	case 1:
		goto _mb;
	case 2:
		goto _pb;
	default :
		goto _tb;
	}
_ib:
	res += 671045011;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _e;
	case 1:
		goto _x;
	case 2:
		goto _qb;
	default :
		goto _sb;
	}
_jb:
	res += 1672342589;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _q;
	case 1:
		goto _r;
	case 2:
		goto _u;
	default :
		goto _vb;
	}
_kb:
	res += 971621717;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _db;
	case 1:
		goto _hb;
	case 2:
		goto _jb;
	default :
		goto _ub;
	}
_lb:
	res += 206592111;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[2]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _h;
	case 1:
		goto _t;
	case 2:
		goto _gb;
	default :
		goto _tb;
	}
_mb:
	res += 1910968445;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _bb;
	case 1:
		goto _cb;
	case 2:
		goto _gb;
	case 3:
		goto _ib;
	default :
		goto _vb;
	}
_nb:
	res += 1154052782;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _e;
	case 1:
		goto _w;
	default :
		goto _tb;
	}
_ob:
	res += 585481004;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[1]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _d;
	case 1:
		goto _z;
	case 2:
		goto _mb;
	default :
		goto _rb;
	}
_pb:
	res += 1456805790;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _a;
	case 1:
		goto _j;
	case 2:
		goto _s;
	case 3:
		goto _bb;
	default :
		goto _ib;
	}
_qb:
	res += 952031182;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[9]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _j;
	case 1:
		goto _bb;
	case 2:
		goto _fb;
	default :
		goto _lb;
	}
_rb:
	res += 292536658;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _l;
	case 1:
		goto _n;
	default :
		goto _z;
	}
_sb:
	res += 1621444932;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _j;
	default :
		goto _m;
	}
_tb:
	res += 1552551906;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[3]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _h;
	case 1:
		goto _eb;
	default :
		goto _jb;
	}
_ub:
	res += 1964887614;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _h;
	case 1:
		goto _q;
	default :
		goto _rb;
	}
_vb:
	res += 785285357;
	res ^= bp->b[x[0]].post[1]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _f;
	case 1:
		goto _p;
	case 2:
		goto _z;
	default :
		goto _tb;
	}
_wb:
	res += 503236937;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _a;
	default :
		goto _y;
	}
_xb:
	res += 1253385110;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[3]++;
	return res;
}

int functionb()
{
	int res = 1467269252;
	A* bp = ff();
	int x[5] = {0,0,0,0,0};
_a:
	res += 989127486;
	res ^= bp->pre++;
	switch(randGenerator.get()%9)
	{
	case 0:
		goto _b;
	case 1:
		goto _c;
	case 2:
		goto _e;
	case 3:
		goto _q;
	case 4:
		goto _s;
	case 5:
		goto _nb;
	case 6:
		goto _ob;
	case 7:
		goto _qb;
	default :
		goto _sb;
	}
_b:
	res += 1480327894;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _f;
	case 1:
		goto _m;
	case 2:
		goto _cb;
	case 3:
		goto _fb;
	case 4:
		goto _lb;
	default :
		goto _ob;
	}
_c:
	res += 1610800056;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[2]++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _d;
	case 1:
		goto _h;
	case 2:
		goto _j;
	case 3:
		goto _p;
	case 4:
		goto _ob;
	default :
		goto _pb;
	}
_d:
	res += 1724564980;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[4]++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _e;
	case 1:
		goto _n;
	case 2:
		goto _t;
	case 3:
		goto _v;
	case 4:
		goto _sb;
	default :
		goto _vb;
	}
_e:
	res += 555329604;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _g;
	case 1:
		goto _h;
	case 2:
		goto _i;
	case 3:
		goto _j;
	default :
		goto _rb;
	}
_f:
	res += 408895404;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[9]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _g;
	case 1:
		goto _l;
	case 2:
		goto _u;
	case 3:
		goto _y;
	default :
		goto _vb;
	}
_g:
	res += 2013431905;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%7)
	{
	case 0:
		goto _i;
	case 1:
		goto _k;
	case 2:
		goto _p;
	case 3:
		goto _z;
	case 4:
		goto _gb;
	case 5:
		goto _nb;
	default :
		goto _qb;
	}
_h:
	res += 848405987;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[4]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _p;
	case 1:
		goto _v;
	case 2:
		goto _x;
	case 3:
		goto _cb;
	default :
		goto _fb;
	}
_i:
	res += 1251002019;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _l;
	case 1:
		goto _p;
	case 2:
		goto _q;
	case 3:
		goto _w;
	default :
		goto _eb;
	}
_j:
	res += 966511257;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[0]++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _d;
	case 1:
		goto _o;
	case 2:
		goto _r;
	case 3:
		goto _x;
	case 4:
		goto _sb;
	default :
		goto _tb;
	}
_k:
	res += 2096030841;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _eb;
	case 1:
		goto _kb;
	case 2:
		goto _ob;
	case 3:
		goto _pb;
	default :
		goto _wb;
	}
_l:
	res += 1348947837;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _b;
	case 1:
		goto _g;
	default :
		goto _cb;
	}
_m:
	res += 655117098;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _e;
	case 1:
		goto _k;
	case 2:
		goto _gb;
	default :
		goto _tb;
	}
_n:
	res += 336963035;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _m;
	case 1:
		goto _p;
	case 2:
		goto _v;
	case 3:
		goto _cb;
	default :
		goto _lb;
	}
_o:
	res += 562052135;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].post[9]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _f;
	case 1:
		goto _s;
	case 2:
		goto _t;
	case 3:
		goto _ib;
	default :
		goto _kb;
	}
_p:
	res += 1573287356;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[5]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _i;
	case 1:
		goto _db;
	default :
		goto _ub;
	}
_q:
	res += 733248624;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[1]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _g;
	case 1:
		goto _r;
	case 2:
		goto _x;
	default :
		goto _z;
	}
_r:
	res += 980102875;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _b;
	case 1:
		goto _e;
	case 2:
		goto _o;
	case 3:
		goto _db;
	default :
		goto _ub;
	}
_s:
	res += 21426263;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[9]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _j;
	case 1:
		goto _q;
	case 2:
		goto _v;
	case 3:
		goto _kb;
	default :
		goto _qb;
	}
_t:
	res += 1207879407;
	res ^= bp->post[3]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _d;
	case 1:
		goto _l;
	case 2:
		goto _u;
	case 3:
		goto _y;
	default :
		goto _ob;
	}
_u:
	res += 1654358675;
	res ^= bp->post[0]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _g;
	case 1:
		goto _j;
	case 2:
		goto _z;
	case 3:
		goto _kb;
	default :
		goto _ob;
	}
_v:
	res += 692735493;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[8]++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _f;
	case 1:
		goto _l;
	case 2:
		goto _s;
	case 3:
		goto _ab;
	case 4:
		goto _gb;
	default :
		goto _lb;
	}
_w:
	res += 1643911212;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%6)
	{
	case 0:
		goto _h;
	case 1:
		goto _bb;
	case 2:
		goto _eb;
	case 3:
		goto _jb;
	case 4:
		goto _tb;
	default :
		goto _vb;
	}
_x:
	res += 298924024;
	res ^= bp->post[4]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _c;
	case 1:
		goto _p;
	case 2:
		goto _u;
	case 3:
		goto _ib;
	default :
		goto _jb;
	}
_y:
	res += 2147317028;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[8]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _a;
	case 1:
		goto _i;
	default :
		goto _m;
	}
_z:
	res += 665179443;
	res ^= bp->post[2]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _l;
	case 1:
		goto _o;
	case 2:
		goto _eb;
	default :
		goto _hb;
	}
_ab:
	res += 93616017;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _b;
	case 1:
		goto _g;
	case 2:
		goto _n;
	default :
		goto _gb;
	}
_bb:
	res += 520001143;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[2]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _s;
	case 1:
		goto _u;
	case 2:
		goto _x;
	case 3:
		goto _qb;
	default :
		goto _xb;
	}
_cb:
	res += 1388057861;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[5]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _m;
	case 1:
		goto _jb;
	default :
		goto _ub;
	}
_db:
	res += 1145066648;
	res ^= bp->post[1]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _j;
	case 1:
		goto _r;
	case 2:
		goto _z;
	case 3:
		goto _cb;
	default :
		goto _ob;
	}
_eb:
	res += 1624375853;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[4]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _u;
	case 1:
		goto _v;
	case 2:
		goto _x;
	case 3:
		goto _gb;
	default :
		goto _lb;
	}
_fb:
	res += 1567346368;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[1]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _g;
	case 1:
		goto _kb;
	default :
		goto _ub;
	}
_gb:
	res += 365900343;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _l;
	case 1:
		goto _fb;
	case 2:
		goto _ib;
	default :
		goto _tb;
	}
_hb:
	res += 1819249853;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[0]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _h;
	case 1:
		goto _mb;
	case 2:
		goto _pb;
	default :
		goto _tb;
	}
_ib:
	res += 71391707;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _e;
	case 1:
		goto _x;
	case 2:
		goto _qb;
	default :
		goto _sb;
	}
_jb:
	res += 2111183559;
	res ^= bp->post[6]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _q;
	case 1:
		goto _r;
	case 2:
		goto _u;
	default :
		goto _vb;
	}
_kb:
	res += 408055973;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _db;
	case 1:
		goto _hb;
	case 2:
		goto _jb;
	default :
		goto _ub;
	}
_lb:
	res += 562897458;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[2]++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _h;
	case 1:
		goto _t;
	case 2:
		goto _gb;
	default :
		goto _tb;
	}
_mb:
	res += 1698352282;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _bb;
	case 1:
		goto _cb;
	case 2:
		goto _gb;
	case 3:
		goto _ib;
	default :
		goto _vb;
	}
_nb:
	res += 2058406700;
	x[4] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[3]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _e;
	case 1:
		goto _w;
	default :
		goto _tb;
	}
_ob:
	res += 1846327782;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _d;
	case 1:
		goto _z;
	case 2:
		goto _mb;
	default :
		goto _rb;
	}
_pb:
	res += 1497928526;
	res ^= bp->b[x[0]].c[x[1]].post[7]++;
	switch(randGenerator.get()%5)
	{
	case 0:
		goto _a;
	case 1:
		goto _j;
	case 2:
		goto _s;
	case 3:
		goto _bb;
	default :
		goto _ib;
	}
_qb:
	res += 2033173094;
	x[1] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _j;
	case 1:
		goto _bb;
	case 2:
		goto _fb;
	default :
		goto _lb;
	}
_rb:
	res += 418862962;
	res ^= bp->b[x[0]].pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _l;
	case 1:
		goto _n;
	default :
		goto _z;
	}
_sb:
	res += 480255160;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].post[7]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _f;
	case 1:
		goto _j;
	default :
		goto _m;
	}
_tb:
	res += 2110349978;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->pre++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _h;
	case 1:
		goto _eb;
	default :
		goto _jb;
	}
_ub:
	res += 1099286517;
	x[2] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].post[4]++;
	switch(randGenerator.get()%3)
	{
	case 0:
		goto _h;
	case 1:
		goto _q;
	default :
		goto _rb;
	}
_vb:
	res += 731201565;
	res ^= bp->b[x[0]].c[x[1]].pre++;
	switch(randGenerator.get()%4)
	{
	case 0:
		goto _f;
	case 1:
		goto _p;
	case 2:
		goto _z;
	default :
		goto _tb;
	}
_wb:
	res += 1194328621;
	x[0] = randGenerator.get() % (uint32_t)3;
	res ^= bp->b[x[0]].c[x[1]].d[x[2]].pre++;
	switch(randGenerator.get()%2)
	{
	case 0:
		goto _a;
	default :
		goto _y;
	}
_xb:
	res += 1099670182;
	x[3] = randGenerator.get() % (uint32_t)3;
	res ^= bp->post[4]++;
	return res;
}

int main()
{
	uint32_t res = 0;

	res += functionb();
	res += functiona();
	res += functiona();
	res += functionb();
	res += functionb();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functionb();
	res += functionb();
	res += functionb();
	res += functiona();
	res += functiona();
	res += functionb();
	res += functiona();
	res += functionb();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functionb();
	res += functionb();
	res += functionb();
	res += functionb();
	res += functionb();
	res += functionb();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functionb();
	res += functionb();
	res += functionb();
	res += functiona();
	res += functionb();
	res += functiona();
	res += functionb();
	res += functionb();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functionb();
	res += functiona();
	res += functiona();
	res += functionb();
	res += functiona();
	res += functionb();
	res += functiona();
	res += functionb();
	res += functionb();
	res += functionb();
	res += functiona();
	res += functionb();
	res += functiona();
	res += functionb();
	res += functionb();
	res += functiona();
	res += functionb();
	res += functionb();
	res += functionb();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functionb();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functionb();
	res += functionb();
	res += functionb();
	res += functiona();
	res += functionb();
	res += functiona();
	res += functiona();
	res += functionb();
	res += functionb();
	res += functiona();
	res += functionb();
	res += functiona();
	res += functiona();
	res += functiona();
	res += functionb();
	res += functiona();
	res += functionb();
	res += functiona();
	res += functionb();
	res += functiona();
	res += functiona();
	res += functionb();
	res += functiona();
	assertEqual(res, 3693222584u, "Random CFG: 2 functions of size 50");
	return 0;
}
