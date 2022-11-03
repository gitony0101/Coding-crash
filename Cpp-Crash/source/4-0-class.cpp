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
public:                                              //公共作用域
  double getCircumference() { return 2 * pi * m_R; } // 求周长公式
  double m_R;
  //设定圆半径
  void setR(int r) { m_R = r; }
  //获取圆当前半径
  int getR() { return m_R; }
};

int main() {
  Circle c1; // 实例化对象：通过类来创建对象
  c1.setR(10);
  double cir1 = c1.getCircumference();
  printf("圆的周长为： %f", cir1);

  printf("\n");
  return 0;
}
