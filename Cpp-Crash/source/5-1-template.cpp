// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//引入模板：类型参数化，编写代码可以忽略类型，使用一个符号代替所有符号

// 1、为了让编译器区分是普通 模板函数
template <class T> // template<typename T> 关键字不同但是意思相同
//每次用一次都要调用一次
void MySwap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

/*
2、 函数模板案例
- 利用函数模板封装一个排序的函数，可以对**不同数据类型数组**进行排序
- 排序规则从大到小，排序算法为**选择排序**
- 分别利用**char 数组**和**int 数组**进行测试
*/

//打印函数模板
template <typename T> void printArray(T arr[], int len) {
  for (int i = 0; i < len; i++) {
    printf("%u", arr[i]);
  }
  printf("\n");
}
template <typename T>
// template <class T> 这俩都可以用
void mySort(T arr[], int len) { //选择排序
  for (int i = 0; i < len; i++) {
    int max = i;
    for (int j = i + 1; j < len; j++) {
      if (arr[max] < arr[j]) {
        max = j; //交换下标
      }
    }
    if (max != i) {
      MySwap(arr[max], arr[i]);
    }
  }
}

// 3、
// 函数模板和普通函数的区别：是否允许**自动类型转**化：函数模板**不允许**，普通函数**允许**
template <class T> int MyAdd(T a, T b) { return a + b; }
int MyAdd(int a, char c) { return a + c; }

// 4、函数模板可以想像普通函数那样被重载
template <typename T> void myPrint(T a) { printf("%u", a); }
template <typename T> void myPrint(T a, T b) { printf("%u %u", a, b); }

int main() {
  // 1、函数模板可以自动类型推导
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
  // 2 函数模板案例 排序
  char charArr[] = "asdfasdfgg";
  int num_1 = sizeof(charArr) / sizeof(char);
  int intArr[] = {7, 5, 8, 1, 3, 9, 2, 4, 6};
  int num_2 = sizeof(intArr) / sizeof(int);
  mySort(charArr, num_1);
  mySort(intArr, num_2);
  printArray(charArr, num_1);
  printArray(intArr, num_2);
  printf("\n");
  // 3、函数模板和普通函数的区别：是否允许**自动类型转**化：函数模板**不允许**，普通函数**允许**
  char c1 = 'a', c2 = 'b';
  int test1 = MyAdd(a, c1); // 会调用普通函数
  int test2 = MyAdd(b, a); //会调用函数模板，两个int不符合普通函数的行参要求
  //要是想强制调用模板：
  int test3 = MyAdd<>(a, b); //一般不这么做

  return 0;
}
