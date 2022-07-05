#include "SeqStack.h"
#include <stdio.h>
#include <stdlib.h>
//初始化栈
SeqStack *Init_SeqStack() {
  SeqStack *stack = (SeqStack *)malloc(sizeof(SeqStack));
  for (int i = 0; i < MAX_SIZE; i++) {
    stack->data[i] = NULL; //初始化栈元素都为NULL
  }
  stack->size = 0;
  return stack;
};
//入栈
void Push_SeqStack(SeqStack *stack, void *data) { return; }
//返回栈顶元素
void *Top_SeqStack(SeqStack *stack) { return NULL; }
//出栈 删除栈顶
void Pop_SeqStack(SeqStack *stack) { return; }
//判断是否为空 注意输出类型
int IsEmpty(SeqStack *stack) { return 0; }
//返回栈中元素的个数
int Size_SeqStack(SeqStack *stack) { return 0; }
//清空栈
void Clear_SeqStack(SeqStack *stack) { return; }
//销毁 释放内存
void FreeSpace_SeqStack(SeqStack *stack) { return; }
