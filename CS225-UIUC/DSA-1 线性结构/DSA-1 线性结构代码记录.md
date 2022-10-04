# 线性结构代码记录


- 线性表 数组 链表 栈 队列






# DSA-1-1 线性表顺序存储 动态数组框架搭建




1. 当插入一个新的元素的时候，这个时候发现空间不足？
2. 申请一块更大的内存空间,将原空间的数据拷贝到新的空间
3. 释放旧的空间
4. 把元素放入新的空间




## 编写框架步骤


1. 编写动态数组`.h`头文件
2. 编写动态数组`.cpp`源文件
3. 编写输出函数(main.cpp)
4. 编写 makefile 文件

- 关于 debug 编译，另参阅`tasks/launch json`文件编译教程
- 此次创建的是 int 类型的动态数组框架




# 框架编写记录


> 每一步这么细致是为了比较每次编写的不同和改进，这就是写代码的思路
> 
> h头文件是同名cpp的起源，连起来一起看

## `.h`头文件暨`.cpp`源文件框架


- 防止头文件被包含，引入标准库
- 创建用到的结构体
  - 线性表（数组、链表）结构体
    - 结点结构体
  - 功能函数结构体 **这里写的是多态，还需在输出函数中定义功能细节，你无法定义的信息，交给用户去定义，写好多态，复用后人的函数**
    - 打印函数指针
    - 对比（比较）函数指针
  - 定义需要的宏 `#define XXX_TRUE 1 / XXX_FALSE 0`等等


- 初始化线性表（数组、链表）：`XXXList *Init_XXXList()`
- 编写功能函数（以线性表为例）:

  1. 插入结点
  2. 删除结点：按位置、按值（要用到比较回调函数）
  3. 查找结点：按值（要用到比较回调函数）
  4. 返回容量大小
  5. 返回首结点
  6. 打印
  7. 释放内存






> 阅读代码注意：h头文件衍生出来同名文件

## 1 创建 头文件 `DynamicArray.h`


- 动态增长内存
  > 策略：将内存放到堆上
- 动态数组 如果当前有 n 个元素，目前要再插进去一个元素
  - 所以我们 申请内存 拷贝数据 释放内存



```c++
#ifndef DYNAMIC_ARRAY_H //防止头文件被重复包含
#define DYNAMIC_ARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//创建动态数组结构体
typedef struct DYNAMICARRAY { // typedef 不多余
  int *pAddr;                 // 数据存放地址
  int size;                   // 当前有多少个元素
  int capacity;               //容量，容器当前能容纳多少元素
} Dynamic_Array;              // 第三种方法创建结构体
//写一系列相关的对 DYNAMICARRAY 结构体操作的函数；
// 1、初始化结构体，不需要任何参数，创建过后，Dynamic_Array指向DYNAMICARRAY内存空间
Dynamic_Array *Init_Array(); // 很重要，调用的时候要写到函数中的
// 2、插入
void PushBack_Array(Dynamic_Array *arr, int value); // PushBack 这么写好看
// 3、删除 情况：根据值删除和根据位置删除
void RemoveByPos_Array(Dynamic_Array *arr, int pos);
void RemoveByValue_Array(Dynamic_Array *arr, int value);

// 4、查找 int类型
int Find_Array(Dynamic_Array *arr, int value);
// 5、 打印
void Print_Array(Dynamic_Array *arr);
// 6、 释放动态数组的内存
void FreeSpace_Array(Dynamic_Array *arr); //释放内存地址
//再有新的功能可以继续增加
// 7、 清空数组
void Clear_Array(Dynamic_Array *arr);
// 8、获得动态数组容量
int Capacity_Array(Dynamic_Array *arr);
// 9、 获得动态数组当前元素个数
int Size_Array(Dynamic_Array *arr);
//根据位置获得某个位置元素
int At_Array(Dynamic_Array *arr, int pos);
#endif
```

- `typedef`并不多余，在写一系列相关的对 DYNAMICARRAY 结构体操作的函数时候如果没这个定义函数，则报错 Unknown typename'Dynamic_Array'
- `capacity` 表示当前内存空间一共可以存放多少元素
- `size` 记录当前数组中的具体元素个数
- 再有新的功能可以继续增加
- 头文件三件套，防止头文件被重复包含:


    ```c++
    #ifndef XXX
    #define XXX
    /*Codes*/
    #endif
    ```
## 2 写声明 `DynamicArray.cpp`


把头文件复制粘贴过来，用花括号把每个函数先打开


1. 引入头文件`"DynamicArray.h"`
2. 把花括号都加上
   - 需要初始化的先`retrun NULL;`
   - 需要输出值的先`return 0;`
   - > 最后编写完成运行前要认真检查所有`return`最后的返回值是否合理


```c++
#include "DynamicArray.h" // 把对应头文件引入进来

Dynamic_Array *Init_Array() { //初始化，需要默认返回NULL
  return NULL;
}

// 2、插入
void PushBack_Array(Dynamic_Array *arr, int value){

};
// 3、删除 情况：根据值删除和根据位置删除
void RemoveByPos_Array(Dynamic_Array *arr, int pos){

};
void RemoveByValue_Array(Dynamic_Array *arr, int value){

};

// 4、查找 int类型
int Find_Array(Dynamic_Array *arr, int value) {
  return 0; //需要写默认值返回0
};
// 5、 打印
void Print_Array(Dynamic_Array *arr){

};
// 6、 释放动态数组的内存
void FreeSpace_Array(Dynamic_Array *arr){

};

//再有新的功能可以继续增加
// 7、 清空数组
void Clear_Array(Dynamic_Array *arr){

};
// 8、获得动态数组容量
int Capacity_Array(Dynamic_Array *arr) {
  return 0; //需要写默认值返回0
};
// 9、 获得动态数组当前元素个数
int Size_Array(Dynamic_Array *arr) {
  return 0; //需要写默认值返回0
};
// 10、根据位置获得某个元素位置
int At_Array(Dynamic_Array *arr, int pos) {
  return arr->pAddr[pos]; //一开始需要写默认值返回0
  //此处不用再判断报错，如果返回值无效直接越界
};

```

