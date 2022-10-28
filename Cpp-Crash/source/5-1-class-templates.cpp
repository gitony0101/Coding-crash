// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//类模板

/*
1、 创建类模板
2、 对 char 和int类型数组进行排序 冒泡排序
3、 类模板派生普通类
*/

// 1. 创建类模板
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

// 2、 对 char 和int类型数组进行排序
// 打印函数
template <class T> void printArray(T *arr, int len) { // 数组做参数退化成指针
  // len 可以换也可以不换T
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
//冒泡排序
template <class T> void popSort(T *arr, int len) { // len 可以换也可以不换T
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      //从大到小排序，大的交换
      if (arr[i] < arr[j]) {
        T temp = arr[i]; //这里的temp也要换一下T
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

// 3、类模板派生普通类
template <class T> class Animal {
public:
  void Bark() { printf("Animal barking"); }

public:
  T mAge;
};
//派生类模板 用的类继承
template <class T> class Cat : public Animal<T> {};

int main() {
  // 1. 创建类模板
  //   testPersonInt();
  printf("\n");
  // 2、 对 char 和int类型数组进行排序
  int arr[] = {23, 545, 23, 566, 13, 4, 4};
  int lenArr = sizeof(arr) / sizeof(int);
  char charArr[] = {'v', 's', 'a', 'n', 'o'};
  int lenCharArr = sizeof(charArr) / sizeof(char);
  printf("int数组排序前：\n");
  printArray(arr, lenArr);
  popSort(arr, lenArr);
  printf("int数组排序后：\n");
  printArray(arr, lenArr);
  printf("char数组排序前：\n");
  printArray(charArr, lenArr);
  popSort(charArr, lenArr);
  printf("char数组排序后：\n");
  printArray(charArr, lenArr);
  // 3、类模板派生普通类
  Cat<int> cat;

  return 0;
}
