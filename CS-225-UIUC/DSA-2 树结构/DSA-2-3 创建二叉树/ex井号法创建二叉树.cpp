#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//二叉树结点
typedef struct BINARYNODE {
  char ch;
  struct BINARYNODE *lchild;
  struct BINARYNODE *rchild;
} BinaryNode;
void Recursion(BinaryNode *root) {
  if (root == NULL) {
    return;
  }
  printf("%c", root->ch);
  Recursion(root->lchild);
  Recursion(root->rchild);
}
BinaryNode *CreateBinaryTree() {
  fflush(stdin); //显示等待输入  刷新
  char ch;
  scanf("%c", &ch);

  BinaryNode *node;
  if (ch == '#') {
    node = NULL;
  } else {
    node = (BinaryNode *)malloc(sizeof(BinaryNode));
    node->ch = ch;
    node->lchild = CreateBinaryTree();
    node->rchild = CreateBinaryTree();
  }
  return node;
}
int main() {
  //创建树
  BinaryNode *root = CreateBinaryTree();
  //打印树
  Recursion(root);
  return EXIT_SUCCESS;
}