### 壳已经写完了，下面开始写函数的实现，先从简单的 5-10 开始写


```c++
// 5、 打印
void Print_Array(Dynamic_Array *arr) {
  for (int i = 0; i < arr->size; i++) {
    printf("%d ", arr->pAddr[i]);
  }
  printf("\n");
};
// 6、 释放动态数组的内存
void FreeSpace_Array(Dynamic_Array *arr) { //先释放内部内存，再释放                                                                                                                                                                外面的
  if (arr == NULL) {                       //首先判断是否指针为空
    return;
  }
  if (arr->pAddr != NULL) {
    free(arr->pAddr);
  }
  free(arr);
};

//再有新的功能可以继续增加
// 7、 清空数组
void Clear_Array(Dynamic_Array *arr) {
  if (arr == NULL) { //首先判断是否指针为空
    return;
  }
  // pAddr -> 空间
  arr->size = 0; //直接等于0即可清空
};
// 8、获得动态数组容量
int Capacity_Array(Dynamic_Array *arr) {
  if (arr->capacity == 0) { //首先判断是否指针为空
    return 0;
  }
  return arr->capacity; //一开始需要写默认值返回0
};
// 9、 获得动态数组当前元素个数
int Size_Array(Dynamic_Array *arr) {
  if (arr == NULL) {
    return 0;
  } //需要写默认值返回0
  return arr->size;
};
// 10、根据位置获得某个元素位置
int At_Array(Dynamic_Array *arr, int pos) {
  if (arr == NULL) {
    return 0;
  }
  return arr->pAddr[pos]; //一开始需要写默认值返回0
};


```

每次都要判断一下当前线性表是否为`NULL`或者`data`值是否为零：

```c++
 if (arr == NULL) {
    return 0;
  } //需要写默认值返回0
  //或者：
  if (arr->capacity == 0) { //首先判断是否指针为空
    return 0;
  }

```

## 下面写增删改查


### 插入


```c++

// 2、插入
void PushBack_Array(Dynamic_Array *arr, int value) {
  if (arr == NULL) { //首先判断是否指针为空
    return;
  }
  //判断空间是否足够
  if (arr->size == arr->capacity) { //判断是否空间已经满了
                                    //第一步 申请一块更大的空间
    int *newSpace = (int *)malloc(sizeof(int) * arr->capacity *
                                  2); //默认新空间是旧空间的两倍
    //第二步 拷贝数据到新的空间
    // memcpy(),目标空间，原空间，空间大小为新的空间大小，注意乘以sizeof
    memcpy(newSpace, arr->pAddr, arr->capacity * sizeof(int));
    //第三步，释放旧空间的内存
    free(arr->pAddr);
    //第四步 更新容量和指针指向
    arr->capacity = arr->capacity * 2;
    arr->pAddr = newSpace; //内存指向新空间，至此新空间开辟完成
  }
  //插入新元素 从尾部插入
  arr->pAddr[arr->size] = value; //最后一位就是pos[arr->size],赋值value
  arr->size++;                   //记得要累加这个size
};
```

- 内置函数`memcpy()`,目标空间，原空间，空间大小为新的空间大小，注意乘以 sizeof
- `int *newSpace = (int *)malloc(sizeof(int) * arr->capacity *2);` //默认新空间是旧空间的两倍
- 增加一个元素，每次都要 size++


### 删除


情况：根据位置删除和根据值删除


- 关于位置删除算法：
  - 比如一列数组：`{1,2,3,4,5,6,7,8,9,10}`
  - 我删除了第 7 个元素，然后后面的 8、9、10 往前移


```c++
// 3、删除 情况：根据位置删除和根据值删除
// 3.1、根据位置删除
void RemoveByPos_Array(Dynamic_Array *arr, int pos) {
  if (arr == NULL) { //首先判断是否指针为空
    return;
  }
  //其次判断位置是否有效
  if (pos < 0 || pos >= arr->size) {
    return;
  }
  //删除元素的指令
  for (int i = pos; i < arr->size - 1; i++) {
    arr->pAddr[i] = arr->pAddr[i + 1]; //向前覆盖了
  }
  arr->size--; //往前缩进一位
};

```

根据值删除，首先还是先找到位置，然后嵌套根据位置删除

- 但是这是删除的`value`第一次出现的那个位置上的值




### 查找


这里其实是复制了上面的查找过程，其实可以变换一下


> 所以这个编程问题:

- 我们可以先解决查找的函数
- 按顺序调用查找函数解决按位置删除
- 调用查找和按位置删除去写按照数值删除


所以我们改变一下顺序，把查找代码和删除代码放在一起输出：


