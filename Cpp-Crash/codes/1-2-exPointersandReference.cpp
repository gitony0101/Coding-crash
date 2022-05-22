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

int main() { exPointer01(); }
