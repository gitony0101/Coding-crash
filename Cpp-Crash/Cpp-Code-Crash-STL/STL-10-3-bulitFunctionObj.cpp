#include <cstdio>
#include <functional> // 第一步导入 内建函数对象 头文件
#include <iostream>
using namespace std;

/*内建函数对象
算术仿函数
关系仿函数
逻辑仿函数

这些仿函数产生的对象、用法和一般函数完全相同
内建函数对象需要引入头文件 #include <functional>
加减乘除  取反
逻辑与或非

*/

void testBuilinFunc() {
  //算术仿函数
  // negate
  negate<int> n;
  printf("negate 50 : %d\n", n(50));
  // plus
  plus<int> p;
  printf("10 + 20= %d\n", p(10, 20));
}

int main() { testBuilinFunc(); }

/*
仿函数原型

* `template<class T> T plus<T>`                //加法仿函数
* `template<class T> T minus<T>`              //减法仿函数
* `template<class T> T multiplies<T>`    //乘法仿函数
* `template<class T> T divides<T>`         //除法仿函数
* `template<class T> T modulus<T>`         //取模仿函数
* `template<class T> T negate<T>`           //取反仿函数
*/
