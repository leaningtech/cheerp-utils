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
	int res = 3044167877u;
	double a=0;
	double b=0.123152;
	double c=0.246305;
	double d=0.369457;
	double e=0.492609;
	double f=0.615762;
	double g=0.738914;
	double A;
	double B;
	double C;
	double D;
	double E;
	double F;
	double G;
_a:
	res += (int)(std::max(-1e9, std::min(1e9,305881456*c)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = A-F-B*E;
	b = C+G*C-A;
	c = E-B+G*F;
	d = F*E+C*E;
	e = E-F-F+F;
	f = D+C-F+G;
	g = F*G*E-C;
		goto _a;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = B*G-C-D;
	b = F-E*A*A;
	c = G+E+D-G;
	d = A*E*B+G;
	e = D-C+C+B;
	f = G-B+C-B;
	g = E*F*B*E;
		goto _b;
	}
_b:
	res += (int)(std::max(-1e9, std::min(1e9,4152994796*a)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = G-G*G+B;
	b = C-F+A-D;
	c = B*B*E*F;
	d = E+A-G-C;
	e = E-F*A+D;
	f = B+D-F-C;
	g = F+D-D-G;
		goto _b;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = A*D+A-F;
	b = E+A-B-F;
	c = E*A-G*E;
	d = F+C+C*E;
	e = C*D*G-D;
	f = E+G-E-C;
	g = E+B-E*E;
		goto _c;
	}
_c:
	res += (int)(std::max(-1e9, std::min(1e9,323894023*f)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = B+E+E-G;
	b = E-E*D*G;
	c = A-F-E+D;
	d = A+E+D-C;
	e = F+F-E-D;
	f = G-C-D*E;
	g = D-F-G*E;
		goto _c;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = C*E-F-G;
	b = D*F-B-E;
	c = C+E-C*B;
	d = C-C-F+D;
	e = F+D-D*E;
	f = E-F*A-F;
	g = B-E-A-C;
		goto _d;
	}
_d:
	res += (int)(std::max(-1e9, std::min(1e9,2151412997*g)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = E-E*E-A;
	b = F*D*F*C;
	c = F-D*F-D;
	d = C*F*F*G;
	e = E*C+A-B;
	f = E*D-E-A;
	g = G*G-C*F;
		goto _d;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = A-D-C-D;
	b = D+C*A-B;
	c = D+E-G-A;
	d = B-A-F*G;
	e = D*F-D-B;
	f = D+F*D+A;
	g = E+D-C*G;
		goto _e;
	}
_e:
	res += (int)(std::max(-1e9, std::min(1e9,1569158182*b)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = E-E+F*A;
	b = A*C-A*G;
	c = G*F+A*E;
	d = D-E+D*B;
	e = B*G-D+G;
	f = E*E*G-A;
	g = A*G+C-F;
		goto _e;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = G-B-G+C;
	b = E-G-C+A;
	c = G-E-B-G;
	d = B-D*F-G;
	e = D-F*C-F;
	f = F+D-E+D;
	g = B-E*G-B;
		goto _f;
	}
_f:
	res += (int)(std::max(-1e9, std::min(1e9,1245897153*g)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = F-C+F-E;
	b = A*A+E-E;
	c = G+D-A+G;
	d = B*G*G-B;
	e = C*G+F-C;
	f = D*D+E-G;
	g = D-B*F-F;
		goto _f;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = B*A+G-A;
	b = B*E-A*D;
	c = A-C+C*C;
	d = G-B-G-A;
	e = D+A*B+D;
	f = A+G-F+D;
	g = B-E-F-D;
		goto _g;
	}
_g:
	res += (int)(std::max(-1e9, std::min(1e9,1336956950*c)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = A*B*D+A;
	b = G-A*E*D;
	c = C-E+B-A;
	d = A-D-A-G;
	e = D-C*B-B;
	f = G*B+A-C;
	g = B*A-E-C;
		goto _g;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = E-C-D+D;
	b = C+A*F-F;
	c = E*C-D*D;
	d = D+D-D+A;
	e = A-F-G-D;
	f = C-G-E*G;
	g = F-C+B+A;
		goto _h;
	}
_h:
	res += (int)(std::max(-1e9, std::min(1e9,2834674138*g)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = B-D+G*C;
	b = C+E+G-D;
	c = A-G-B*F;
	d = C*B+G*D;
	e = F+F-C-C;
	f = G-A*D-F;
	g = C-C*C*G;
		goto _h;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = F-A+B*C;
	b = E-A-C+G;
	c = E-D+E-D;
	d = F-B-F+B;
	e = C+G-E*A;
	f = F*G+E+F;
	g = G+D*F-E;
		goto _i;
	}
_i:
	res += (int)(std::max(-1e9, std::min(1e9,347694343*g)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = D-G-B-F;
	b = F-F+E*C;
	c = A+G-D-B;
	d = B*F+B+D;
	e = G+E*B-A;
	f = F-F-B+B;
	g = C-G*E-B;
		goto _i;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = F-A-A+D;
	b = G+D-B-E;
	c = A-D-D-D;
	d = F+G+A*D;
	e = C*F-A-A;
	f = E*E-G+E;
	g = A-B-E*C;
		goto _j;
	}
_j:
	res += (int)(std::max(-1e9, std::min(1e9,628230861*a)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = B*E-C-D;
	b = E-B*E-F;
	c = B+D+D-A;
	d = A-C+B+F;
	e = C-G+A*F;
	f = C-C-F*B;
	g = E-B*C+F;
		goto _j;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = G+E-C-F;
	b = E-A*D-D;
	c = D*F*G-B;
	d = A-E*B+B;
	e = F+C-A-G;
	f = D+C-G-D;
	g = F-G-C-B;
		goto _k;
	}
_k:
	res += (int)(std::max(-1e9, std::min(1e9,137360819*e)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = G-E-A+E;
	b = F+D-G-B;
	c = E-C-F-A;
	d = F+F-G+D;
	e = G-F-E+D;
	f = C-C-B+A;
	g = C*A-A-C;
		goto _k;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = C+C+A-A;
	b = B-E-D*F;
	c = D-B-C+D;
	d = B-D*A-A;
	e = A+E-B-G;
	f = A+E-D-C;
	g = D-D-A+C;
		goto _l;
	}
_l:
	res += (int)(std::max(-1e9, std::min(1e9,3635493832*e)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = D*C+A+E;
	b = F+C-F-A;
	c = D-D+B-B;
	d = E-C-E-G;
	e = B+A+E-E;
	f = A*E-A+D;
	g = B*F-F-F;
		goto _l;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = C-E+B-C;
	b = C*G-A+A;
	c = E-G*A*B;
	d = D-A*A-F;
	e = D-B+C*C;
	f = A+C-E*C;
	g = C-B*D*F;
		goto _m;
	}
_m:
	res += (int)(std::max(-1e9, std::min(1e9,3316493438*f)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = B-F-C+E;
	b = B*C*C*D;
	c = D*A+C-A;
	d = G*E+C+A;
	e = G*D-B*B;
	f = E+F*C*G;
	g = D-E-C+F;
		goto _m;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = F*E*E+C;
	b = B-B-F-F;
	c = F+D-E*D;
	d = D-G+D-A;
	e = C-G+D-F;
	f = F-G-G+E;
	g = F*G-B-B;
		goto _n;
	}
_n:
	res += (int)(std::max(-1e9, std::min(1e9,1254784824*a)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = D*A-G-G;
	b = F+C*D-C;
	c = E*D*E-A;
	d = B-D-G-A;
	e = D+C-C+B;
	f = A+B*D-F;
	g = G-C+D*A;
		goto _n;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = E+D-G+F;
	b = B-B*A+E;
	c = B-G+B+F;
	d = A*B-F*D;
	e = A+B+F-B;
	f = E*B+A-E;
	g = E+A-F-A;
		goto _o;
	}
_o:
	res += (int)(std::max(-1e9, std::min(1e9,2569430620*d)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = C*D-G-G;
	b = A-A-D+E;
	c = C-G+D-A;
	d = C-D+E*E;
	e = G-D-G*G;
	f = D-E+A-A;
	g = A-F+F+C;
		goto _o;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = B-E-D-G;
	b = E+F-D+C;
	c = A*G+D-B;
	d = G*G-E-A;
	e = B-B-C*B;
	f = A-D*B*A;
	g = G-C+C+G;
		goto _p;
	}
_p:
	res += (int)(std::max(-1e9, std::min(1e9,285753005*a)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = D-E-D-B;
	b = D-D-C-D;
	c = E*D-F*C;
	d = F-A-E-E;
	e = E-F-A+C;
	f = B*A+E-G;
	g = F-F-D-G;
		goto _p;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = A*A*E+A;
	b = B*D-C-E;
	c = A+F-B+B;
	d = D+B+A-B;
	e = G*B*G-A;
	f = A-F*C*F;
	g = G-G*G+C;
		goto _q;
	}
_q:
	res += (int)(std::max(-1e9, std::min(1e9,2830732859*d)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = D*D-C+B;
	b = G*F-B-B;
	c = A-B*G+D;
	d = G-D-A-B;
	e = C+G+C-E;
	f = A-E-D*C;
	g = D+A-E*B;
		goto _q;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = C-B*F-E;
	b = B*A-C*G;
	c = F-B+G*C;
	d = E+D*C+A;
	e = C-G+G-A;
	f = E-F*G-B;
	g = E-G-C-E;
		goto _r;
	}
_r:
	res += (int)(std::max(-1e9, std::min(1e9,513638776*g)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = G-F+A-G;
	b = G+D-D*B;
	c = D-E-B-D;
	d = B-B+C-G;
	e = D*A*C*E;
	f = E-E-A+C;
	g = G-C*A+C;
		goto _r;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = C-C*E+E;
	b = B+E-G-C;
	c = G-B*B*G;
	d = B-B-B*C;
	e = E-B-B+A;
	f = G-G-B+F;
	g = G*E*D+A;
		goto _s;
	}
_s:
	res += (int)(std::max(-1e9, std::min(1e9,1737778771*a)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = F*G-C-F;
	b = F-G+A-F;
	c = F*F-B-G;
	d = E+G-B*G;
	e = B-B*E-G;
	f = C+E*A*A;
	g = B*F*A*G;
		goto _s;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = E-F-A+G;
	b = F*C-A-D;
	c = D-B+G-D;
	d = F-F*G-F;
	e = F-B-E+E;
	f = E-C-B*D;
	g = E-B-G*E;
		goto _t;
	}
_t:
	res += (int)(std::max(-1e9, std::min(1e9,2556140980*g)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = G-E-C*F;
	b = A-B+D-A;
	c = F-D+G+A;
	d = D+E-D+B;
	e = G-D+A*F;
	f = B-D-D-D;
	g = A-G*F-C;
		goto _t;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = C-D*E-F;
	b = B-A-B-B;
	c = G-G-E+C;
	d = E*C+B*A;
	e = C*D-G*G;
	f = F+D*C+C;
	g = C-B-C-G;
		goto _u;
	}
_u:
	res += (int)(std::max(-1e9, std::min(1e9,2941362843*b)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = D-D*G+E;
	b = F+A-G*G;
	c = C-D+A-A;
	d = D+A*F-F;
	e = C-B*A*G;
	f = G+D-B*D;
	g = D+C-A*D;
		goto _u;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = C*F+F+G;
	b = E-C-E-E;
	c = B-E-F-E;
	d = C-F*B-B;
	e = E+E-B-E;
	f = G-E+G*A;
	g = A+C+G*D;
		goto _v;
	}
_v:
	res += (int)(std::max(-1e9, std::min(1e9,3923086731*d)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = D-D-A*G;
	b = G-A+F-F;
	c = B-C-A-F;
	d = A+A-A+D;
	e = F*B+D-D;
	f = F+E-C+A;
	g = D-C-B*F;
		goto _v;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = D*E*F-F;
	b = B-B+B*D;
	c = C*D-F*G;
	d = C*C+C-G;
	e = E+E-A-F;
	f = B-B+A-E;
	g = A-E+A-E;
		goto _w;
	}
_w:
	res += (int)(std::max(-1e9, std::min(1e9,4237858060*d)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = F*G-F+G;
	b = A+B-C+G;
	c = F+D*A-E;
	d = B-F+C+C;
	e = E+D+C+G;
	f = B-G+A+D;
	g = F*C+E+G;
		goto _w;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = E-D-C*F;
	b = D*D*C-A;
	c = A+G-A*F;
	d = A+E+G+G;
	e = G+C*G-B;
	f = F*D+B+C;
	g = C-F-B-B;
		goto _x;
	}
_x:
	res += (int)(std::max(-1e9, std::min(1e9,697396608*a)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = F-D+C-D;
	b = E*D-C-D;
	c = B*E-D+B;
	d = A*D-B*A;
	e = F-B-D*F;
	f = B+C-D-D;
	g = F*C-D-C;
		goto _x;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = G-F+A+E;
	b = D*C*E-E;
	c = B-E*F-D;
	d = F-C-D*E;
	e = C*F-A-D;
	f = E-A*C+B;
	g = E-G*F-G;
		goto _y;
	}
_y:
	res += (int)(std::max(-1e9, std::min(1e9,1041204164*b)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = B*B+C+C;
	b = B-A-A+F;
	c = A*C-C+D;
	d = C-C-E*B;
	e = C*D*E-C;
	f = B*F-C-G;
	g = D+D-C-A;
		goto _y;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = E-F-F-C;
	b = G+F+G-A;
	c = G-A+F*G;
	d = D+B-E-D;
	e = A+G*G+E;
	f = E+D*D-C;
	g = C-C-G-E;
		goto _z;
	}
_z:
	res += (int)(std::max(-1e9, std::min(1e9,547449092*e)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = D-A+C-F;
	b = C-C+B-G;
	c = A-B+E*C;
	d = G-B+B*B;
	e = A-E-A*E;
	f = F-C*E*E;
	g = C*B*C*F;
		goto _z;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = C+F-G*G;
	b = D-B*G-D;
	c = E-G*D-F;
	d = F-B-D+F;
	e = G-G-F-D;
	f = F*E-G-E;
	g = D-C-A*E;
		goto _ab;
	}
_ab:
	res += (int)(std::max(-1e9, std::min(1e9,4235126011*c)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = F-E-A+F;
	b = G*D-D*F;
	c = A*B*B-E;
	d = B*C-G-E;
	e = C*A*A*G;
	f = E-F+G+D;
	g = D*E+C-B;
		goto _ab;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = G*D-E+A;
	b = G+B-F-B;
	c = E+F+A*A;
	d = A-F-B+D;
	e = E+D*G*G;
	f = B*A-G-A;
	g = E-A*E*C;
		goto _bb;
	}
_bb:
	res += (int)(std::max(-1e9, std::min(1e9,2811423478*b)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = D-B*G+E;
	b = E*B+F-C;
	c = D*B*C+D;
	d = F+B*A-D;
	e = A*G+D*B;
	f = G-F*C*F;
	g = E+F*A*G;
		goto _bb;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = A-F+F*D;
	b = G+G*D+D;
	c = B-F-F*G;
	d = A+E+E-G;
	e = F*D-F-E;
	f = C+B*F+F;
	g = D-B*C-D;
		goto _cb;
	}
_cb:
	res += (int)(std::max(-1e9, std::min(1e9,1595958451*b)));
	switch(randGen.get()%2)
	{
	case 0:
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = E*E-A+C;
	b = C+B*A*C;
	c = D-A-F*C;
	d = F*C-G-G;
	e = A-A-G-C;
	f = C+D-G+A;
	g = C-F-E+A;
		goto _cb;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	a = F-A-B*A;
	b = F-B+E*B;
	c = D+D-B*G;
	d = A+A-C-E;
	e = D+D*G-F;
	f = F*D-F*C;
	g = D-G-B-C;
		goto _db;
	}
_db:
	res += (int)(std::max(-1e9, std::min(1e9,4172042473*g)));
	return res;
}

int main()
{
	int K = 0; while(randGen.counter < 1000000)
	{
		K+=function();
	}
	assertEqual(K, -1024490531, "Random CFG - runOnEdge: operations on double");
}
