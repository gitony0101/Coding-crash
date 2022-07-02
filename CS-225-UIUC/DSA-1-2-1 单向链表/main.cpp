#include "LinkList.h"
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//自定义数据类型
typedef struct PERSON {
  char name[64]; //这种写法挺sql的，或者，就是因为C++才sql
  int age;
  int score;
} Person;
//打印函数
void MyPrint(void *data) {
  Person *p = (Person *)data;
  printf("Name: %s Age: %d  Score: %d \n", p->name, p->age, p->score);
}

int main(void) {
  printf("测试单向链表\n");
  // 创建链表
  LinkList *list = Init_LinkList(); //初始化链表
  //创建数据
  Person p1 = {"aaa", 19, 99};
  Person p2 = {"bbb", 14, 34};
  Person p3 = {"ccc", 13, 56};
  Person p4 = {"ddd", 19, 86};
  Person p5 = {"eee", 29, 19};
  //数据插入链表,这里的插入真是插入啊
  Insert_LinkList(list, 0, &p1);
  Insert_LinkList(list, 0, &p2);
  Insert_LinkList(list, 0, &p3);
  Insert_LinkList(list, 0, &p4);
  Insert_LinkList(list, 0, &p5); // 打印顺序：p5-p1
                                 //
  Print_LinkList(list, MyPrint); //打印
  //打印链表长度
  int lkSize = Size_LinkList(list);
  printf("链表长度 %d\n", lkSize);
  // 查找
  int posP2 = Find_linkList(list, &p2);
  printf("p2 的位置 %d\n", posP2);
  // 删除 2
  RemoveByPos_LinkList(list, 3);
  printf("------删除 3(p4)------\n");
  Print_LinkList(list, MyPrint); //打印
  //返回第一个结点
  printf("----返回第一个结点----\n");
  Person *ret = (Person *)Front_LinkList(list);
  MyPrint(ret);
  // printf("retName: %s Age: %d  Score: %d \n", ret->name, ret->age,
  // ret->score);  //一样的效果，有点啰嗦
  //销毁链表
  FreeSpace_LinkList(list);
}
