// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

#include "SeqStack.h" //引入编写的头文件

typedef struct PERSON {
  char name[64];
  int age;
} Person;

int main() {
  //创建栈
  SeqStack *stack = Init_SeqStack();
  //创建数据
  Person p1 = {
      "aaa",
      10,
  };
  Person p2 = {
      "bbb",
      20,
  };
  Person p3 = {
      "ccc",
      30,
  };
  Person p4 = {
      "ddd",
      40,
  };
  Person p5 = {
      "eee",
      50,
  };
  //入栈
  Push_SeqStack(stack, &p1);
  Push_SeqStack(stack, &p2);
  Push_SeqStack(stack, &p3);
  Push_SeqStack(stack, &p4);
  Push_SeqStack(stack, &p5);
  //输出:包括访问并打印，弹出栈顶元素：因为栈的结构
  while (Size_SeqStack(stack) > 0) {
    //访问栈顶元素
    Person *person = (Person *)Top_SeqStack(stack);
    printf("姓名： %s。年龄：%d\n", person->name, person->age);
    //弹出栈顶元素
    Pop_SeqStack(stack);
  }
  //释放内存
  FreeSpace_SeqStack(stack);
  printf("\n");
  return 0;
}
