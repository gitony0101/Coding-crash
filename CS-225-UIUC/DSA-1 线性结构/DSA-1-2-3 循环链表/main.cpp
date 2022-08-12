//引入标准库
#include <algorithm>
#include <cstdio>
#include <cstring>
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
//创建所需的回调函数，复用后人的代码
//打印回调函数
void MyPrint(CircleLinkNode *data) { //还是打印函数有报错
  Person *p = (Person *)data;
  printf("name:%s  age:%d score: %d\n", p->name, p->age, p->score);
}
//比较回调函数 根据值删除用 因为不确定用户传进来了什么数值
int MyComPare(CircleLinkNode *node1, CircleLinkNode *node2) {
  Person *p1 = (Person *)node1;
  Person *p2 = (Person *)node2;
  if (strcmp(p1->name, p2->name) == 0 && (p1->age == p2->age) == 0 &&
      (p1->score == p2->score == 0)) {
    return CIRCLELINKLIST_TRUE; // strcmp 比较函数 返回0 说明结点完全相同
  }
  return CIRCLELINKLIST_FALSE; // strcmp 比较函数 返回1 说明结点不完全相同
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
  //根据值删除，需要比较回调函数
  Person pDel; //创建需要删除的结构体
  strcpy(pDel.name, "ddd");
  pDel.age = 30;
  pDel.score = 65;
  RemoveByValue_CircleLinkList(clist, (CircleLinkNode *)&pDel, MyComPare);
  //再打印
  Print_CircleLinkList(clist, MyPrint);
  //查找
  Person pX;
  strcpy(pX.name, "eee");
  pX.age = 50;
  pX.score = 70;
  int pos = Find_CircleLinkList(clist, (CircleLinkNode *)&pX, MyComPare);
  printf("pX 的位置 %d\n", pos);
  //释放内存
  FreeSpace_CircleLinkList(clist);
}
