//===---------------------------------------------------------------------===//
//      Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	int v[] = {0,1,2,3};
	memmove(v + 1, v, 3*sizeof(int));

	assertEqual(v[0],0,"Memmove backward 1/4");
	assertEqual(v[1],0,"Memmove backward 2/4");
	assertEqual(v[2],1,"Memmove backward 3/4");
	assertEqual(v[3],2,"Memmove backward 4/4");
}
