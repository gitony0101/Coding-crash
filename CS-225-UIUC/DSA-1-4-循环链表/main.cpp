//引入标准库
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//引入头文件
#include "CircleLinkList.h"

//创建Person结构体
typedef struct PERSON {
  CircleLinkNode node;
  char name[64];
  int age;
  int score;
} Person;
//回调函数打印
void MyPrint(CircleLinkNode *data) { //还是打印函数有报错
  Person *p = (Person *)data;
  printf("name:%s  age:%d score: %d\n", p->name, p->age, p->score);
}

int main() {
  CircleLinkList *clist = Init_CircleLInkList(); //初始化循环链表
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
  p1.score = 50;
  p2.score = 50;
  p3.score = 60;
  p4.score = 65;
  p5.score = 70;
  //数据插入链表
  Insert_CircleLinkList(clist, 100, (CircleLinkNode *)&p1); //从位置100开始取了
  Insert_CircleLinkList(clist, 100, (CircleLinkNode *)&p2);
  Insert_CircleLinkList(clist, 100, (CircleLinkNode *)&p3);
  Insert_CircleLinkList(clist, 100, (CircleLinkNode *)&p4);
  Insert_CircleLinkList(clist, 100, (CircleLinkNode *)&p5);
  //   打印
  Print_CircleLinkList(clist, MyPrint);
  //释放内存
  FreeSpace_CircleLinkList(clist);
}
