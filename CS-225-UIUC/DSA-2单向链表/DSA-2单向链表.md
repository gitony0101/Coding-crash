# DSA-2 单向链表

链表由一系列节点组成，每个节点包括指针域和数据域



## 1 创建头文件


```c++
#ifndef LINKLIST_H
#define LINKLIST_H

/*
链表由一系列节点组成，每个节点包括指针域和数据域
*/

//链表结点
typedef struct LINKNODE {
  void *data; //数据域,void*为无类型指针，指向任何类型的数据
  struct LINKNODE *next; //指针域
} LinkNode;
//链表结构体
typedef struct LINKLIST {
  LinkNode *head; // 1、找到头结点
  int size;       // 2、元素个数
  //链表不需要容量，因为是按结点需求分配内存
} LinkList;
//打印函数指针
typedef void (*PRINTLINKNODE)(void *);
//以下都是围绕结构体实现的功能，写进同名C/C++文件中进行函数具体操作
//初始化链表
LinkList *Init_LinkList();
//指定位置插入数据
void Insert_LinkList(LinkList *list, int pos, void *data);
//删除指定位置的值
void Remove_LinkList(LinkList *list, int pos);
//获得链表长度
int Size__LinkList(LinkList *list);
//查找（根据指针查找） 不一定要放到这里，看看能否跟其他功能结合
int Find_linkList(LinkList *list, void *data);

//返回第一个结点
void *Front_LinkList(LinkList *list);
//打印链表结点
void Print_LinkList(LinkList *list, PRINTLINKNODE print);
//释放链表内存
void FreeSpace_LinkList(LinkList *list);

#endif
```

- 连着创建了三个结构体
- `void *data`中 `void*`为无类型指针，**指向任何类型的数据**


## 2 框架实现 LinkList.cpp

- 确保不报错，先把需要`return NULL和0`的补上
- 初始化，开辟内存空间，初始化结构体的各种参数




