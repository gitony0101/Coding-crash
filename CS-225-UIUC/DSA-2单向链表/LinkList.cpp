#include <cstddef>
#include <iostream>
using namespace std;

#include "LinkList.h"

//初始化链表
LinkList *Init_LinkList() {
  LinkList *list = (LinkList *)malloc(sizeof(LinkList)); //初始化，开辟内存
  list->size = 0;                                        //初始容量为零
  //头结点（不保存数据信息）
  list->head = (LinkNode *)malloc(sizeof(LinkNode));
  list->head->data = NULL;
  list->head->next = NULL;
  return list;
};
//指定位置插入数据
void Insert_LinkList(LinkList *list, int pos, void *data) {
  if (list == NULL) { //首先判断参数是不是我们要求的参数
    return;
  }
  if (data == NULL) {
    return;
  }
  if (pos < 0 || pos > list->size) {
    pos = list->size; //插入到尾部，或者直接return；
  }
  //创建新的节点
  LinkNode *newnode = (LinkNode *)malloc(sizeof(LinkNode));
};
//删除指定位置的值
void Remove_LinkList(LinkList *list, int pos){

};
//获得链表长度
int Size__LinkList(LinkList *list) { return 0; };
//查找（根据指针查找） 不一定要放到这里，看看能否跟其他功能结合
int Find_linkList(LinkList *list, void *data) { return 0; };

//返回第一个结点
void *Front_LinkList(LinkList *list) { return 0; };
//打印链表结点
void Print_LinkList(LinkList *list, PRINTLINKNODE print){

};
//释放链表内存
void FreeSpace_LinkList(LinkList *list){

};
