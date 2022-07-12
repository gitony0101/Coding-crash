#include <cstring>
#include <iostream>
#include <typeinfo>
using namespace std;
#include "LinkList.h"

typedef struct PERSON { //创建的是链表节点的结构体，每个都一样
  // LinkNode node必须写在这里，否则造成偏移量问题
  LinkNode node; //头部是node首地址，指向下一个node。
  char name[64];
  int age;
} Person;

//打印回调函数
void MyPrint(LinkNode *data) { //把LinkNode*转换为Person* 打印
  Person *p = (Person *)data;
  printf(" name:%s  age:%d\n", p->name, p->age);
}

//比较回调函数
int MyCompare(LinkNode *node1, LinkNode *node2) {
  Person *p1 = (Person *)node1;
  Person *p2 = (Person *)node2;
  if (strcmp(p1->name, p2->name) == 0 && (p1->age == p2->age) == 0) {
    return 0; // strcmp比较函数返回0 说明结点完全相同
  }
  return 1; //返回1 说明不完全相同
}
int main(void) {
  //创建链表
  LinkList *list = Init_LinkList();

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
  //节点插入到列表:头部第零位插入
  Insert_LinkList(list, 0, (LinkNode *)&p1);
  //插入姿势相当不同,LinkNode*只能访问到next的指针域，这里可以看出来企业链表的晾衣绳结构,一整个企业链表就串联起来了
  Insert_LinkList(list, 0, (LinkNode *)&p2);
  Insert_LinkList(list, 0, (LinkNode *)&p3);
  Insert_LinkList(list, 0, (LinkNode *)&p4);
  Insert_LinkList(list, 0, (LinkNode *)&p5);
  //打印 需要再创建回调函数
  Print_LinkList(list, MyPrint);
  //删除节点
  Remove_LinkList(list, 2); //删除p3
  printf("----删除p3----\n");
  Print_LinkList(list, MyPrint);
  //查找
  Person drWho;
  strcpy(drWho.name, "eee");
  drWho.age = 50;
  int pos = Find_LinkList(list, (LinkNode *)&drWho, MyCompare);
  printf("drWHo 的位置 %d\n", pos);

  //释放链表内存
  FreeSpace_LinkList(list);
}
