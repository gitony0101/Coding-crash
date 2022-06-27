# 循环链表

















## 删除 根据值删除

```cpp
CircleLinkNode *pPrev = &(clist->head); //定义被删除结点的前一个结点
CircleLinkNode *pCurrent = clist->head.next; //判断的是值，从next开始
```



### 回调函数

```cpp
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


```plaintext

```





# 小结

## 你出错的问题：

1. 头文件同名cpp文件框架写好以后，请注意检查return：

```cpp
//初始化循环链表
CircleLinkList *Init_CircleLInkList() {
  CircleLinkList *clist = (CircleLinkList *)malloc(sizeof(CircleLinkList));
  clist->head.next = &(clist->head); // 循环链表初始化，让它指向自己
  clist->size = 0;
  return;
};
```

你最后忘记了给return赋值，这样不会报错，但是传出来的是空值。
