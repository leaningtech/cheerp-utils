//===---------------------------------------------------------------------===//
//      Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

int * foo(int * a,int * b)
{
    a[2] = b[1];
    b[2] = a[1];
 
    return a[1] < b[1] ? a + 1 : b+1;
}
 
void webMain()
{
    int A[] = {1,2,3};
    int B[] = {7,5,4};
 
    int * C = foo(A,B);
    
    //A == {1,2,5}
    //B == {7,5,2}
    //C == &A[1]
 
    //TODO put intrinsic to assert the correct pointer type
    assertEqual(C,&A[1],"Pointer equality comparison");
    assertEqual(A[2],5,"Store via pointer inside a function");
    assertEqual(B[2],2,"Store via pointer inside a function");
}
