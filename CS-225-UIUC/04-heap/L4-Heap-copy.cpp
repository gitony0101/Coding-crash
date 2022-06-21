#include <cstdio>
#include <iostream>
using namespace std;

void exStack01() {
  int i = 2, j = 4, k = 8;
  int *p = &i, *q = &j, *r = &k;
  k = i; // k=i=2,其他不变
  printf("When k = i:\n%d %d %d %d %d %d\n", i, j, k, *p, *q, *r);
  p = q; // 指针p 从此指向了j，所以*p=4
  printf("When p = q:\n%d %d %d %d %d %d\n", i, j, k, *p, *q, *r);
  *q = *r; // 即 j=k, 在第一步k=i的时候，k已经变成了2，所以j=k=2
  printf("When *q = *r:\n%d %d %d %d %d %d\n", i, j, k, *p, *q, *r);
}

void exHeap01() {
  int *x;
  int size = 3;
  x = new int[size];
  for (int i = 0; i < size; i++)
    x[i] = i + 3;
  for (int i = 0; i < size; i++)
    printf("%d\n", x[i]);
  printf("delete[] x\n");
  delete[] x;
  for (int i = 0; i < size; i++)
    printf("%d\n", x[i]);
}

int main() {
  exStack01();
  exHeap01();
}
