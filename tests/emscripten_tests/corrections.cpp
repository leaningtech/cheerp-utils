#include<stdio.h>
#include<math.h>
int main() {
  int N = 4100;
  int M = 4100;
  unsigned int f = 0;
  unsigned short s = 0;
  for (int t = 0; t < M; t++) {
    for (int i = 0; i < N; i++) {
      f += i / ((t % 5)+1);
      if (f > 1000) f /= (t % 3)+1;
      if (i % 4 == 0) f += sqrt(i) * (i % 8 == 0 ? 1 : -1);
      s += (short(f)*short(f)) % 256;
    }
  }
  printf("final: %d:%d.\n", f, s);
  return 1;
}      
