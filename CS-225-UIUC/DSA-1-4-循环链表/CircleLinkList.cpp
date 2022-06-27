//引入头文件
#include "CircleLinkList.h"
#include <cstddef>
//初始化循环链表
CircleLinkList *Init_CircleLInkList() {
  CircleLinkList *clist = (CircleLinkList *)malloc(sizeof(CircleLinkList));
  clist->head.next = &(clist->head); // 循环链表初始化，让它指向自己
  clist->size = 0;
  return NULL;
};
//插入函数
void Insert_CircleLinkList(CircleLinkList *clist, int pos,
                           CircleLinkNode *data) {
  if (clist == NULL) {
    return;
  }
  if (data == NULL) {
    return;
  }
  if (pos < 0 || pos > clist->size) {
    pos = clist->size; //具体要看业务怎么处理，这样选择其实是个先入为主的决定
  }
  //根据位置查找前一个结点，引入辅助指针变量便利查找
  CircleLinkNode *pCurrent = &(clist->head); //取地址
  for (int i = 0; i < pos; i++) {
    pCurrent = pCurrent->next;
  }
  //新数据入链表
  data->next = pCurrent->next;
  pCurrent->next = data;
  clist->size++;
};
//获得第一个元素
CircleLinkNode *Front_CircleLinkList(CircleLinkList *clist) { return NULL; };
//删除 根据位置删除
void RemoveByPos_CircleLinkList(CircleLinkList *clist, int pos,
                                CircleLinkNode *data) {
  {
    if (clist == NULL) {
      return;
    }
    if (pos < 0 || pos >= clist->size) { //注意这里的逻辑是》>=
      return;
    }
    //引入辅助指针变量根据pos遍历寻找结点
    CircleLinkNode *pCurrent = &(clist->head);
    for (int i = 0; i < pos; i++) {
      pCurrent = pCurrent->next; //跑到了pos-1位置
    }
    //缓存当前结点pCurrent的下一个结点
    CircleLinkNode *pNext = pCurrent->next;
    pCurrent->next = pNext->next; //等于说把pos位置上的结点给挤出去了
    clist->size--;
  };
};
//删除 根据值删除
void RemoveByValue_CircleLinkList(CircleLinkList *clist, CircleLinkNode *data,
                                  COMPARENODE *compare) {
  if (clist == NULL) {
    return;
  }
  if (data == NULL) {
    return;
  }
  //这是循环链表
  CircleLinkNode *pCurrent = clist->head.next; //判断的是值，从next开始
  int flag = -1;
  int i = 0;
  for (i = 0; i < clist->size; i++) { //引入compare判断*pCurrent和data是否相同
    if (compare(pCurrent, data) == CIRCLELINKLIST_TRUE) {
      break;
    }
    pCurrent = pCurrent->next;
  }
};
//获得链表的长度
int SIze_CircleLinkList(CircleLinkList *clist) { return 0; };
//判断
int IsEmpty_CircleLinkList(CircleLinkList *clist) { return 0; };
//查找 根据值去查找
int Find_CircleLinkList(CircleLinkList *clist, CircleLinkNode *data,
                        COMPARENODE *compare) {
  return 0;
};
//打印结点
void Print_CircleLinkList(CircleLinkList *clist, PRINTNODE print){

};
//释放内存
void FreeSpace_CircleLinkList(CircleLinkList *clist){

};
