// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//引入模板：类型参数化，编写代码可以忽略类型，使用一个符号代替所有符号
//为了让编译器区分是普通 模板函数
template <class T> // template<typename T> 关键字不同但是意思相同
void MySwap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

int main() {
  //函数模板可以自动类型推导
  int a = 10, b = 20;
  double c = 1.1, d = 4.1;
  printf("a: %d b : %d\n", a, b);
  MySwap(a, b);
  printf("Now a: %d b : %d\n", a, b);
  printf("c: %f d : %f\n", c, d);
  MySwap(c, d);
  printf("Now c: %f d : %f\n", c, d);
  // 显式制定类型
  MySwap<int>(a, b);
  printf("Again a: %d b : %d\n", a, b);

  printf("\n");
  return 0;
}

// // int 类型数据交换
// void MySwap(int &a, int &b) {
//   int temp = a;
//   a = b;
//   b = temp;
// }
// // double 类型转换
// void MySwap(double &a, double &b) {
//   int temp = a;
//   a = b;
//   b = temp;
// }
//以上是重复操作，容易出错，维护成本高

/*

//交换整型函数
void swapInt(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
}

//交换浮点型函数
void swapDouble(double& a, double& b) {
        double temp = a;
        a = b;
        b = temp;
}

//利用模板提供通用的交换函数
template<typename T>
void mySwap(T& a, T& b)
{
        T temp = a;
        a = b;
        b = temp;
}

void test01()
{
        int a = 10;
        int b = 20;

        //swapInt(a, b);

        //利用模板实现交换
        //1、自动类型推导
        mySwap(a, b);

        //2、显示指定类型
        mySwap<int>(a, b);

        cout << "a = " << a << endl;
        cout << "b = " << b << endl;

}

int main() {

        test01();

        system("pause");

        return 0;
}


*/
