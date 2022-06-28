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
