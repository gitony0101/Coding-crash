#include <cstdio>
#include <iostream>
using namespace std;

/*
仿函数functor 就是函数对象 有类的性质
一元 二元仿函数
谓词 一元二元 谓词
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
void addTest02(MyAdd add02, int num) {}
void tryAddtest02() {}

int main() {
  addTest01();
  printf("MyAdd()(1, 2) method: %d\n", MyAdd()(1, 2)); // 直接调用
}
