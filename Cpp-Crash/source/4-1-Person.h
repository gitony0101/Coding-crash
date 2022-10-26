#pragma once // C++写法，防止头文件被重复包含
#include <iostream>
#include <string>
using namespace std;
class Person {
public:
  Person(string name, int age); //只做声明
  void Show();

public:
  string mName;
  int mAge;
  int mId;
};
