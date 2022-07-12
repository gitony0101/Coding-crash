// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

#include "LinkStack.h"

typedef struct PERSON { //创建PERSON结构体
  LinkNode node;        //企业链表，晾衣服
  char name[64];
  int age;
} Person;

int main() {

  //创建栈
  LinkStack *stack = Init_LinkStack();
  //创建数据
  Person p1, p2, p3, p4, p5;
  strcpy(p1.name, "aaa");
  strcpy(p2.name, "bbb");
  strcpy(p3.name, "ccc");
  strcpy(p4.name, "ddd");
  strcpy(p5.name, "eee");
  p1.age = 10;
  p2.age = 20;
  p3.age = 40;
  p4.age = 30;
  p5.age = 50;
  //入栈--压栈
  Push_LinkStack(stack, (LinkNode *)&p1); //需要加上(LinkNode*)转换
  Push_LinkStack(stack, (LinkNode *)&p2);
  Push_LinkStack(stack, (LinkNode *)&p3);
  Push_LinkStack(stack, (LinkNode *)&p4);
  Push_LinkStack(stack, (LinkNode *)&p5);
  //输出
  while (Size_LinkStack(stack) > 0) {
    //取出栈顶元素，并转换为Person的结构
    Person *p = (Person *)Top_LinkStack(stack);
    printf("姓名： %s，年龄： %d\n", p->name, p->age);
    //弹出栈顶元素,从而读取下一个元素
    Pop_LinkStack(stack);
  }
  //销毁栈
  FreeSpace_LinkStack(stack);
  printf("\n");
  return 0;
}
