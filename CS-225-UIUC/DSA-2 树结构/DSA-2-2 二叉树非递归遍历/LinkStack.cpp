// #define _CRT_SECURE_NO_WARNINGS
#include "LinkStack.h"
#include <cstddef>
/*
栈 & 二叉树结构体 & 递归遍历
*/

//初始化函数
LinkStack *Init_LinkStack() {
  LinkStack *stack = (LinkStack *)malloc(sizeof(LinkStack));
  stack->head.next = NULL;
  stack->size = 0;
  return stack;
};

//入栈
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
//返回栈顶元素
LinkNode *Top_LinkStack(LinkStack *stack) {
  if (stack == NULL) {
    return NULL;
  }
  if (stack->size == 0) {
    return 0;
  }
  return stack->head.next;
};
//返回栈顶元素个数
int Size_LinkStack(LinkStack *stack) {
  if (stack == NULL) {
    return -1;
  }
  return stack->size;
};
//清空栈
void Clear_LinkStack(LinkStack *stack) {
  if (stack == NULL) {
    return;
  }
  stack->head.next = NULL;
  stack->size = 0;
};
//销毁栈
void FreeSpace_LinkStack(LinkStack *stack) {
  if (stack == NULL) {
    return;
  }
  free(stack);
};
//引入二叉树的递归遍历
//先序递归遍历
void RecursionDLR(BinaryNode *root) { //从根开始遍历
  if (root == NULL) {
    return;
  }
  //先序遍历 根左右 先访问根结点
  printf("%c", root->ch);
  //再遍历左子树
  RecursionDLR(root->lchild);
  //再遍历右子树
  RecursionDLR(root->rchild);
} //从根开始，那么终止退出的的条件就是：某个根下面没有结点了，自然而然root==NULL
//中序递归遍历
void RecursionLDR(BinaryNode *root) { //从根开始遍历
  if (root == NULL) {
    return;
  }
  //先递归访问左子树
  RecursionLDR(root->lchild);
  //再访问根结点
  printf("%c", root->ch);
  //最后遍历右子树
  RecursionLDR(root->rchild);
}
//后序遍历 左右根
void RecursionLRD(BinaryNode *root) { //从根开始遍历
  if (root == NULL) {
    return;
  }
  //先递归访问左子树
  RecursionLRD(root->lchild);
  //再访问右子树
  RecursionLRD(root->rchild);
  //最后访问根结点
  printf("%c", root->ch);
}
