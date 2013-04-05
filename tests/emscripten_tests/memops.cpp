#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
int N = 1024*1024;
int M = 800;
int final = 0;
char *buf = (char*)malloc(N);
for (int t = 0; t < M; t++) {
for (int i = 0; i < N; i++)
buf[i] = (i + final)%256;
for (int i = 0; i < N; i++)
final += buf[i] & 1;
final = final % 1000;
}
printf("final: %d.\\n", final);
return 0;
}      
