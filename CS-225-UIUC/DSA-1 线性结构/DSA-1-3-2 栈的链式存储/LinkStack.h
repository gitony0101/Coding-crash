#ifndef LINKSTACK_H
#define LINKSTACK_H
/*栈的链式存储
还是链式结点那套结构，冠以了栈容器的性质
黑马直接用的企业链表格式，结点没有数据域
*/
#include <stdio.h>
#include <stdlib.h> // 再此引入标准库，你在同名cpp里面就不用再写了

//链式栈结点 企业链表格式
typedef struct LINKNODE { //没有数据域
  struct LINKNODE *next;  //只有指针域
} LinkNode; //这里对结点的定义没有数据域，因为栈的容器性质，栈顶元素弹出了，但是容器还在

//链式栈
typedef struct LINKSTACK {
  LinkNode head; // 头结点·
  int size;      // 元素个数
} LinkStack;

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

#endif
