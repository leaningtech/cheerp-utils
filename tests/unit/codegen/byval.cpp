#include <cheerp/client.h>
#include <tests.h>
constexpr int SIZE = 10;
struct Foo {
    int a[SIZE]{0};
    int b{0};
    [[clang::optnone]]
    void stuff(int i) {
        a[0] = i;
        for (int i = 1; i < SIZE; i++)
        {
            a[i] = a[i-1] + i;
        }
    }
};

[[clang::optnone]] void test(Foo f) {
    f.stuff(666);
}
void webMain() {
    Foo f;
    int a = unitBlackBox(10);
    f.stuff(a);
    assertEqual(f.a[0], a, "ByVal support 1/2");
    test(f);
    assertEqual(f.a[0], a, "ByVal support 2/2");
}