```c++
// 4、查找 int类型
int Find_Array(Dynamic_Array *arr, int value) {
  if (arr == NULL) {
    return -1; //返回-1说明出错
  }
  //找到值的位置
  int pos = -1; //初始化位置值为-1防止误操作
  for (int i = 0; i < arr->size; i++) {
    if (arr->pAddr[i] == value) {
      pos = i; //找到了这个位置，赋值给pos
      break;   //停止查找了
    }
  }
  return pos;
};

// 3、删除 情况：根据位置删除和根据值删除
// 3.1、根据位置删除
void RemoveByPos_Array(Dynamic_Array *arr, int pos) {
  if (arr == NULL) { //首先判断是否指针为空
    return;
  }
  //其次判断位置是否有效
  if (pos < 0 || pos >= arr->size) {
    return;
  }
  //删除元素的指令
  for (int i = pos; i < arr->size - 1; i++) {
    arr->pAddr[i] = arr->pAddr[i + 1]; //向前覆盖了
  }
  arr->size--; //往前缩进一位
};
// 3.2、 根据值删除
// 注意；这只是删除的value第一次出现的那个位置上的值
void RemoveByValue_Array(Dynamic_Array *arr, int value) {
  if (arr == NULL) {
    return;
  }

  int pos = Find_Array(arr, value); //嵌套上面的查找函数
  //嵌套根据位置删除
  RemoveByPos_Array(arr, pos); //嵌套上面的按照位置删除
};

```

注意这两次嵌套：

```c++
  int pos = Find_Array(arr, value); //嵌套上面的查找函数
  //嵌套根据位置删除
  RemoveByPos_Array(arr, pos); //嵌套上面的按照位置删除
```
这种优化代码的思想要有。








## 小结




> 1. 我们整个数组的搭建，都是在**维护**最初定义的结构体：

```c++
typedef struct DYNAMICARRAY { 
  int *pAddr;                 // 数据存放地址
  int size;                   // 当前有多少个元素
  int capacity;               //容量，容器当前能容纳多少元素
} Dynamic_Array;              // 第三种方法创建结构体
```
> 我们在写函数的时候都是在围绕结构体增加各种操作
>
> 优化代码的思想：嵌套函数结构体，但是要按照实际情况去考虑


# DSA-1-2 线性表链式存储 链表
















- 单向链表
- 企业链表
- 循环链表
  - 约瑟夫问题


# 单向链表


链表由一系列节点组成，每个节点包括指针域和数据域




这个链表创建过后，要好好跟 DSA-1 动态数组框架搭建比较一下来看，有料。


## 1 创建头文件



```c++
#ifndef LINKLIST_H
#define LINKLIST_H 

#include <stdio.h>
#include <stdlib.h>

//链表结点
typedef struct LINKNODE {
  void *data; //数据域 void*为无类型指针，指向任何类型的数据
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



- 创建链表结构体：**结点结构体、链表结构体**
- 先创建了结点，然后才是链表结构体，定义结构体的时候需要结点
  1. 结点结构体`LINKNODE`，先定义了数据域`void *data`，然后是指针域`LINKNODE *next`
     - 链表结构中上一个结点的指针域`LINKNODE *next`指向下一个结点数据域首地址，`void*`为无类型指针，**可以指向任何类型的数据**
     - 然后定义了指针域`LINKNODE *next`，自己嵌套自己，起到连接下一个结点的作用
  2. 链表结构体`LINKLIST`
     - 先定义了头结点`LINKNODE *head`,起到连接链表的作用
     - 定义元素个数`int size`，并且不需要容量，因为没有容量的概念。记录链表操作的增删改查
  3. 打印回调函数结构体指针包括后来的比较函数指针都是针对后来人复用后人代码提供的


## 2 框架实现 LinkList.cpp


- 确保不报错，先把需要`return NULL和0`的补上
- 初始化，开辟内存空间，初始化结构体的各种参数
  > 框架代码比较复杂，一步一步来分开写





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


### 初始化 打印函数 指针？


```c++
//初始化打印函数指针
typedef void (*PRINTLINKNODE)(void *);

```

就这一行代码，先完成初始化打印函数指针


## 指定位置插入数据


![img](./DSA-1-2-1%20%E5%8D%95%E5%90%91%E9%93%BE%E8%A1%A8/DSA-1-2.png)


单向链表的结点插入


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
  pCurrent->next = newnode;8
  list->size++; //链表大小+1
};

```

这里把新加入的结点插进来是个难点：


1. 创建辅助指针变量`pCurrent` 为了不影响链表本身结构
2. 使用 for 循环，让辅助变量指针往前滑动，直到跑到 pos-1 的位置，此时 pCurrent 就位，他的 next 指针就指向 pos 位置的 data 数据域内存首地址
   - size--，是不是可以反过来滑动？
3. 插入结点：创建新的结点`newnode`，创建之初它的 next 指针为`NULL`，先把已经就位的`pCurrent->next`指针赋给 newnode 的 next 指针，然后让`pCurrent->next`重新指向 newnode 的数据域内存首地址
4. 不要忘了`size++`



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


打印的时候，先打印`p5`，最后是`p1`






## 删除指定位置的值


> 链表中，删除操作的实质是**挤掉**这个位置的结点，后面的跟上





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

这还是一个辅助内存变量 pDel 找内存地址的故事:


1. `LinkNode *pDel = pCurrent->next;`先让 pos-1 的当前结点指针域指向需要删除的结点 pDel，这里就是把 pos 位置上的结点，命名成为 pDel 准备删除
2. `pCurrent->next = pDell->next;` pDell->next 指向的是下下一个结点，此处让 pos-1 的 pCurrent 结点继承了 pDell 的指针域，pDell 结点就被**挤出来了**。
3. 释放 pDell 内存空间


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

- 注意这个`while`可以起到循环滑动辅助指针变量`pCurrent`的效果：

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

> 但是这里运行的时候报错：retName: �n Age: 0 Score: 0


next 是个指针，从这个错误你可以看到指针不保存数据信息。


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

