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
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	H = h;
	I = i;
	J = j;
	a = G-I-C*C;
	b = F+E*B-J;
	c = D-G+I*C;
	d = H*H+C*A;
	e = G-A-F+J;
	f = I+D-H+I;
	g = E*C*C-J;
	h = D*G-A-A;
	i = H-D*D*I;
	j = J+G+J-A;
		goto _a;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	H = h;
	I = i;
	J = j;
	a = G*B*G+J;
	b = G-B+H+I;
	c = C-I+I-G;
	d = F*B*H*C;
	e = G-H-J*B;
	f = A*A-F+D;
	g = H*D*C*I;
	h = D*J+I-E;
	i = D*D-I*D;
	j = E+G+H-H;
		goto _b;
	}
INDEX++;
_b:
	res += 4253079502*c;
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
	H = h;
	I = i;
	J = j;
	a = H+B-E-A;
	b = E*D+F-A;
	c = A+B-D-E;
	d = C*A-C*G;
	e = D+C+I*A;
	f = I*I*B-H;
	g = D+A-E-G;
	h = A+G-I*G;
	i = D+F+G+I;
	j = B+G-I*G;
		goto _b;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	H = h;
	I = i;
	J = j;
	a = J-J-J-G;
	b = C*E+H+J;
	c = A-D+H-E;
	d = D*G-F-B;
	e = D-F-F-D;
	f = F*A*A-A;
	g = E+B*F-I;
	h = I-D+A-B;
	i = H*C-E-G;
	j = E*E+A-C;
		goto _c;
	}
INDEX++;
_c:
	res += 63367273*i;
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
	H = h;
	I = i;
	J = j;
	a = H-G*G-E;
	b = J-D-G-C;
	c = H+J-C*J;
	d = J-D*J*G;
	e = F*C-F*A;
	f = A*F*B*E;
	g = B-D*A+E;
	h = G-J*I-G;
	i = H-D*I-I;
	j = B-D-H-J;
		goto _c;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	H = h;
	I = i;
	J = j;
	a = H*J+A*B;
	b = D*A+I-H;
	c = F-E-H-E;
	d = D-A*E-C;
	e = D+D+G*D;
	f = A+A+E-I;
	g = B-C-G-J;
	h = A*F+F*A;
	i = E+J+G*J;
	j = E*J-J-A;
		goto _d;
	}
INDEX++;
_d:
	res += 2343493612*f;
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
	H = h;
	I = i;
	J = j;
	a = B-B*D-E;
	b = I-D*G*I;
	c = B-I*I+C;
	d = J-J-B-C;
	e = I+D-J-J;
	f = I*B-A-J;
	g = F+C-E*J;
	h = A-J-C*A;
	i = G-B+I-B;
	j = C*C-F*J;
		goto _d;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	H = h;
	I = i;
	J = j;
	a = H*D+E-H;
	b = G-J+H*C;
	c = E-I*B+D;
	d = F-I-I*H;
	e = J+A-F*I;
	f = G+C-E*C;
	g = G-C-D-D;
	h = D+I-C*G;
	i = C+F+D*E;
	j = F+F-A-A;
		goto _e;
	}
INDEX++;
_e:
	res += 950640492*e;
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
	H = h;
	I = i;
	J = j;
	a = F*E-C-I;
	b = I-B+J*F;
	c = I*D+E-I;
	d = A-G-G-A;
	e = A-A-H*E;
	f = J-C-E-A;
	g = F+F+A-A;
	h = C+A-J-G;
	i = I+I-C-A;
	j = D+G+H*A;
		goto _e;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	H = h;
	I = i;
	J = j;
	a = E-J-F*A;
	b = I-D+H-G;
	c = A*C+C+C;
	d = B-H-D*J;
	e = A*J-D+I;
	f = C*I-B-A;
	g = C*F+G-E;
	h = A-H-B-H;
	i = G+E-I*I;
	j = E+C-F*J;
		goto _f;
	}
INDEX++;
_f:
	res += 523235684*h;
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
	H = h;
	I = i;
	J = j;
	a = C-I*J-F;
	b = G-D-F*H;
	c = A+J+C+F;
	d = F*D-B-D;
	e = J+E-A-B;
	f = H-J-I-H;
	g = E*H+A-F;
	h = H-G*B-A;
	i = A-I-E-F;
	j = J+I*E+C;
		goto _f;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	H = h;
	I = i;
	J = j;
	a = F+J+I*I;
	b = C+G-I+C;
	c = B-B-D-I;
	d = I-A-E-A;
	e = B+A*D-C;
	f = G-F+C+G;
	g = J-I-G+G;
	h = A*F+J*B;
	i = G-B+C*B;
	j = F-D-C+I;
		goto _g;
	}
INDEX++;
_g:
	res += 3307810518*b;
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
	H = h;
	I = i;
	J = j;
	a = J-A-B+A;
	b = A-J-F-B;
	c = E+G-J+F;
	d = C*F-H*G;
	e = B-E-G*H;
	f = J-C-D-H;
	g = C+D-B+B;
	h = B+F*J-C;
	i = B-H+H-E;
	j = G*I-D-H;
		goto _g;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	H = h;
	I = i;
	J = j;
	a = E+G+C-G;
	b = H-I*D-B;
	c = A+D-J-A;
	d = D*B+G-H;
	e = C-I+C*I;
	f = B-H-G-E;
	g = H-B-C-A;
	h = A-J+I-F;
	i = I+H*H-I;
	j = E-E+B*I;
		goto _h;
	}
INDEX++;
_h:
	res += 3357592122*b;
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
	H = h;
	I = i;
	J = j;
	a = A*H+J-C;
	b = C*E-C-A;
	c = E*H+B-A;
	d = H-G*J-B;
	e = I-A-A*D;
	f = A*F*I-B;
	g = C+I-A-I;
	h = H-J-H-F;
	i = A-E+J-G;
	j = H-C*J-B;
		goto _h;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	H = h;
	I = i;
	J = j;
	a = G-H*G+H;
	b = C+J*H-I;
	c = E-J*H*E;
	d = A+B-C+C;
	e = B*C*G-C;
	f = I-F+E-C;
	g = I*I*I-D;
	h = I+B-E+I;
	i = G*A+B-J;
	j = J*I-E*C;
		goto _i;
	}
INDEX++;
_i:
	res += 3382508189*a;
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
	H = h;
	I = i;
	J = j;
	a = F*D*E-F;
	b = H-F*H*I;
	c = J*E+J+G;
	d = H*A*C+E;
	e = B-F*J-G;
	f = D-H-B+B;
	g = E-A+D*F;
	h = C-A+H-J;
	i = I-B-D*I;
	j = F-H-E+A;
		goto _i;
	default :
	A = a;
	B = b;
	C = c;
	D = d;
	E = e;
	F = f;
	G = g;
	H = h;
	I = i;
	J = j;
	a = E*H-D-B;
	b = F*F*I-H;
	c = B-D-I+I;
	d = E+D-B*D;
	e = F-I-B*B;
	f = A*A-D+G;
	g = A-D-F-A;
	h = B-G-J+H;
	i = C*C-G-D;
	j = A-C*G+I;
		goto _j;
	}
INDEX++;
_j:
	res += 2346596693*b;
	return res;
}

int main()
{
	int K = 0;
	while(randGen.counter < 1000000)
	{
		K+=function();
	}
	assertEqual(K, 2016294684, "Random CFG - runOnEdge: 10 operations on 10 variables");
}
