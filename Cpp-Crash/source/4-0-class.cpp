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

// 1、设计一个类，求圆的周长
class Circle {
public:                                              //公共作用域
  double getCircumference() { return 2 * pi * m_R; } // 求周长公式
  double m_R;                                        // member_radius

  void setR(int r) { //设定圆半径
    m_R = r;
  }
  int getR() { //获取圆当前半径,注意函数类型
    return m_R;
  }
};

// 2、设计一个学生类， 属性有姓名和学号，可以给姓名学号赋值并显示
class Student {
public:
  //设置定名
  void setName(string name) {
    m_Name = name; //连接到学生类成员变量姓名
  }
  // 设置学号
  void setID(int id) {
    m_ID = id; //连接到学生类成员变量学号
  }
  //显示姓名和学号
  void printInfo() {
    printf("我是一条来自成员函数的打印，如果你看到我就说明调用了成员函数 "
           "printInfo():学生姓名： %s，学号： %d\n",
           m_Name.c_str(), m_ID);
  };
  string m_Name; //姓名
  int m_ID;      // 学号
};

int main() {
  // 1、设计一个类，求圆的周长
  Circle c1; // 实例化对象：通过类来创建对象
  c1.setR(10);
  printf("圆的半径为%d\n", c1.getR());
  double cir1 = c1.getCircumference();
  printf("圆的周长为：%f\n", cir1);
  // 2、设计一个学生类， 属性有姓名和学号，可以给姓名学号赋值并显示
  Student s1; //实例化 学生类 对象
  s1.setName("狂徒张三");
  s1.setID(42);
  printf("直接类外访问int main打印：\n学生姓名： %s，学号： %d\n",
         s1.m_Name.c_str(), s1.m_ID);
  //打印信息
  s1.printInfo();

  printf("\n");
  return 0;
}
