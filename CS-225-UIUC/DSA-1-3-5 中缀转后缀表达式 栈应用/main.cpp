// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include "LinkStack.h"

//判断函数
int IsNumber(char c) { //判断是否是数字， 也有库 isdigit
  return c >= '0' && c <= '9';
}
//直接输出数字
void NumberOperate(const char *p) { printf("%c", *p); } // const char *p
/*
c++类型更严格一些
比如字符串字面量c是char*（但是你不能改，改了就爆炸，这算标准bug），c++就是char
const*
*/

int main() {

  const char *str = "8+(3-1)*5"; // 需要加const
  const char *p = str;           //还是需要讲究的
                                 //   //创建栈
                                 //   LinkStack
  while (*p != '0') {
    if (IsNumber(*p)) { //如果是数字，直接输出
      NumberOperate(p);
    }
    p++; //既然要用while来循环，建议直接创建完while就来p++
  }
  printf("\n");
  return 0;
}