- 要配合`main`入口函数中的`MyPrint`使用，此处是为了确定好数据类型，然后遍历，为打印提供必要的支持


## 释放链表内存


- 因为结点的特性，不能直接删除当前节点，而是要缓存下一个节点以后，再删除当前节点
- 使用`while` 外加`pCurrent = pNext; 循环`，直到`pNext==NULL`
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


```c++
// #define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//自定义数据类型
typedef struct PERSON {
  char name[64]; //这种写法挺sql的，或者，就是因为C++才sql
  int age;
  int score;
} Person;
//打印函数
void MyPrint(void *data) {
  Person *p = (Person *)data;
  printf("Name: %s Age: %d  Score: %d \n", p->name, p->age, p->score);
}

int main(void) {
  printf("测试单向链表\n");
  // 创建链表
  LinkList *list = Init_LinkList(); //初始化链表
  //创建数据
  Person p1 = {"aaa", 19, 99};
  Person p2 = {"bbb", 14, 34};
  Person p3 = {"ccc", 13, 56};
  Person p4 = {"ddd", 19, 86};
  Person p5 = {"eee", 29, 19};
  //数据插入链表,这里的插入真是插入啊
  Insert_LinkList(list, 0, &p1);
  Insert_LinkList(list, 0, &p2);
  Insert_LinkList(list, 0, &p3);
  Insert_LinkList(list, 0, &p4);
  Insert_LinkList(list, 0, &p5); // 打印顺序：p5-p1
                                 //
  Print_LinkList(list, MyPrint); //打印
  //打印链表长度
  int lkSize = Size_LinkList(list);
  printf("链表长度 %d\n", lkSize);
  // 查找
  int posP2 = Find_linkList(list, &p2);
  printf("p2 的位置 %d\n", posP2);
  // 删除 2
  RemoveByPos_LinkList(list, 3);
  printf("------删除 3(p4)------\n");
  Print_LinkList(list, MyPrint); //打印
  //返回第一个结点
  printf("----返回第一个结点----\n");
  Person *ret = (Person *)Front_LinkList(list);
  MyPrint(ret);
  // printf("retName: %s Age: %d  Score: %d \n", ret->name, ret->age,
  // ret->score);  //一样的效果，有点啰嗦
  //销毁链表
  FreeSpace_LinkList(list);
}
```





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

- 打印函数`MyPrint`确定了，我要打印的是 Person 类型的数据，所以要把数据类型转换成 Person 类型
- 打印链表结点`Print_LinkList`确定了怎么去遍历这个结点
- 结构体`typedef void (*PRINTLINKNODE)(void *);`帮助计算机知道什么是结点类型是我们要打印的结点。
  - 不好，在理解一下
- 三者配合，实现了链表结点的打印。
- 由于插入顺序都是从第 0 位插入，打印顺序和压入顺序相反。








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


## 创建企业链表头文件


```c++
#ifndef LINKLIST_H
#define LINKLIST_H

//链表小结点
typedef struct LINKNODE {
  struct LINKNODE *next;
} LinkNode;
//链表结构体
typedef struct LINKLIST {
  LinkNode head; //内存首地址
  int size;
} LinkList;
//遍历函数指针函数指针(打印企业链表结点指针)
typedef void (*PRINTNODE)(LinkNode *); // 与单向链表不同，这也是企业链表的特点
//比较函数指针
typedef int (*COMPARENODE)(LinkNode *, LinkNode *); //单向链表没有
//结构体定义完成

//初始化链表
LinkList *Init_LinkList();
/*插入
和之前的单向链表不同了，插入的不是void*data，而是LinkNode* data */
void Insert_LinkList(LinkList *list, int pos, LinkNode *data);
//删除
void Remove_LinkList(LinkList *list, int pos);
//查找
int Find_LinkList(LinkList *list, LinkNode *data, COMPARENODE compare);
//返回链表大小
int Size_LinkList(LinkList *list);
//打印， print是main函数里面的打印函数MyPrint
void Print_LinkList(LinkList *list, PRINTNODE print);
//释放链表内存
void FreeSpace_LinkList(LinkList *list);
#endif


```

为了定义链表结构体，首先要定义链表小结点结构体


- 链表小结点里面只有`LINKNODE *next`指针，没有数据域结点**,LinkNode\*只能访问到 next 的指针域，这里可以看出来企业链表的晾衣绳结构,一整个企业链表就串联起来了**


链表结构体一样，到这里算是晾衣服只定义了晾衣绳和衣撑，接下来关注数据作为衣服怎么挂上去:




定义了两个函数指针，后面再讲


初始化以及各个功能接口，下面开始：


## 框架实现 LinkList.cpp 文件



### 初始化企业链表


```c++
LinkList *Init_LinkList() {
  LinkList *list = (LinkList *)malloc(sizeof(LinkList));
  list->head.next = NULL;
  list->size = 0;
  return list; //返回列表，初始化名为list的企业链表完成
};
```



### 关于功能函数和单向链表的区别主要在于`void *data` 和`LinkNode *data`


单向链表操作的时候是指针和数据一起操作，到了企业链表，主要操作的是指针，链表小结点就没有 data


- 每个结点的首地址，就是指针的地址
  - ### ？？ 是不是，意味着也是企业链表数据域的首地址？
  - 所以操作企业链表就是在初始化晾衣绳以后一直在操作衣服撑子？？？
  - 测试一下打印结点首地址什么概念


### 插入结点

