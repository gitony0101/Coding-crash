// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

const double pi = 3.14;
/*
class 类方法
类中的变量称为成员变量、成员属性
类中的函数称为成员函数、成员方法

*/
//设计一个类，求圆的周长

class Circle {
public:                                              //公共作用域
  double getCircumference() { return 2 * pi * m_R; } // 求周长公式
  double m_R;

  void setR(int r) { //设定圆半径
    m_R = r;
  }
  int getR() { //获取圆当前半径,注意函数类型
    return m_R;
  }
};

int main() {
  Circle c1; // 实例化对象：通过类来创建对象
  c1.setR(10);
  printf("圆的半径为%d\n", c1.getR());
  double cir1 = c1.getCircumference();

  printf("圆的周长为：%f\n", cir1);

  printf("\n");
  return 0;
}
