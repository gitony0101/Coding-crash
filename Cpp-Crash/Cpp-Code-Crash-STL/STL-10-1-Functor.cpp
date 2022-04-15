#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

/*
仿函数functor 就是函数对象 有类的性质
一元 二元仿函数
1、函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
2、函数可以有自己的状态
3、函数对象可以作为参数传递
*/

// 1、函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
class MyAdd {
public:
  int operator()(int a, int b) { return a + b; } // 重载了()运算符
};

void addTest01() { // 普通函数调用函数对象
  MyAdd lalala;
  printf("addTest01() call MyAdd lalala method: %d \n", lalala(1, 2));
}

// 函数对象可以作为函数参数
void addTest02(MyAdd add02, int num1, int num2) {
  printf("addTest02 method: %d\n", add02(num1, num2));
}
void tryAddtest02() {
  MyAdd add02;
  addTest02(add02, 1, 2);
}
// 2、函数可以有自己的状态
class MyPrint {
public:
  // 先定义这个类是干嘛的，这是主要部分
  MyPrint() { count = 0; }
  void operator()(string test) {
    printf("%s\n", test.c_str());
    count++;
  }
  // 再定义这个类里面的变量，其实就是其他部分了
  int count; //定义count
};

void countPrint() {
  MyPrint countIt;
  countIt("hello world");
  countIt("hello world");
  countIt("hello world");
  printf("\"countIt\"被调用的次数为：%d\n", countIt.count);
}
// 3、函数对象可以作为参数传递
void doPrint(MyPrint &mp, string test) { mp(test); }
void testDoPrint() {
  MyPrint myPrint;
  doPrint(myPrint, "Hello C++");
}

int main() {
  // 调用函数
  addTest01();
  printf("MyAdd()(1, 2) method: %d\n", MyAdd()(1, 2)); // 直接调用
  tryAddtest02();
  //函数可以有自己的状态
  countPrint();
  // 函数对象可以作为参数传递
  testDoPrint();
}
