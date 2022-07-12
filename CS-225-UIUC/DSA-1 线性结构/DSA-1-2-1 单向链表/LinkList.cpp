#include "LinkList.h" //包含头文件
#include <stdio.h>
#include <stdlib.h>

//打印函数指针
typedef void (*PRINTLINKNODE)(void *);
//
//初始化链表
LinkList *Init_LinkList() {
  LinkList *list =
      (LinkList *)malloc(sizeof(LinkList)); //初始化，申请内存 malloc开辟
  list->size = 0;                           //初始容量为零
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
    pos =
        list->size; //也是不合规的输入，但是我们可以先插入到尾部，或者直接return；
  }
  //创建新的节点
  LinkNode *newnode = (LinkNode *)malloc(sizeof(LinkNode));
  newnode->data = data;
  newnode->next =
      NULL; //先定义新结点指针域指向NULL，为它将来被赋值pCurrent->next做准备
  //创建辅助指针变量pCurrent
  LinkNode *pCurrent = list->head; // pCurrent先指向list的head
  for (int i = 0; i < pos; i++) { //用这个循环让pCurrent走到pos-1的位置
    pCurrent = pCurrent->next;    //不停地让pCurrent往前移动
  }
  //新结点入链表
  //第一步，先把新结点的next指针,这个指针指向pNext的数据域在内存里的首地址:
  newnode->next = pCurrent->next;
  //第二步，让上一个结点pCurrent的指针指向newnode（的数据域内存首地址）：
  pCurrent->next = newnode;
  list->size++; //链表大小+1
};
//删除指定位置的值
void RemoveByPos_LinkList(LinkList *list, int pos) {
  if (list == NULL) { //防呆预判
    return;
  }
  if (pos < 0 || pos >= list->size) {
    return;
  }
  //查找删除结点的前一个节点
  //创建辅助指针变量
  LinkNode *pCurrent = list->head; //先让辅助指针变量指向链表头
  for (int i = 0; i < pos; i++) { //用这个循环让pCurrent走到pos-1的位置
    pCurrent = pCurrent->next;    //不停地让pCurrent往前移动
  }
  //缓存删除的结点 关键所在：
  //先让pos-1的当前结点指针域指向需要删除的结点pDel，这里就是把pos位置上的结点，命名成为pDel准备删除
  LinkNode *pDell = pCurrent->next;
  // pDell->next指向的是下下一个结点，此处让pos-1的pCurrent结点继承了pDell的指针域，pDell结点就被**挤出来了**。
  pCurrent->next = pDell->next;
  //释放删除结点pDell的内存
  free(pDell);
  list->size--;
};
//获得链表长度
int Size_LinkList(LinkList *list) { //直接返回
  return list->size;
};
//查找 不一定要放到这里，看看能否跟其他功能结合
int Find_linkList(LinkList *list, void *data) {

  if (list == NULL) {
    return -1;
  }
  if (data == NULL) {
    return -1;
  }
  //遍历查找，先创建辅助指针变量
  LinkNode *pCurrent = list->head->next; //注意：
  // list头结点不保存数据，从头结点的指针域才指向第一个结点的数据域地址，这才是第一个有效数据
  int i = 0;
  while (pCurrent != NULL) {
    if (pCurrent->data == data) {
      break;
    }
    i++;                       //第二种循环的方式，用while循环
    pCurrent = pCurrent->next; //结点往后移动
  }
  return i;
};

//返回第一个结点
void *Front_LinkList(LinkList *list) { //调试的时候发现错误
  return list->head->next->data;
  //指针不保存数据信息，只是指向下一个结点的数据域内存首地址
}
//打印链表结点
//要配合main入口函数中的MyPrint使用，此处是为了确定好数据类型，为打印提供必要的支持
void Print_LinkList(LinkList *list, PRINTLINKNODE print) {
  if (list == NULL) {
    return;
  }
  //辅助指针变量
  LinkNode *pCurrent = list->head->next;
  while (pCurrent != NULL) {
    print(pCurrent->data);
    pCurrent = pCurrent->next;
  }
}
//释放链表内存
void FreeSpace_LinkList(LinkList *list) {
  if (list == NULL) {
    return;
  }
  //每个节点都要释放，所以还要遍历，此时需要辅助指针变量走一遍
  LinkNode *pCurrent = list->head;
  while (pCurrent != NULL) {
    //  因为结点的特性，不能直接删除当前节点，而是要缓存下一个节点以后，再删除当前节点
    LinkNode *pNext = pCurrent->next; //缓存下一个结点
    free(pCurrent);                   //然后再释放当前结点
    pCurrent = pNext;                 //往下循环
  }
  //释放链表内存
  free(list);
};
