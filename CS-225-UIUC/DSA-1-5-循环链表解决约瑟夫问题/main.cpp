//引入标准库
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
使用循环链表解决约瑟夫问题
思想：一个人从1依次喊一个数，喊到指定数时，该人退出队伍，下一个人重新从1开始喊。
*/
//引入头文件
#include "CircleLinkList.h"
//定义人数和指定数
#define M 8 //总人数
#define N 3 //指定每次喊到第N个从头开始报数

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
  Print_CircleLinkList(clist, MyPrint);
  printf("\n");
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
