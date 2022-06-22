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

- 连着创建了三个结构体
- `void *data`中 `void*`为无类型指针，**指向任何类型的数据**


## 2 框架实现 LinkList.cpp

- 确保不报错，先把需要`return NULL和0`的补上
- 初始化，开辟内存空间，初始化结构体的各种参数
>框架代码比较复杂，一步一步来分开写




## 初始化链表
```cpp
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

```cpp
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

```

> 回头这里可能还要改

### 辅助指针`pCurrent`

关于辅助指针变量：



```cpp
  LinkNode *pCurrent = list->head;
  for (int i = 0; i < pos; i++) {
    pCurrent = pCurrent->next; //找到pCurrent结点
  }

```

## 删除指定位置的值




