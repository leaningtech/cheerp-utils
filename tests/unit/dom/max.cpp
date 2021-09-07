//===---------------------------------------------------------------------===//
//	Copyright 2019-2021 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cheerp/client.h>

void webMain()
{
	// Test variadic client class
	double m1 = client::Math.max(1.0f, 10u);
	assertEqual(m1, 10.0, "Variadic Math.max 1/3");
	double m2 = client::Math.max(20u, 30u);
	assertEqual(m2, 30.0, "Variadic Math.max 2/3");
	double m3 = client::Math.max(0.1, 0.2);
	assertEqual(m3, 0.2, "Variadic Math.max 3/3");
	client::console.log("Variadic", "console.log", ":", "SUCCESS");
}