```c++
void Insert_LinkList(LinkList *list, int pos, LinkNode *data) {
/*
........
防呆判断都一样
*/
  //从头插入辅助变量指针位置
  LinkNode *pCurrent = &(list->head); // list->head是一个实体，所以用取地址操作
  for (int i = 0; i < pos; i++) {
    pCurrent = pCurrent->next; // 循环走到pos-1位置
  }                            //此时pCurrent 位于pos前一个节点
  //插入新节点，已经找到位置pCurrent (pos - 1)
  data->next = pCurrent->next;
  pCurrent->next = data;
  list->size++; // 没有创建newnode
};

```
对于企业链表：

- 辅助变量指针位置从头开始，取地址用&(list->head)
- 操作的是 LinkNode \*data`链表小结点，LinkNode 只能访问到指针域


实际插入：

```c++
 Insert_LinkList(list, 0, (LinkNode *)&p1);
  //插入姿势相当不同,LinkNode*只能访问到next的指针域，这里可以看出来企业链表的晾衣绳结构,一整个企业链表就串联起来了
  Insert_LinkList(list, 0, (LinkNode *)&p2);
  Insert_LinkList(list, 0, (LinkNode *)&p3);
  Insert_LinkList(list, 0, (LinkNode *)&p4);
  Insert_LinkList(list, 0, (LinkNode *)&p5);

```


### 删除结点


和单向链表不同，不用创建`pDel`辅助指针变量并 free，企业链表直接把 pos 结点挤出来了，`pCurrent`滑动到 pos-1 位置后，指针直接链条包两次指向 pos+1


```c++
void Remove_LinkList(LinkList *list, int pos) {
/*......略....*/
  //删除节点：还是一根晾衣绳，直接把pos衣服取下来：
  pCurrent->next = pCurrent->next->next; //跳跃两次，指针pos-1直接指向pos+1
  list->size--;
};

```

### 查找


你在找什么，你在找那个结点，但是 LinkNode 只能访问到指针域，下面挂的数据怎么弄？


至此，我们引入**比较函数指针**


### 比较函数指针


```c++
typedef int (*COMPARENODE)(LinkNode *, LinkNode *);
```

你在比较什么？

- 比较指针域下挂着的数据是否完全一样，如果完全和我们要找的哪个数据结点一样，我们返回这个结点位置 int pos；
- 具体见下文输出函数的**比较回调函数**


```c++
int Find_LinkList(LinkList *list, LinkNode *data, COMPARENODE compare) {
/*...防呆比较...*/
  //创建辅助指针变量便利查找，头节点不看，直接next
  LinkNode *pCurrent = list->head.next;
  int index = 0; //初始化索引为0
  int flag = -4;
  while (pCurrent != NULL) {
    //查找功能什么时候找到呢：需要做一个判断，引入比较函数指针
    if (compare(pCurrent, data) == 0) {//引入比较回调函数，见下文
      flag = index;
      break;
    }
    pCurrent = pCurrent->next;
    index++;
  }
  return index; //找到了就返回index的值，找不到就返回-4
};

```

后面的几个函数见代码


## 输出函数`main.cpp`




- 创建 Person 结构体，相同
- 打印回调函数，相同


### 比较回调函数


```c++
int MyCompare(LinkNode *node1, LinkNode *node2) {
  Person *p1 = (Person *)node1;
  Person *p2 = (Person *)node2;
  if (strcmp(p1->name, p2->name) == 0 && (p1->age == p2->age) == 0) {
    return 0; // strcmp比较函数返回0 说明结点完全相同
  }
  return 1; //返回1 说明不完全相同
}
```









比较回调函数首次出现，按照企业链表的结构，小结点里面只定义了指针域，所以需要再定义比较函数指针来引导框架函数去访问指针域下面挂着的数据，对本例，我们看到了


```c++
 Person *p = (Person *)node;
```

结构，是为了把链表小结点`LinkNode`结构转换为`Person`结构，下面 if 语句来比较转换为 Person 结构以后的数据是否完全相同。








### 注意点


- 如何找到位置：


1. 创建辅助指针变量`pCurrent`:

- for 循环遍历到`pos`前一个位置：`pos - 1`:


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

- 使用 while 外加 pCurrent = pNext; 循环，直到 pNext 为 NULL


- 当你修改了 h 或者同名 cpp 代码后，切记同步你的函数格式。




















## 你出错的问题：


1. 仔细检查每一个`return`到底输出了什么



# 循环链表


















##


### 插入


- 和单向链表插入一样




### 删除 根据值删除


- 和单向链表一样


```c++
CircleLinkNode *pPrev = &(clist->head); //定义被删除结点的前一个结点
CircleLinkNode *pCurrent = clist->head.next; //判断的是值，从next开始
```



#### 关于根据值删除


- 根据值删除，根据什么值——用户定义的值
- 程序员一开始不知道用户想要删除的到底是什么值，所以需要写一个回调函数来对比**用户想要删除的值，是否他之前定义的值一样，所以就有了比较回调函数**



### 回调函数


```c++
typedef int(*COMPARENODE)(CircleLinkNode *,
                         CircleLinkNode *); 
// ###注意下面的同步。你对比的是什么？
//打印回调函数
typedef void (*PRINTNODE)(CircleLinkNode *);
```

- 根据值查找、删除都用到了回调函数，所以，你在 compare 什么？
  - 程序员不知道用户到底传了什么值进来，需要一个回调函数来对比是否符合用户自定义的数据结构下的数据要求
- 引用\*写在 COMPARENODE 前面
- 开发库的时候，有些情况我们考虑不到，数据类型是后来的人传进来的，所以我们要用这个回调函数











# 循环链表应用——约瑟夫问题




















头文件和同名 cpp 文件都引用了循环链表的文件，重点在于你怎么设计约瑟夫叫号：


- 一共 M 个人，叫到第 N 个的时候从头报数并删除这个人，继续循环，直到只剩一个人为止
- 循环到什么时候：只剩一个人
- 防呆设计


## main 函数


### 初始定义


```c++
//引入标准库 略
//引入头文件 
#include "CircleLinkList.h"
//定义人数和指定数
#define M 8 //总人数
#define N 3 //指定每次喊到第N个从头开始报数

