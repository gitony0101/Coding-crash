// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include "LinkStack.h" //引入已经修改过的链栈头文件
#define MY_FALSE 0 // 定义显示状态，如果为FALSE，设置为0，并且不被打印
#define MY_TRUE 1 //定义显示状态，如果为TRUE，设置为1
/*二叉树的非递归遍历 Binary Tree Traversal without Recursion
结合栈应用，模拟三种遍历方法
       A
     /   \
    B     F
     \     \
      C     G
     / \    /
    D  E   H
*/
//定义栈中结点的结构体
typedef struct BITREESTACKNODE { //用企业链表
  LinkNode node;
  BinaryNode *root;
  int flag; // MY_TRUE/FALSE 01
} BiTreeStackNode;
//创建栈中结点 为了精简下面的函数增加可读性
BiTreeStackNode *CreateBiTreeStackNode(BinaryNode *node, int flag) {
  // flag提示01
  BiTreeStackNode *newnode = (BiTreeStackNode *)malloc(sizeof(BiTreeStackNode));
  newnode->root = node;
  newnode->flag = flag;
  return newnode;
}
//非递归先序遍历 DLR 压栈的时候反过来RLD
void NonRecursionDLR(BinaryNode *root) { //先序遍历！
  //创建栈
  LinkStack *stack = Init_LinkStack();
  //把根结点压入栈中 另外加入了(LinkNode *)强转 初始化状态为FALSE
  Push_LinkStack(stack, (LinkNode *)CreateBiTreeStackNode(root, MY_FALSE));
  while (Size_LinkStack(stack) > 0) { //先读取并弹出栈顶元素
    BiTreeStackNode *node = (BiTreeStackNode *)Top_LinkStack(stack);
    Pop_LinkStack(stack); //弹出
    if (node->root == NULL) { //判断判处的结点是否为空，如果为空跳过当前循环
      continue;
    }
    if (node->flag == MY_TRUE) {    //如果结点标记为TRUE，打印出来
      printf("%c", node->root->ch); //打印
    } else { //重要，这是本段代码的精要之处，else意味着这里
             //的flag为MY_FALSE，要把这个结点弹出，把它的子结点按照先序遍历相反的过程把结点压栈：右结点先压栈，然后是左结点,最后是根结点
             //当前结点右结点先入栈
      Push_LinkStack(stack, (LinkNode *)CreateBiTreeStackNode(
                                node->root->rchild, MY_FALSE));
      //当前结点左结点后入栈
      Push_LinkStack(stack, (LinkNode *)CreateBiTreeStackNode(
                                node->root->lchild, MY_FALSE));
      //当前结点入栈
      node->flag = MY_TRUE; //重要！改变了结点的显示性质
      Push_LinkStack(stack, (LinkNode *)node);
    } //至此非递归先序遍历完成，中序后序可以改变这里压栈的逆顺序进而实现非递归遍历
  }
}
//非递归中序遍历 LDR 压栈的时候反过来RDL
void NonRecursionLDR(BinaryNode *root) { //中序遍历
  //创建栈
  LinkStack *stack = Init_LinkStack();
  //把根结点压入栈中 另外加入了(LinkNode *)强转 初始化状态为FALSE
  Push_LinkStack(stack, (LinkNode *)CreateBiTreeStackNode(root, MY_FALSE));
  while (Size_LinkStack(stack) > 0) { //先读取并弹出栈顶元素
    BiTreeStackNode *node = (BiTreeStackNode *)Top_LinkStack(stack);
    Pop_LinkStack(stack); //弹出
    if (node->root == NULL) { //判断判处的结点是否为空，如果为空跳过当前循环
      continue;
    }
    if (node->flag == MY_TRUE) {    //如果结点标记为TRUE，打印出来
      printf("%c", node->root->ch); //打印
    } else { //重要，这是本段代码的精要之处，else意味着这里
             //的flag为MY_FALSE，要把这个结点弹出，把它的子结点按照
             // 中序遍历相反的过程把结点压栈：右结点先压栈，然后是根结点,最后是左结点
             //当前结点右结点先入栈
      Push_LinkStack(stack, (LinkNode *)CreateBiTreeStackNode(
                                node->root->rchild, MY_FALSE));

      //当前结点入栈
      node->flag = MY_TRUE; //重要！改变了结点的显示性质
      Push_LinkStack(stack, (LinkNode *)node);
      //当前结点左结点最后入栈
      Push_LinkStack(stack, (LinkNode *)CreateBiTreeStackNode(
                                node->root->lchild, MY_FALSE));
    } //至此非递归中序遍历完成
  }
}
//非递归后序遍历 LRD 压栈的时候反过来DRL
void NonRecursionLRD(BinaryNode *root) { //后序遍历！
  //创建栈
  LinkStack *stack = Init_LinkStack();
  //把根结点压入栈中 另外加入了(LinkNode *)强转 初始化状态为FALSE
  Push_LinkStack(stack, (LinkNode *)CreateBiTreeStackNode(root, MY_FALSE));
  while (Size_LinkStack(stack) > 0) { //先读取并弹出栈顶元素
    BiTreeStackNode *node = (BiTreeStackNode *)Top_LinkStack(stack);
    Pop_LinkStack(stack); //弹出
    if (node->root == NULL) { //判断判处的结点是否为空，如果为空跳过当前循环
      continue;
    }
    if (node->flag == MY_TRUE) {    //如果结点标记为TRUE，打印出来
      printf("%c", node->root->ch); //打印
    } else { //重要，这是本段代码的精要之处，else意味着这里
             //的flag为MY_FALSE，要把这个结点弹出，把它的子结点按照
             // 后序遍历相反的过程把结点压栈：结点先压栈，然后是结点右结点,最后是结点左结点
             //当前结点入栈
      node->flag = MY_TRUE; //重要！改变了结点的显示性质
      Push_LinkStack(stack, (LinkNode *)node);
      //当前结点右结点先入栈
      Push_LinkStack(stack, (LinkNode *)CreateBiTreeStackNode(
                                node->root->rchild, MY_FALSE));
      //当前结点左结点最后入栈
      Push_LinkStack(stack, (LinkNode *)CreateBiTreeStackNode(
                                node->root->lchild, MY_FALSE));

    } //至此非递归后序遍历完成
  }
}
int main() {
  //创建结点
  BinaryNode node1 = {'A', NULL, NULL}; //定义结点，初始化时左右结点为NULL
  BinaryNode node2 = {'B', NULL, NULL};
  BinaryNode node3 = {'C', NULL, NULL};
  BinaryNode node4 = {'D', NULL, NULL};
  BinaryNode node5 = {'E', NULL, NULL};
  BinaryNode node6 = {'F', NULL, NULL};
  BinaryNode node7 = {'G', NULL, NULL};
  BinaryNode node8 = {'H', NULL, NULL};
  //建立结点关系 就是把结点按照图上表示的连接起来 遵守准则 先左后右
  node1.lchild = &node2;
  node1.rchild = &node6;
  node2.rchild = &node3;
  node3.lchild = &node4;
  node3.rchild = &node5;
  node6.rchild = &node7;
  node7.lchild = &node8;
  //二叉树递归与非递归打印比较
  printf("二叉树非递归先序遍历：\n");
  NonRecursionDLR(&node1);
  printf("\n");
  printf("二叉树递归先序遍历：\n");
  RecursionDLR(&node1);
  printf("\n");
  printf("二叉树非递归中序遍历：\n");
  NonRecursionLDR(&node1);
  printf("\n");
  printf("二叉树递归中序遍历：\n");
  RecursionLDR(&node1);
  printf("\n");
  printf("二叉树非递归后序遍历：\n");
  NonRecursionLRD(&node1);
  printf("\n");
  printf("二叉树递归后序遍历：\n");
  RecursionLRD(&node1);
  printf("\n");
}
