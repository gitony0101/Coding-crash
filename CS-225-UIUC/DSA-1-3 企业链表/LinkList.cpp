#include <cstddef>
#include <stdio.h>
#include <stdlib.h>

#include "LinkList.h"
//初始化链表
LinkList *Init_LinkList() {
  LinkList *list = (LinkList *)malloc(sizeof(LinkList));
  list->head.next = NULL;
  list->size = 0;
  return list; //返回列表，初始化完成
};
//插入
void Insert_LinkList(LinkList *list, int pos, LinkNode *data) {
  if (list == NULL) { //先判断，三种情况，列表NULL？data NULL？位置NULL？
    return;
  }
  if (data == NULL) {
    return;
  }
  if (pos < 0 || pos > list->size) {
    pos = list->size;
  }
  //插入查找位置
  LinkNode *pCurrent = &(list->head); // list->head是一个实体，所以用取地址操作
  for (int i = 0; i < pos; i++) {
    pCurrent = pCurrent->next; // 循环走到pos-1位置
  }                            //此时pCurrent 位于pos前一个节点
  //插入新节点，已经找到位置pCurrent (pos -1)
  data->next = pCurrent->next;
  pCurrent->next = data;
  list->size++; // 没有创建newnode
};

;
//删除
void Remove_LinkList(LinkList *list, int pos) {
  if (list == NULL) { //判断
    return;
  }
  if (pos < 0 || pos > list->size) {
    return;
  }
  //创建辅助指针变量，找到pos前一个位置pos-1
  LinkNode *pCurrent = &(list->head);
  for (int i = 0; i < pos; i++) { //循环pCurrent找到pos-1
    pCurrent = pCurrent->next;
  }
  //删除节点：还是一根晾衣绳，直接把pos衣服取下来：
  pCurrent->next = pCurrent->next->next; //跳跃两次，指针直接指向pos+1
  list->size--;
};
;
//查找 这里新增了比较函数指针
int Find_LinkList(LinkList *list, LinkNode *data, COMPARENODE compare) {
  if (list == NULL) {
    return -2;
  }
  if (data == NULL) {
    return -3;
  }
  //创建辅助指针变量便利查找，头节点不看，直接next
  LinkNode *pCurrent = list->head.next;
  int index = 0; //初始化索引为0
  int flag = -4;
  while (pCurrent != NULL) {
    //查找功能什么时候找到呢：需要做一个判断，引入比较函数指针
    if (compare(pCurrent, data) == 0) {
      flag = index;
      break;
    }
    pCurrent = pCurrent->next;
    index++;
  }

  return index; //找到了就返回index的值，找不到就返回-1
};
;
//返回链表大小
int Size_LinkList(LinkList *list) { return 0; };
;
//打印， print是main函数里面的打印函数MyPrint
// void Print_LinkList(LinkList *list, PRINTNODE print) {
//   if (list == NULL) {
//     return;
//   }
//   //创建辅助指针pCurrent遍历list
//   LinkNode *pCurrent = list->head.next;
//   while (list != NULL) {
//     print(pCurrent);
//     pCurrent = pCurrent->next;
//   }
// };

void Print_LinkList(LinkList *list, PRINTNODE print) {
  if (list == NULL) {
    return;
  }
  //创建辅助指针pCurrent遍历list
  LinkNode *pCurrent = list->head.next;
  while (pCurrent != NULL) {
    print(pCurrent);
    pCurrent = pCurrent->next;
  }

  return; //对比下来可能就是这里，你少了个return；
}
//释放链表内存
void FreeSpace_LinkList(LinkList *list) {
  if (list == NULL) {
    return;
  }
  free(list); //释放list内存
  //没有创建newnode，不用释放节点内存
};
