# DSA-1-2 线性表链式存储 链表

- 单向链表 
- 企业链表 
- 循环链表
  - 约瑟夫问题

# 单向链表

链表由一系列节点组成，每个节点包括指针域和数据域



这个链表创建过后，要好好跟DSA-1 动态数组框架搭建比较一下来看，有料。

## 1 创建头文件


```c++
#ifndef LINKLIST_H
#define LINKLIST_H

#include <stdio.h>
#include <stdlib.h>

//链表结点
typedef struct LINKNODE {
  void *data; //数据域
              // void*为无类型指针，指向任何类型的数据
  struct LINKNODE *next; //指针域
} LinkNode;
//链表结构体
typedef struct LINKLIST {
  LinkNode *head; // 1、找到头结点
  int size;       // 2、元素个数
  //链表不需要容量，因为是按结点需求分配内存，没有容量的概念？
} LinkList;
//打印函数指针
typedef void (*PRINTLINKNODE)(void *);
//以下都是围绕结构体实现的功能，写进同名C/C++文件中进行函数具体操作
//
LinkList *Init_LinkList(); //初始化链表
//
//指定位置插入数据
void Insert_LinkList(LinkList *list, int pos, void *data);
//删除指定位置的值
void RemoveByPos_LinkList(LinkList *list, int pos);
//获得链表长度
int Size_LinkList(LinkList *list);
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

- 连着创建了三个结构体：**结点结构体、链表结构体、打印函数指针**
- 先创建了结点，然后才是链表结构体，定义结构体的时候需要结点
    1. 结点结构体`LINKNODE`，先定义了数据域`void *data`，然后是指针域`LINKNODE *next`
       - 链表结构中上一个结点的指针域`LINKNODE *next`指向下一个结点数据域首地址，`void*`为无类型指针，**可以指向任何类型的数据**
       - 然后定义了指针域`LINKNODE *next`，自己嵌套自己，起到连接下一个结点的作用
    2. 链表结构体`LINKLIST`，先定义了头结点`LINKNODE *head`,元素个数`int size`
       - 定义了头结点，起到连接链表的作用
       - 定义元素个数，记录链表操作的增删改查
    3. 打印回调函数指针包括后来的比较函数指针都是针对后来人复用后人代码提供的

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



初始化链表，是为了：
- 开辟链表内存空间，确定链表初始容量为零
- 初始化链表的头结点，虽然不保存任何数据，但是也要初始化定义一下
  - 头结点的指针域指向自己，头结点的数据域为空（不保存信息）

## 指定位置插入数据

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

这里把新加入的结点插进来是个难点：

1. 创建辅助指针变量`pCurrent` 为了不影响链表本身结构
2. 使用for循环，让辅助变量指针往前滑动，直到跑到pos-1的位置，此时pCurrent就位，他的next指针就指向pos位置的data数据域内存首地址
    - size--，是不是可以反过来滑动？
3. 插入结点：创建新的结点`newnode`，先把已经就位的`pCurrent->next`指针赋给newnode的next指针，然后让`pCurrent->next`重新指向newnode的数据域内存首地址
4. 不要忘了size++


> 测试、优化的时候，这里可能还要改

### 插入的实际使用场景

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

- 链表中，删除操作的实质是**挤掉**这个位置的结点，后面的跟上




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

这还是一个辅助内存变量pDel找内存地址的故事:

1. `LinkNode *pDel = pCurrent->next;`先让pos-1的当前结点指针域指向需要删除的结点pDel，这里就是把pos位置上的结点，命名成为pDel准备删除
2. `pCurrent->next = pDell->next;` pDell->next指向的是下下一个结点，此处让pos-1的pCurrent结点继承了pDell的指针域，pDell结点就被**挤出来了**。
3. 释放pDell内存空间

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

注意这个while可以起到循环滑动辅助指针变量pCurrent的效果：
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

## 返回第一个节点（数据信息）

第一个节点是那个节点，想清楚！
`list->head->next`

```c++
void *Front_LinkList(LinkList *list) { return list->head->next; };

