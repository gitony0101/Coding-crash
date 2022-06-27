# DSA-2 单向链表

链表由一系列节点组成，每个节点包括指针域和数据域



这个链表创建过后，要好好跟DSA-1 动态数组框架搭建比较一下来看，有料。

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

- 连着创建了三个结构体：
  - 先创建了结点，然后才是链表结构体，因为在链表结构体中，需要先找到头结点

```c++
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
} 
//打印函数指针
typedef void (*PRINTLINKNODE)(void *);

```
- `void *data`中 `void*`为无类型指针，**指向任何类型的数据**
- 专门写了一个打印函数指针，用于打印结点的数据


## 2 框架实现 LinkList.cpp

- 确保不报错，先把需要`return NULL和0`的补上
- 初始化，开辟内存空间，初始化结构体的各种参数
>框架代码比较复杂，一步一步来分开写




## 初始化链表
```c++
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

```



## 指定位置插入数据

![img](./DSA-2%E5%8D%95%E5%90%91%E9%93%BE%E8%A1%A8-%E6%8C%87%E5%AE%9A%E4%BD%8D%E7%BD%AE%E6%8F%92%E5%85%A5%E6%95%B0%E6%8D%AE.png)

这里把新加入的结点插进来是个难点
- 创建辅助指针变量
- 使用for循环让这个辅助指针变量跑到pos-1的位置，此时pCurrent就位

```c++

```
```c++
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

```

```c++
  //创建新的节点
  LinkNode *newnode = (LinkNode *)malloc(sizeof(LinkNode));
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

```
```

```

> 回头这里可能还要改

### 实际使用场景

```c++
 Insert_LinkList(list, 0, &p1);
  Insert_LinkList(list, 0, &p2);
  Insert_LinkList(list, 0, &p3);
  Insert_LinkList(list, 0, &p4);
  Insert_LinkList(list, 0, &p5);
```

> 因为都是从头压入数据，所以按照此顺序，链表中的数据就是：

    `head > p5 > p4 > p3 > p2 > p1 > NULL`

打印的时候，先打印p5，最后是p1





## 删除指定位置的值




这还是一个找内存地址的故事

1. `LinkNode *pDel = pCurrent->next;`先让pos-1的当前结点指针域指向需要删除的结点pDel，这里就是把pos位置上的结点，命名成为pDel准备删除
2. `pCurrent->next = pDell->next;` pDell->next指向的是下下一个结点，此处让pos-1的pCurrent结点继承了pDell的指针域，pDell结点就被**挤出来了**。
3. 释放pDell内存空间

```c++
void Remove_LinkList(LinkList *list, int pos) {
  if (list == NULL) { //防呆预判
    return;
  }
  if (pos < 0 || pos >= list->size) {
    return;
  }
  //查找删除结点的前一个节点
  ////创建辅助指针变量
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

```

- 找内存地址，一个是数据域内存首地址，一个是结点指针域指向下一个结点的地址。

## 获得链表长度

```c++
int Size_LinkList(LinkList *list) { //直接返回
  return list->size;
};
```











## 查找（按地址）



```c++
int Find_linkList(LinkList *list, void *data) {

  if (list == NULL) {
    return 0;
  }
  if (data == NULL) {
    return 0;
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

```

注意这个while可以起到循环：
```c++
  int i = 0;
  while (pCurrent != NULL) {
    if (pCurrent->data == data) {
      break;
    }
    i++;                       //第二种循环的方式，用while循环
    pCurrent = pCurrent->next; //结点往后移动
  }
  return i;

```

## 返回第一个节点

第一个节点是那个节点，想清楚！
`list->head->next`

```c++
void *Front_LinkList(LinkList *list) { return list->head->next; };

```

> 这里运行的时候报错：retName: �n Age: 0  Score: 0

next是个指针，从这个错误你可以看到指针不保存数据信息。

所以要改成：

```c++
void *Front_LinkList(LinkList *list) { return list->head->next->data; };

```



## 打印链表结点

```c++
void Print_LinkList(LinkList *list, PRINTLINKNODE print) {
  if (list == NULL) {
    return;
  }
  //创建辅助指针变量
  LinkNode *pCurrent = list->head->next;
  // 要打印节点，所以要从head的指针指向的第一个节点开始

  while (pCurrent != NULL) {
    print(pCurrent->data);
    pCurrent = pCurrent->next;
  }
};

```

- 要配合main入口函数中的MyPrint使用，此处是为了确定好数据类型，为打印提供必要的支持

## 释放链表内存

因为结点的特性，不能直接删除当前节点，而是要缓存下一个节点以后，再删除当前节点

```c++

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


```

最后代码的样子：

```c++
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
    pos =
        list->size; //也是不合规的输入，但是我们可以先插入到尾部，或者直接return；
  }

  //创建新的节点
  LinkNode *newnode = (LinkNode *)malloc(sizeof(LinkNode));
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
void Remove_LinkList(LinkList *list, int pos) {
  if (list == NULL) { //防呆预判
    return;
  }
  if (pos < 0 || pos >= list->size) {
    return;
  }
  //查找删除结点的前一个节点
  ////创建辅助指针变量
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
void *Front_LinkList(LinkList *list) { return list->head->next->data; };//这里运行时候报错调试了，指针不保存数据信息
//打印链表结点
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


```

以上代码还是会报错

`make: *** [all] Segmentation fault: 11`

# 单向链表测试















以下是程序入口函数：





## 关于打印函数

- 一个结构体
```c++
//打印函数指针
typedef void (*PRINTLINKNODE)(void *);
```

- 两个函数

1. 打印链表结点
```c++
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

```

2. 打印函数
```c++
//打印函数
void MyPrint(void *data) {
  Person *p = (Person *)data;
  printf("Name: %s Age: %d  Score: %d \n", p->name, p->age, p->score);
}
```

- 打印函数`MyPrint`确定了，我要打印的是Person类型的数据，所以要把数据类型转换成Person类型
- 打印链表结点`Print_LinkList`确定了怎么去遍历这个结点
- 结构体`typedef void (*PRINTLINKNODE)(void *);`帮助计算机知道什么是结点类型是我们要打印的结点。
  - 不好，在理解一下
- 三者配合，实现了链表结点的打印。
- 由于插入顺序都是从第0位插入，打印顺序和压入顺序相反。







## 小结

## 

### 链表的操作要注意链表本身的特性

作为一个链表，节点包括数据域和指针域：
- 数据域首地址，就是这个节点的头，上一个节点的指针域，就指向这里。



### 辅助指针变量`pCurrent`

- 不要直接操作原始链表，而是使用辅助指针变量`pCurrent`，这样就可以保证不会改变原始结点的信息乃至链表的结构。


关于辅助指针变量：



```c++
  LinkNode *pCurrent = list->head;
  for (int i = 0; i < pos; i++) {
    pCurrent = pCurrent->next; //找到pCurrent结点
  }

```

在遍历查找中，为了找数据，辅助指针变量为：
```c++
LinkNode *pCurrent = list->head->next; //注意：
  // list头结点不保存数据，从头结点的指针域才指向第一个结点的数据域地址，这才是第一个有效数据
```
