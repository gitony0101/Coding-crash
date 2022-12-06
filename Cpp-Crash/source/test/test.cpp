// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void myFunc() {}

int main() {
  int a = 5;
  int b = 6;
  int temp;
  temp = a;
  a = b;
  b = temp;
  printf("a = %d,b = %d\n", a, b);

  printf("\n");
  return 0;
}