```
定义了 M 和 N，这种方法要知道


### 用户自定义板块：结构体、回调函数


```c++
//创建数组结构体
typedef struct MYNUM {
  CircleLinkNode node;
  int val;
} MyNum;
//创建打印回调函数
void MyPrint(CircleLinkNode *data) { //转换成为MyNum类型
  MyNum *num = (MyNum *)data;
  printf("%d ", num->val);
}
//创建比较回调函数用来检查是否是能够传入的数据
int MyCompare(CircleLinkNode *node1, CircleLinkNode *node2) {
  MyNum *num1 = (MyNum *)node1;
  MyNum *num2 = (MyNum *)node2;
  if (num1->val == num2->val) {
    return CIRCLELINKLIST_TRUE;
  }
  return CIRCLELINKLIST_FALSE;
}

```
定义结构体和回调函数，这个结构体是后来用户定义的，所以才有了相应的回调函数、打印函数，这些都是匹配用户的数据结构的


## 输出函数 main


这个输出函数是重点，体现了如何去循环查找第 N 个人，找到以后删除它，接着往下循环到只剩一个人。


```c++
int main() {
  //初始化循环链表
  CircleLinkList *clist = Init_CircleLInkList();
  //插入链表数据
  MyNum num[M];
  for (int i = 0; i < M; i++) {
    num[i].val = i + 1; //数组赋值1-8
    Insert_CircleLinkList(clist, i, (CircleLinkNode *)&num[i]); //插入循环链表中
  }
  //打印 测试一下循环链表是否赋值成功
  printf("循环链表如下：\n");
  Print_CircleLinkList(clist, MyPrint);
  printf("\n下面解决约瑟夫问题\n其中总人数为%d，指定叫到第%"
         "d人的时候从头开始报数\n",
         M, N);
  //以上测试完成，开始解决约瑟夫问题
  int index = 1; //记录目前是第几个人，从1开始
  CircleLinkNode *pCurrent = clist->head.next; //指针指向第一个人
  while (SIze_CircleLinkList(clist) > 1) {
    if (index == N) { //找到了第N个人，把这个人先输出：
      MyNum *tmpNum = (MyNum *)pCurrent;
      printf("%d ", tmpNum->val);
      // CircleLinkNode *pNext = pCurrent->next; //缓存待删除结点的下一个结点
      RemoveByValue_CircleLinkList(clist, pCurrent, MyCompare); //根据值删除
      pCurrent = pCurrent->next;        //指针继续向前走
      if (pCurrent == &(clist->head)) { //如果碰到了循环链表表头
        pCurrent = pCurrent->next;      //那就往下走指向第一个数
      }
      index = 1; //重置计数，从1开始
    }
    pCurrent = pCurrent->next;

    if (pCurrent == &(clist->head)) {
      pCurrent = pCurrent->next;
    }
    index++;
  }

  if (SIze_CircleLinkList(clist) == 1) {
    MyNum *tmpNum = (MyNum *)Front_CircleLinkList(clist);
    printf("%d ", tmpNum->val);
  } else {
    printf("出错\n");
  }
  printf("\n");

  //释放链表内存
  FreeSpace_CircleLinkList(clist);
}
```



## 栈的线性存储


- 用数组模拟的栈的线性存储
- 因为栈的特性不能直接遍历，无法打印


### 初始定义参数

```cpp
//定义参数
#define MAX_SIZE 1024   //设置数组最大容量
#define SEQSTACK_TRUE 1 //返回是否为空时调用
#define SEQSTACK_FALSE 0
```


### 定义结构体

```cpp
//定义结构体
typedef struct SEQSTACK {
  void *data[MAX_SIZE]; //任何类型的数组最大容量MAX_SIZE
  int size;
} SeqStack;

```


栈结构体里直接初始化了栈的最大容量，在同名 cpp 中，初始化栈如下：


```cpp
//初始化栈
SeqStack *Init_SeqStack() {
  SeqStack *stack = (SeqStack *)malloc(sizeof(SeqStack));
  for (int i = 0; i < MAX_SIZE; i++) {
    stack->data[i] = NULL; //初始化栈元素都为NULL
  }
  stack->size = 0;
  return stack;
};

```


### 入栈

```cpp
//入栈
void Push_SeqStack(SeqStack *stack, void *data) { //防呆预判
  if (stack == NULL) {
    return;
  }
  if (stack->size == MAX_SIZE) {
    return;
  }
  stack->data[stack->size] = data;
  stack->size++;
}

```


`stack->data[stack->size] = data;` 总是在最后一位添加，栈特性的体现，每次入栈，size 都+1


### 返回栈顶元素

```cpp
//返回栈顶元素
void *Top_SeqStack(SeqStack *stack) {
  if (stack == NULL) {
    return NULL;
  }
  if (stack->size == 0) { //是否为空的判断
    return NULL;
  }
  return stack->data[stack->size - 1]; //返回的是栈顶元素，最后那个元素
}
```


`void *Top_SeqStack(SeqStack *stack) `,标星：不定元素类型


### 出栈

```cpp
//出栈 删除栈顶：直接让栈顶元素等于NULL，又回到了初始化状态
void Pop_SeqStack(SeqStack *stack) {
  if (stack == NULL) {
    return;
  }
  if (stack->size == 0) { //是否为空的判断
    return;
  }

  stack->data[stack->size - 1] = NULL;
  stack->size--;
}

