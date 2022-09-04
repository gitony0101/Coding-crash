// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*
和之前的链表比较一下，之前写了头文件，当前的这种写法比较直接
*/
//创建二叉搜索树结点结构体
struct BstNode {
  int data;       //父节点数据
  BstNode *left;  //定义左子结点
  BstNode *right; //定义右子结点
};                //分号别忘了，再次理解树结构的递归

//在堆中初始化二叉搜索树（动态内存）
BstNode *Init_BSTree(int data) {
  // BstNode *newNode = (BstNode *)malloc(sizeof(BstNode));// mallc 写法
  BstNode *newNode = new BstNode();      // new 写法
  newNode->data = data;                  //初始化数据
  newNode->left = newNode->right = NULL; //初始化左右结点都NULL
  return newNode;
}

//创造在结点中插入数值的函数insertData
BstNode *insertData(BstNode *root, int data) { return root; }

int main() {
  BstNode *root = NULL; //创建一个空树
  insertData(root, 15);
  insertData(root, 20);
  printf("\n");
  return 0;
}
