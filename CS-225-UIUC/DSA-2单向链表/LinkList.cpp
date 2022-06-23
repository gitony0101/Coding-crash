#include <cstddef>
#include <iostream>
using namespace std;

#include "LinkList.h"

//初始化链表
LinkList *Init_LinkList() {
  LinkList *list = (LinkList *)malloc(sizeof(LinkList)); //初始化，开辟内存
  list->size = 0;                                        //初始容量为零
  //头结点
  list->head = (LinkNode *)malloc(sizeof(LinkNode)); //头结点不保存信息
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
  /*找结点
newnode->next = pCurrent->next;
pCurrent->next = newnode; 找pos位置的前一个结点
*/
  //创建辅助指针变量pCurrent，先指向list的head
  LinkNode *pCurrent = list->head;
  for (int i = 0; i < pos; i++) { //用这个循环找到pCurrent位置
    pCurrent = pCurrent->next;
  }
  //新结点入链表
  newnode->next = pCurrent->next;
  pCurrent->next = newnode;
  list->size++;
};
//删除指定位置的值
void Remove_LinkList(LinkList *list, int pos) {
  if (list == NULL) {
    return;
  }
  if (pos < 0 || pos >= list->size) {
    return;
  }
  //查找删除结点的前一个节点
  ////创建辅助指针变量
  LinkNode *pCurrent = list->head;
  for (int i = 0; i < pos; i++) {
    pCurrent = pCurrent->next; //找到pCurrent结点
  }
  //缓存删除的结点
  LinkNode *pDell = pCurrent->next;
  pCurrent->next = pDell->next;
  //释放删除结点的内存
  free(pDell);
  list->size--;
};
//获得链表长度
int Size_LinkList(LinkList *list) { return list->size; };
//查找（根据指针查找） 不一定要放到这里，看看能否跟其他功能结合
int Find_linkList(LinkList *list, void *data) {

  if (list == NULL) {
    return 0;
  }
  if (data == NULL) {
    return 0;
  }
  //
};

//返回第一个结点
void *Front_LinkList(LinkList *list) { return 0; };
//打印链表结点
void Print_LinkList(LinkList *list, PRINTLINKNODE print){

};
//释放链表内存
void FreeSpace_LinkList(LinkList *list){

};