```

典型的`Nullify`,也体现了栈的容器性质，栈顶元素弹出了，但是容器还在


### 其他几个功能

```cpp
//返回栈中元素的个数
int Size_SeqStack(SeqStack *stack) { return stack->size; }
//清空栈
void Clear_SeqStack(SeqStack *stack) {
  if (stack == NULL) {
    return;
  }
  for (int i = 0; i < stack->size; i++) {
    stack->data[i] = NULL;
  }
  stack->size = 0; //想要清空，就要清空结构体内所有数据类型下的数据
}
//销毁 释放内存
void FreeSpace_SeqStack(SeqStack *stack) {
  if (stack == NULL) {
    return;
  }
  free(stack);
}

```


### 主程序

```cpp
typedef struct PERSON {
  char name[64];
  int age;
} Person;
```







```cpp
int main() {
  //创建栈
  SeqStack *stack = Init_SeqStack();
  //创建数据
  Person p1 = {"aaa",10,};
  Person p2 = {。。。。。。};

  //入栈
  Push_SeqStack(stack, &p1);
  Push_SeqStack(stack, &p2);
  Push_SeqStack(stack, &p3);
  Push_SeqStack(stack, &p4);
  Push_SeqStack(stack, &p5);
  //输出:包括访问并打印，弹出栈顶元素：因为栈的结构
  while (Size_SeqStack(stack) > 0) {
    //访问栈顶元素
    Person *person = (Person *)Top_SeqStack(stack);
    printf("姓名： %s。年龄：%d\n", person->name, person->age);
    //弹出栈顶元素
    Pop_SeqStack(stack);
  }
  //释放内存
  FreeSpace_SeqStack(stack);
  printf("\n");
  return 0;
}
```



## 栈的链式存储


- 还是链式结点那套结构，冠以了栈容器的性质
- 直接用的企业链表格式，结点没有数据域

### 初始化并创建栈的链式存储

```cpp
//链式栈结点 企业链表格式
typedef struct LINKNODE { //没有数据域
  struct LINKNODE *next;  //只有指针域
} LinkNode; //结点没有数据域

//链式栈
typedef struct LINKSTACK {
  LinkNode head; // 头结点
  int size;      // 元素个数
} LinkStack;
```

> 这里对结点的定义没有数据域，因为栈的容器性质，栈顶元素弹出了，但是容器还在

```cpp
//初始化函数
LinkStack *Init_LinkStack() {
  LinkStack *stack = (LinkStack *)malloc(sizeof(LinkStack));
  stack->head.next = NULL;
  stack->size = 0;
  return stack;
};
```

开内存

### main中的person结构体

```cpp

typedef struct PERSON { //创建PERSON结构体
  LinkNode node;        //企业链表，晾衣服
  char name[64];
  int age;
} Person;

```

### 入栈 压栈

```cpp
void Push_LinkStack(LinkStack *stack, LinkNode *data) {
  if (stack == NULL) {
    return;
  }
  if (data == NULL) {
    return;
  }
  data->next = stack->head.next;
  stack->head.next = data;
  stack->size++;
};
```



### 出栈 弹栈

```cpp
//出栈
void Pop_LinkStack(LinkStack *stack) {
  if (stack == NULL) {
    return;
  }
  if (stack->size == 0) {
    return;
  }
  //第一个有效结点
  LinkNode *pNext = stack->head.next; //指向第一个结点，而不是链栈首地址
  stack->head.next = pNext->next;
  stack->size--;
};

```

对比入出栈，首先都要把结点挂上新的位置，然后是大小加一或者减一

### 其他略



### 主程序

```cpp

int main() {

  //创建栈
  LinkStack *stack = Init_LinkStack();
  //创建数据
  Person p1, p2, p3, p4, p5;
  strcpy(p1.name, "aaa");
  strcpy(p2.name, "bbb");
  strcpy(p3.name, "ccc");
  strcpy(p4.name, "ddd");
  strcpy(p5.name, "eee");
  p1.age = 10;
  p2.age = 20;
  p3.age = 40;
  p4.age = 30;
  p5.age = 50;
  //入栈--压栈
  Push_LinkStack(stack, (LinkNode *)&p1); //需要加上(LinkNode*)转换
  Push_LinkStack(stack, (LinkNode *)&p2);
  Push_LinkStack(stack, (LinkNode *)&p3);
  Push_LinkStack(stack, (LinkNode *)&p4);
  Push_LinkStack(stack, (LinkNode *)&p5);
  //输出
  while (Size_LinkStack(stack) > 0) {
    //取出栈顶元素，并转换为Person的结构
    Person *p = (Person *)Top_LinkStack(stack);
    printf("姓名： %s，年龄： %d\n", p->name, p->age);
    //弹出栈顶元素,从而读取下一个元素
    Pop_LinkStack(stack);
  }
  //销毁栈
  FreeSpace_LinkStack(stack);
  printf("\n");
  return 0;
}



```



## 队列的线性存储


- 队列的顺序存储，从两端的哪端开始都行
- 先进先出
- 本例以左边做队头

### 定义参数结构体初始化队列

```cpp
//定义参数
#define MAX_SIZE 1024   //设置数组最大容量
#define SEQQUEUE_TRUE 1 //返回是否为空时调用
#define SEQQUEUE_FALSE 0
//定义顺序队列结构体
typedef struct SEQQUQUE {
  void *data[MAX_SIZE]; //无类型指针
  int size;
} SeqQueue;
```

- 初始化队列：

```cpp
//初始化队列
SeqQueue *Init_SeqQueue() {
  SeqQueue *queue = (SeqQueue *)malloc(sizeof(SeqQueue));
  for (int i = 0; i < MAX_SIZE; i++) {
    queue->data[i] = NULL; //初始化元素都为NULL
  }
  queue->size = 0;
  return queue;
};

