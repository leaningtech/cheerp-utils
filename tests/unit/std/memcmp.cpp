//===---------------------------------------------------------------------===//
//	Copyright 2018 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <string.h>

void webMain()
{
	int a = 42;
	int b = 41;
#ifdef __ASMJS__
	assertEqual(memcmp(&a,&b,sizeof(int)), 1, "memcmp (asmjs/wasm) 1/2");
#endif
	assertEqual(cheerp::memcmp(&a,&b,sizeof(int)), 1, "memcmp (safe) 1/2");
	b++;
#ifdef __ASMJS__
	assertEqual(memcmp(&a,&b,sizeof(int)), 0, "memcmp (asmjs/wasm) 2/2");
#endif
	assertEqual(cheerp::memcmp(&a,&b,sizeof(int)), 0, "memcmp (safe) 2/2");
}
