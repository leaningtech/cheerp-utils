//===---------------------------------------------------------------------===//
//	Copyright 2022 Leaning Technologies
//===----------------------------------------------------------------------===//

#include <tests.h>

#include <cheerp/client.h>

class [[cheerp::jsexport]] Cat {
public:
    int age;

    Cat(int age) : age(age) {}

    void i0() {
	    client::console.log("RUN!!", age++);
    }

};