```

- 运行函数中，定义了PERSON类

```cpp
typedef struct PERSON {
  char name[64];
  int age;
} Person;

```

### 入队列、返回头元素、出队列

```cpp
//入队列
void Push_SeqQueue(SeqQueue *queue, void *data) { //防呆预判
  if (queue == NULL) {
    return;
  }
  if (data == NULL) { // 数据也要判断
    return;
  }
  if (queue->size == MAX_SIZE) {
    return;
  }
  //例如 数组左边当队头，那么在尾部添加元素
  queue->data[queue->size] = data;
  queue->size++;
};
//返回队头元素
void *Front_SeqQueue(SeqQueue *queue) {
  if (queue == NULL) {
    return NULL;
  }
  if (queue->size == 0) {
    return NULL;
  }
  //数组左边当队头，data[0]为第一个元素
  return queue->data[0];
};

//出队操作 牢记队列先进先出的原则，队头元素先出：需要移动元素
void Pop_SeqQueue(SeqQueue *queue) {
  if (queue == NULL) {
    return;
  }
  if (queue->size == 0) {
    return;
  }
  for (int i = 0; i < queue->size - 1; i++) {
    queue->data[i] = queue->data[i + 1]; //前一位等于后一位的数值实现了移动元素
  }
  queue->size--;
};
//返回队尾元素
void *Back_SeqQueue(SeqQueue *queue) {
  if (queue == NULL) {
    return NULL;
  }
  if (queue->size == 0) {
    return NULL;
  }
  return queue->data[queue->size - 1]; //此处不要忘了减一
};
```

- 队列先进先出，此处是人为设置了`data[0]`为对头，`data[size-1]`为队尾

```cpp





## 栈的链式存储的应用 就近匹配



- 就近匹配 检测括号是否匹配
  - 使用的#include "LinkStack.h"链栈库
  - 扫描字符串，如果碰到左括号，直接入栈
  - 如果碰到右括号，从栈顶弹出扩号元素，判断是否是左括号
  - 如果是，匹配成功
  - 如果不是，匹配失败

```cpp
typedef struct MyChar {
  LinkNode node;
  char *pAddres;
  int index;
} Mychar;

int Isleft(char c) { return c == '('; }

int Isright(char c) { return c == ')'; }

MyChar *Createmychar(char *p, int index) {
  MyChar *mychar = (MyChar *)malloc(sizeof(MyChar));
  mychar->pAddres = p;
  mychar->index = index;
  return mychar;
}

void Showerror(char *str, int pos) {
  printf("%s\n", str);
  for (int i = 0; i < pos; i++) {
    printf(" ");
  }
  printf("A");

```

### 主程序

```cpp

int main() {

  //创建栈容器
  LinkStack *stack = Init_LinkStack();

  char *str = (char *)"sss1+3(sws)+asdfgsdfg((ss)"; //创造一个不匹配的左括号
  char *p = str;                                    //修改p不用修改str
  int index = 0;
  while (*p != '\0') {
    //如果是左括号直接进栈
    if (Isleft(*p)) {
      Push_LinkStack(stack, (LinkNode *)Createmychar(p, index));
    }
    //如果是右括号 从栈顶弹出元素 并判断是不是左括号
    if (Isright(*p)) {
      if (Size_LinkStack(stack) > 0) {

        MyChar *mychar = (MyChar *)Top_LinkStack(stack);
        if (Isleft(*(mychar->pAddres))) {
          Pop_LinkStack(stack);
          free(mychar);
        }
      } else {
        printf("右括号没有匹配左括号\n");
        Showerror(str, index);
        break;
      }
    }
    p++;
    index++;
  }

  while (Size_LinkStack(stack) > 0) {
    MyChar *mychar = (MyChar *)Top_LinkStack(stack);
    printf("左括号没有匹配右括号：\n");
    Showerror(str, mychar->index);
    Pop_LinkStack(stack);
    free(mychar);
  }

  printf("\n");
  return 0;
}
```
其中在自定义一串字符的时候：

```cpp
char *str = (char *)"sss1+3(sws)+asdfgsdfg((ss)"; //创造一个不匹配的左括号
  char *p = str;                                    //修改p不用修改str

```

`(char *)`写法是为了不报错，具体情况看这里：[C++ deprecated conversion from string constant to 'char*'](https://stackoverflow.com/questions/1524356/c-deprecated-conversion-from-string-constant-to-char)

- c++类型更严格一些：
    比如字符串字面量c是`char*`（但是你不能改，改了就爆炸，这算标准bug），c++就是`char const*`

## 逆波兰式

### 中缀转后缀表达式


### 根据后缀表达式计算




# 小结

## 关于那两个栈应用

- 很好，要细品，这是感悟 C/C++代码的一个角度
- 可以 main 里面函数写多了要注意解耦
- if 配合判断函数使用这就是场景的考虑
- 返回运算符号优先级：预先设定乘除是 2，加减是 1，括号我们认为是 0，这种比大小优先级很巧妙
  - 单纯形法中比较系数优先级、大 M 法。
- 一直要注意防呆预判
- 中缀转后缀表达式[不止栈可以实现](https://blog.csdn.net/lbcab/article/details/51603048)

## 关于强转类型






