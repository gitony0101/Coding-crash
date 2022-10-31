// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

const double pi = 3.14;
/*
class 类方法

*/
//设计一个类，求圆的周长

class Circle {
public:                                            //公共作用域
  double getCircumference() { return 2 * pi * R; } // 求周长公式
  double R;                                        //设定圆半径
};

void testGetCircumference() {
  Circle c1; // 实例化对象：通过类来创建对象
  c1.R = 10.1;
  double cir1 = c1.getCircumference();
  printf("圆的周长为： %f", cir1);
}

void inputgetCircumference() {
  Circle c2;
  scanf("请输入半径 %lf", &c2.R);
  double cir2 = c2.getCircumference();
  printf("圆的周长为： %f", cir2);
}

int main() {
  // testGetCircumference();
  inputgetCircumference();
  printf("\n");
  return 0;
}
