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

```
- `void *data`中 `void*`为无类型指针，**指向任何类型的数据**


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
```cpp
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

```cpp
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



```cpp
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









## 小结

## 

### 链表的操作要注意链表本身的特性

作为一个链表，节点包括数据域和指针域：
- 数据域首地址，就是这个节点的头，上一个节点的指针域，就指向这里。

### 辅助指针变量`pCurrent`

关于辅助指针变量：



```c++
  LinkNode *pCurrent = list->head;
  for (int i = 0; i < pos; i++) {
    pCurrent = pCurrent->next; //找到pCurrent结点
  }

```

在遍历查找中，为了找数据，辅助指针变量为：
```cpp
LinkNode *pCurrent = list->head->next; //注意：
  // list头结点不保存数据，从头结点的指针域才指向第一个结点的数据域地址，这才是第一个有效数据
```
