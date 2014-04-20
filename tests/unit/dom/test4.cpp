//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <duetto/client.h>
#include <duetto/clientlib.h>

void webMain()
{
	//Test various variadic methods
	client::console.log("Variadic methods 1/4 : SUCCESS");
	client::console.log(client::String("Variadic methods 2/4 : SUCCESS"));
	client::console.log("Variadic methods 3/4 :","SUCCESS");
	client::console.log(client::String("Variadic methods 4/4 :"),client::String("SUCCESS"));
}
