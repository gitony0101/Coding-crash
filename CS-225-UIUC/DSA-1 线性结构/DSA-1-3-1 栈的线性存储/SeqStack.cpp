#include "SeqStack.h"
#include <cstddef>
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
void Push_SeqStack(SeqStack *stack, void *data) { //防呆预判
  if (stack == NULL) {
    return;
  }
  if (stack->size == MAX_SIZE) {
    return;
  }
  stack->data[stack->size] = data; //总是在最后一位添加，栈特性的体现
  stack->size++;
}
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
//判断是否为空 注意输出类型
int IsEmpty(SeqStack *stack) {
  if (stack == NULL) {
    return -1;
  }
  if (stack->size == 0) { //是否为空的判断
    return SEQSTACK_TRUE; //是的，判断对了，就是空的
  }
  return SEQSTACK_FALSE; //不是，非空
}
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
