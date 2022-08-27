// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

typedef struct BINARYNODE {
  char ch;
  struct BINARYNODE *lchild;
  struct BINARYNODE *rchild;
} BinaryNode;

void RecursionDLR(BinaryNode *root) {
  // Recursion DLR
  if (root == NULL) {
    return;
  }
  printf("%c", root->ch);
  RecursionDLR(root->lchild);
  RecursionDLR(root->rchild);
}

void RecursionLRD(BinaryNode *root) {
  // Recursion LRD
  if (root == NULL) {
    return;
  }
  RecursionLRD(root->lchild);
  RecursionLRD(root->rchild);
  printf("%c", root->ch);
}

int main() {
  BinaryNode node1 = {'A', NULL, NULL};
  BinaryNode node2 = {'B', NULL, NULL};
  BinaryNode node3 = {'C', NULL, NULL};
  BinaryNode node4 = {'D', NULL, NULL};
  BinaryNode node5 = {'E', NULL, NULL};
  BinaryNode node6 = {'F', NULL, NULL};
  BinaryNode node7 = {'G', NULL, NULL};
  BinaryNode node8 = {'H', NULL, NULL};

  node1.lchild = &node2;
  node1.rchild = &node6;
  node2.rchild = &node3;
  node3.lchild = &node4;
  node3.rchild = &node5;
  node6.rchild = &node7;
  node7.lchild = &node8;
  //开始递归遍历
  printf("DLR先序遍历根左右\n");
  RecursionDLR(&node3);
  printf("\n");
  printf("LRD后序遍历左右根\n");
  RecursionLRD(&node1);
  printf("\n");
  return 0;
}
