// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//类模板
template <class T> class Person {
  //类写法，把函数和属性分开，谁上谁下都行
public:
  T mId;
  T mAge;

public:
  Person(T id, T age) { //初始化Person类
    this->mAge = age;
    this->mId = id;
  }
  void show() { //打印
    printf("Person ID: %u, Age: %u", mId, mAge);
  }
};

void testPersonInt() {
  //类模板必须显示制定类型，没办法像函数模板那样自动推导
  Person<int> p(10, 20); //此处定义了类模板为int类型
  p.show();
}

int main() {
  testPersonInt();
  printf("\n");
  return 0;
}
