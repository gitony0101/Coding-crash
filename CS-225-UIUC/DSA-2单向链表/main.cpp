// #define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//自定义数据类型
typedef struct PERSON {
  char name[64];
  int age;
  int score;
} Person;
//打印函数
void MyPrint(void *data) {
  Person *p = (Person *)data;
  printf("Name: %s Age: %d  Score: %d \n", p->name, p->age, p->score);
}

int main(void) {
  //创建链表
  LinkList *list = Init_LinkList();
  //创建数据
  Person p1 = {"aaa", 19, 99};
  Person p2 = {"bbb", 14, 34};
  Person p3 = {"ccc", 13, 56};
  Person p4 = {"ddd", 19, 86};
  Person p5 = {"eee", 29, 19};
  //数据插入链表
  Insert_LinkList(list, 0, &p1);
  Insert_LinkList(list, 0, &p2);
  Insert_LinkList(list, 0, &p3);
  Insert_LinkList(list, 0, &p4);
  Insert_LinkList(list, 0, &p5); // 打印顺序：p5-p1
                                 //打印
  // Print_LinkList(list, MyPrint);
  Print_LinkList(list, MyPrint);

  //销毁链表
  FreeSpace_LinkList(list);
}
