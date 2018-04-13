//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct T
{
	float p[3];
	float* x;
	float* y;
	float* z;
};

extern T t;

T t2 = {4,5,6,&t.p[0],&t.p[1],&t.p[2]};

T t = {1,2,3,&t2.p[0],&t2.p[1],&t2.p[2]};

void webMain()
{
	assertEqual(*t.x, 4.0f, "Member references to other members 1/6");
	assertEqual(*t.y, 5.0f, "Member references to other members 2/6");
	assertEqual(*t.z, 6.0f, "Member references to other members 3/6");

	assertEqual(*t2.x, 1.0f, "Member references to other members 4/6");
	assertEqual(*t2.y, 2.0f, "Member references to other members 5/6");
	assertEqual(*t2.z, 3.0f, "Member references to other members 6/6");
}
