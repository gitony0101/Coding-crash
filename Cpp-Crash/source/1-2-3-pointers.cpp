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

/*

p是一个char类型的指针，它指向area变量的地址。area变量是一个int类型，占用4个字节（32位）的内存空间。当您打印p时，您实际上只打印了area变量的第一个字节，也就是最低有效位（least
significant byte）。在二进制表示中，257等于00000001 00000001，所以p等于1123。

如果您想打印整个area变量的值，您可以使用%d格式符，并传递area本身而不是p作为参数。例如：

printf(“%d”, area);

这样就会输出257。

*/
