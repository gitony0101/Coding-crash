// #define _CRT_SECURE_NO_WARNINGS
#include "4-1-Person.h" //文件名照搬

//要加入预作用府 Person::, 指明类
Person::Person(string name, int age) {
  this->mName = name;
  this->mAge = age;
};

void Person::Show() { printf("Person name: %s, Age: %d", mName.c_str(), mAge); }
