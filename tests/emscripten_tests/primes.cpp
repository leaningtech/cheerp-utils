#include<stdio.h>
#include<math.h>
int main() {
  int primes = 0, curri = 2;
  while (primes < 220000) {
    int ok = true;
    for (int j = 2; j < sqrt(curri); j++) {
      if (curri % j == 0) {
	ok = false;
	break;
      }
    }
    if (ok) {
      primes++;
    }
    curri++;
  }
  printf("lastprime: %d.\\n", curri-1);
  return 0;
}
