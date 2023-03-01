// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void myFunc() {}

int main() {
  // 1 基本使用
  int area = 257; // 住房面积
  char *p;
  p = (char *)&area;
  printf("%d", *p); //为什么输出这个数

  //
  return 0;
}
