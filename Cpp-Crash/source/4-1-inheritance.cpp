// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

// 1. 继承的写法
//  子类：继承方式父类
// 继承方式：public 公有继承，private 私有继承 ，protect保护继承

// 2. 继承的构造函数写法
//子类的构造函数必须要调用父类的构造函数

// 3. 权限问题 用继承方式去看权限问题//
// 父类当中的**属性**在子类当中的最低**呈现**
// //同时子类中继承方式会 **升级 **原来父类的public到protected
//父类中的私有属性子类不可访问

class Person { //先定义一个Person类作为父类
public:
  //   Person(string name, int age) {
  //     this->name = name;
  //     this->age = age;

  //   } //先初始化以后再赋值
  Person(string name, int age)
      : name(name), age() { //初始化参数列表，初始化时即该值
    printf("父类带参的构造函数。\n");
  };
  Person() { printf("无参构造父类函数Person，可以不写.\n"); } //无参构造
  void print() { printf("Name: %s, Age: %d\n", name.c_str(), age); }

protected:
  string name;
  int age;
  //   const int a = 42;//声明一个const变量会让第一个this初始化方法报错
private:
  int idNUM;
};

//继承子类写法
// 公有继承public
class son_Public : public Person {
public:
protected:
};
//保护继承
class son_Protected
    : protected Person { //保护继承
                         // 因此，父类当中的最低权限public在子类中升级成为protected
  // 如void打印函数
public:
  //子类构造函数必须调用父类的函数：习惯于在父类中加入：  Person() {} //无参构造
  son_Protected() { printf("子类无参构造函数。\n"); }
  //复杂版：子类带参构造函数
  son_Protected(string name, int age) : Person(name, age) {
    printf("子类带参构造函数\n");
  }
  void printBoy() { //直接调用了父类的name和age
    printf("Name: %s, Age: %d\n", name.c_str(), age);
  }

protected:
  //这里已经包含了 name age print
};

int main() {
  Person p1("Jhon", 32);
  p1.print();
  son_Protected boy; //构造子类，调用的是无参构造函数
                     // 调用的时候必定调用父类构造函数
  son_Protected boy2("mike", 5); //调用的是子类带参构造函数
                                 // 要和该类构造函数的参数对应起来
  boy2.printBoy();
  printf("\n");
  return 0;
}
