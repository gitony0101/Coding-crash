# 企业链表

- 企业里经常用，写完之后很爽？？
- 内核链表的改进版
- 访问权限考虑
- 首地址间的偏移量







### 比较函数指针









# 小结

## 与单向链表的对比：

1. 链表结点结构体

-单向链表
```cpp
typedef struct LINKNODE {
  void *data; //数据域
              // void*为无类型指针，指向任何类型的数据
  struct LINKNODE *next; //指针域
} LinkNode;

```
- 企业链表

```cpp
//链表小结点
typedef struct LINKNODE {
  struct LINKNODE *next;
} LinkNode;
```

可见企业链表小结点里面不包括数据域，只包括指针域。
对比两个链表图



2.打印链表结点指针结构体

- 单向链表
```cpp
//打印函数指针
typedef void (*PRINTLINKNODE)(void *);

```

- 企业链表
```cpp
//打印企业链表结点指针
typedef void (*PRINTNODE)(LinkNode *); // 与单向链表不同，这也是企业链表的特点

```


3. 插入新结点

- 单向链表，需要创建newnode

```cpp
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

```cpp

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

```cpp
  LinkNode *pCurrent = &(list->head); // list->head是一个实体，所以用取地址操作
  for (int i = 0; i < pos; i++) {
    pCurrent = pCurrent->next; // 循环走到pos-1位置
  }                            //此时pCurrent 位于pos前一个节点


```
   
  - `while i++` 循环遍历到需要查找的数值
  ```cpp
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
### 当你修改了h或者同名cpp代码后

切记同步你的函数格式。



```c++

```
