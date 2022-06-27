#ifndef CIRCLELINKLIST
#define CIRCLELINKLIST
//引入标准库
#include <cstddef>
#include <stdio.h>
#include <stdlib.h>

//定义循环链表小结点
typedef struct CIRCLELINKNODE {
  struct CIRCLELINKNODE *next;
} CircleLinkNode;
//链表结构体
typedef struct CIRCLELINKLIST {
  CircleLinkNode head; //头指针
  int size;            //链表大小
} CircleLinkList;
//自定义类型（结构体）创建完毕

//创建需要的回调函数
//比较回调函数
typedef int (*COMPARENODE)(CircleLinkNode *,
                           CircleLinkNode *); //
// 这里是C的写法，返回int01，C++可以bool，引用*在前
// ###注意下面的同步。你对比的是什么？
//打印回调函数
typedef void (*PRINTNODE)(CircleLinkNode *);
//创建回调函数完毕

//针对C定义的宏 看看注释掉行不行
#define CIRCLELINKLIST_TRUE 1
#define CIRCLELINKLIST_FALSE 0
//

//编写针对链表结构体操作的API函数
//初始化循环链表
CircleLinkList *Init_CircleLInkList();
//插入
void Insert_CircleLinkList(CircleLinkList *clist, int pos,
                           CircleLinkNode *data);
//获得第一个元素 返回的是已经定义好结构体的CircleLinkNode数据类型
CircleLinkNode *Front_CircleLinkList(CircleLinkList *clist);
//删除 根据位置删除
void RemoveByPos_CircleLinkList(CircleLinkList *clist, int pos,
                                CircleLinkNode *data);
//删除 根据值删除
//把值传进来删除就行了，剩下的事情交给用户去处理，所以这里需要再写一个调用函数
void RemoveByValue_CircleLinkList(CircleLinkList *clist, CircleLinkNode *data,
                                  COMPARENODE compare);
//获得链表的长度 int
int SIze_CircleLinkList(CircleLinkList *clist);
//判断
int IsEmpty_CircleLinkList(CircleLinkList *clist);
//查找 根据值去查找
int Find_CircleLinkList(CircleLinkList *clist, CircleLinkNode *data,
                        COMPARENODE compare); // 有意思,还用了比较回调
//打印结点
void Print_CircleLinkList(CircleLinkList *clist, PRINTNODE print);
//释放内存 释放我们自己申请的内存
void FreeSpace_CircleLinkList(CircleLinkList *clist);

#endif
