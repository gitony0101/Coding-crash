#ifndef LINKSTACK_H
#define LINKSTACK_H
/*
栈 & 二叉树结构体 & 递归遍历
*/
#include <stdio.h>
#include <stdlib.h> // 再此引入标准库，你在同名cpp里面就不用再写了

//链式栈结点 企业链表格式
typedef struct LINKNODE { //没有数据域
  struct LINKNODE *next;  //只有指针域
} LinkNode; //但是 LinkNode *data，其实这个next是个壳，指针指向哪里？？
//链式栈
typedef struct LINKSTACK {
  LinkNode head; // 头结点
  int size;      // 元素个数
} LinkStack;

typedef struct BINARYNODE { //二叉链表示法
  char ch; //把图里面A～H字符表示出来，这就是数据域
  struct BINARYNODE *lchild; //左结点
  struct BINARYNODE *rchild; //又结点
} BinaryNode;
//初始化函数
LinkStack *Init_LinkStack();

//入栈
void Push_LinkStack(LinkStack *stack, LinkNode *data);
//出栈
void Pop_LinkStack(LinkStack *stack);
//返回栈顶元素
LinkNode *Top_LinkStack(LinkStack *stack);
//返回栈顶元素个数
int Size_LinkStack(LinkStack *stack);
//清空栈
void Clear_LinkStack(LinkStack *stack);
//销毁栈
void FreeSpace_LinkStack(LinkStack *stack);
//定义二叉树递归遍历
void RecursionDLR(BinaryNode *root);
void RecursionLDR(BinaryNode *root);
void RecursionLRD(BinaryNode *root);

#endif
