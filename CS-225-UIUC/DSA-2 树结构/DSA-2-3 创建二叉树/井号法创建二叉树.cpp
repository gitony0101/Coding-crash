// #define _CRT_SECURE_NO_WARNINGS
#include <cstddef>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//定义二叉树结点结构体
typedef struct BINARYNODE { //二叉链表示法
  char ch; //把图里面A～H字符表示出来，这就是数据域
  struct BINARYNODE *lchild; //左结点
  struct BINARYNODE *rchild; //又结点
} BinaryNode;

//原来的 先序递归遍历
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

BinaryNode *CreateBInaryTree() {
  fflush(stdin); //干清空缓存
  char ch;
  scanf("%c", &ch);
  BinaryNode *node;

  if (ch == '#') { //井号代表此处为空结点
    node = NULL;
  } else {                                           //拷贝左右子树
    node = (BinaryNode *)malloc(sizeof(BinaryNode)); //前方已经定义node
    node->ch = ch;
    node->lchild = CreateBInaryTree();
    node->rchild = CreateBInaryTree();
  }
  return node;
}

int main() {
  //创建树
  BinaryNode *root = CreateBInaryTree();
  //   打印树
  RecursionDLR(root);
  printf("\n");
  return 0;
}
// 回车输入ABD##E##C #F##
