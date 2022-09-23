#include <stdint.h>

__attribute__((cheerp_jsexport_unsafe))
uint32_t
doSomething(uint32_t a)
{
	return a*a;
}
