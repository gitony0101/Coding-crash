#include <cstdio>
#include <iostream>
#include <stdio.h>
using namespace std;

/*
指针\*是地址，引用&是别名

引用为对象起了另外一个名字，**指向的是对象的地址，而不是对象本身**,同时，`&`被叫做取地址运算符

指针(pointer)是“指向(point to)”另外一种类型的复合类型。
**指针实现了对其他对象的间接访问**

指针本身就是一个对象，允许对指针赋值和拷贝，而且**在指针的生命周期内它可以先后指向几个不同的对象**。

指针无须在定义时赋初值。和其他内置类型一样，在块作用域内定义的指针如果没有被初始化，也将拥有一个不确定的值。
指针可以被赋值为 NULL，表示指向一个空指针。
指针既包含了一个地址，也包含了一个类型。

const 与 指针和引用，const确定谁不能变
*/

void exPointer01() {
  int x = 42;
  int *ptr = &x;
  int **pptr = &ptr;
  printf("x的地址是 %p\n", &x);
  printf("x的值为 %d\n", x);
  printf("ptr 的地址为 %p\n", &ptr);
  printf("ptr 的值为 %p\n", ptr);
  printf("ptr 的内容作为地址的内容 %d\n", *ptr);
  //
  printf(" &pptr = %p\r\n", &pptr); // ppx的地址
  printf(" pptr = %p\r\n", pptr);   // ppx的内容
  printf(" *pptr = %p\r\n", *pptr); // ppx的内容作为地址的内容
}

// 原子之音 const 与 指针和引用
void exConstPointerRef() {
  // const 与指针
  double n = 1.4, m = 1.5;
  const double *ptr01 = &n; //指向的变量n的值不能变
  //现在改变p指向的地址
  ptr01 = &m;
  printf("p = &m后，p的地址是 : %p，它所指向的变量的值为%f\n", ptr01, *ptr01);
  //可以看到，内存地址指向可以变，并且跟随者它的值由原来的n已经变为了m，仔细体会，这就是指针的力量
  // 解开这里的注释：
  // *p = m; // 这里的报错是：Read-only variable is not assignable
  // 你不能改变p指向变量的值，其余两种情况可以自己试试
  // const 与引用
  double &ref_n = n;
  n = m;
  printf("n = m后，ref_n的地址是 : %p，ref_n的值为%f\n", &ref_n, ref_n);
}

int main() {
  // exPointer01();
  exConstPointerRef();
}