```

> 但是这里运行的时候报错：retName: �n Age: 0  Score: 0

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

- 要配合main入口函数中的MyPrint使用，此处是为了确定好数据类型，然后遍历，为打印提供必要的支持

## 释放链表内存

- 因为结点的特性，不能直接删除当前节点，而是要缓存下一个节点以后，再删除当前节点
- 使用while 外加pCurrent = pNext; 循环，直到pNext为NULL
  - 这是一个循环释放的过程，不是一次放完

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

# 单向链表测试















以下是程序入口函数：





## 关于打印函数

包括打印函数指针结构体、打印链表结点和打印函数三个部分共同实现打印链表的功能

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







### 辅助指针变量`pCurrent`：为了在增删改的时候不影响链表结构

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





# 企业链表

一串指针把数据串联起来，数据和指针分离。

- 企业里经常用，写完之后很爽？？
- 内核链表的改进版
- 访问权限考虑
- 数据和指针分离了：指针在上，数据在下，晾衣绳晾衣服结构
- 用户自己管理内存







### 比较函数指针















# 小结

## 与单向链表的对比：

1. 链表结点结构体

-单向链表
```c++
typedef struct LINKNODE {
  void *data; //数据域
              // void*为无类型指针，指向任何类型的数据
  struct LINKNODE *next; //指针域
} LinkNode;

```
- 企业链表

```c++
//链表小结点
typedef struct LINKNODE {
  struct LINKNODE *next;
} LinkNode;
```

可见企业链表小结点里面不包括数据域，只包括指针域。
对比两个链表图



2.打印链表结点指针结构体

- 单向链表
```c++
//打印函数指针
typedef void (*PRINTLINKNODE)(void *);

```

- 企业链表
```c++
//打印企业链表结点指针
typedef void (*PRINTNODE)(LinkNode *); // 与单向链表不同，这也是企业链表的特点

```


3. 插入新结点

- 单向链表，需要创建newnode

```c++
//创建新的节点
  LinkNode *newnode = (LinkNode *)malloc(sizeof(LinkNode));
  newnode->data = data;
  newnode->next = NULL;
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

```
- 企业链表，没有创建newnode

```c++

  for (int i = 0; i < pos; i++) {
    pCurrent = pCurrent->next; // 循环走到pos-1位置
  }                            //此时pCurrent 位于pos前一个节点
  //插入新节点，已经找到位置pCurrent (pos -1)
  data->next = pCurrent->next;
  pCurrent->next = data;
  list->size++; // 没有用newnode
```

- 在其他的函数中也存在这样的区别，还要领悟


4. 查找功能里：
   
- 单向链表直接找到数值就行了
- 企业链表需要创建比较函数指针

## 注意点

### 如何找到位置：

1. 创建辅助指针变量`pCurrent`:
  
- for循环遍历到`pos`前一个位置：`pos - 1`:

```c++
  LinkNode *pCurrent = &(list->head); // list->head是一个实体，所以用取地址操作
  for (int i = 0; i < pos; i++) {
    pCurrent = pCurrent->next; // 循环走到pos-1位置
  }                            //此时pCurrent 位于pos前一个节点


```
   
  - `while i++` 循环遍历到需要查找的数值
```c++
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
  
```

- 使用while 外加pCurrent = pNext; 循环，直到pNext为NULL

### 当你修改了h或者同名cpp代码后

切记同步你的函数格式。







# 循环链表

















## 删除 根据值删除

```c++
CircleLinkNode *pPrev = &(clist->head); //定义被删除结点的前一个结点
CircleLinkNode *pCurrent = clist->head.next; //判断的是值，从next开始
```



### 回调函数

```c++
typedef int(*COMPARENODE)(CircleLinkNode *,
                         CircleLinkNode *); //
// 这里是C的写法，返回int01，C++可以bool
// ###注意下面的同步。你对比的是什么？
//打印回调函数
typedef void (*PRINTNODE)(CircleLinkNode *);
```

- 根据值查找、删除都用到了回调函数，所以，你在compare什么？
- 引用*写在COMPARENODE 前面


开发库的时候，有些情况我们考虑不到，数据类型是后来的人传进来的，所以我们要用这个回调函数





# 循环链表应用——约瑟夫问题


















# 小结

## 你出错的问题：

1. 仔细检查每一个`return`到底输出了什么



# 链表的总结

从结构到代码再从代码到结构




