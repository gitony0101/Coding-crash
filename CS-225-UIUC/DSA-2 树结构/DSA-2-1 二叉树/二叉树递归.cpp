// #define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //树高max
using namespace std;

/*
二叉树递归遍历 求叶子结点数目 求二叉树的高度
       A
     /   \
    B     F
     \     \
      C     G
     / \    /
    D  E   H
先序遍历 根左右DLR：ABCDEFGH
中序遍历 左根右LDR：BDCEAFHG
后序遍历 左右根LRD：DECBHGFA
叶子结点：没有child了：DEH 3个
求树高度：根结点左右结点BF的子树谁大谁+1，从顶部开始A往下递归
*/
//定义二叉树结点结构体
typedef struct BINARYNODE { //二叉链表示法
  char ch; //把图里面A～H字符表示出来，这就是数据域
  struct BINARYNODE *lchild; //左结点
  struct BINARYNODE *rchild; //又结点
} BinaryNode;
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
//求二叉树叶子结点数目 继续递归
void CalculateLeafNum(BinaryNode *root, int *leafNum) { //注意取地址还是饮用*&
  if (root == NULL) {
    return;
  }
  if (root->lchild == NULL && root->rchild == NULL) {
    (*leafNum)++;
  }
  //接下来开始递归，分别递归左子树结点的数目和右子树结点的数目
  CalculateLeafNum(root->lchild, leafNum);
  CalculateLeafNum(root->rchild, leafNum); //顺序可以颠倒，但是缺一不可
}
//求二叉树高度：根结点左右结点BF的子树谁大谁 + 1，从顶部开始A往下递归
int getTreeHeight(BinaryNode *root, int *h) {
  if (root == NULL) {
    return 0;
  }
  //求树的左子树高度
  int lHeight = getTreeHeight(root->lchild, h);
  //求树的右子树高度
  int rHeight = getTreeHeight(root->rchild, h);
  int height = lHeight > rHeight ? lHeight + 1 : rHeight + 1; // 三元表达式
  return height;
  // return 1 + max(getTreeHeight(root->lchild),
  //                getTreeHeight(root->rchild)); //这个表达式更好
}
//拷贝二叉树
BinaryNode *CopyBinaryTree(BinaryNode *root) { //拷贝左右子树并递归
  if (root == NULL) {
    return NULL;
  }
  //拷贝左子树
  BinaryNode *lchild = CopyBinaryTree(root->lchild);
  //拷贝右子树
  BinaryNode *rhild = CopyBinaryTree(root->rchild);
  //创建结点
  BinaryNode *newnode = (BinaryNode *)malloc((sizeof(BinaryNode)));
  newnode->ch = root->ch;
  newnode->lchild = lchild;
  newnode->rchild = rhild;
  return newnode;
}
//释放二叉树内存 注意素质
void FreeSpaceBinaryTree(BinaryNode *root) {
  if (root != NULL) {
    return;
  }
  //递归释放左右子树
  FreeSpaceBinaryTree(root->lchild);
  FreeSpaceBinaryTree(root->rchild);
  //释放当前结点
  free(root);
}

//函数创建完毕，下面构造二叉树
//并进行三种遍历 求自结点数目 树高度  拷贝二叉树并遍历

int main() {
  // exBinaryTree(); //三种方法遍历二叉树、求二叉树叶子结点数目
  //创建结点
  BinaryNode node1 = {'A', NULL, NULL}; //定义结点，初始化时左右结点为NULL
  BinaryNode node2 = {'B', NULL, NULL};
  BinaryNode node3 = {'C', NULL, NULL};
  BinaryNode node4 = {'D', NULL, NULL};
  BinaryNode node5 = {'E', NULL, NULL};
  BinaryNode node6 = {'F', NULL, NULL};
  BinaryNode node7 = {'G', NULL, NULL};
  BinaryNode node8 = {'H', NULL, NULL};
  //建立结点关系 就是把结点按照图上表示的连接起来 遵守准则 先左后右：
  /*
       A
     /   \
    B     F
     \     \
      C     G
     / \    /
    D  E   H
*/
  node1.lchild = &node2; // A(node1)的左子树指向B(node2)
  node1.rchild = &node6; // A(node1)的右子树指向F(node6)
  node2.rchild = &node3; // B(node2)只有右子树，指向C(node3)
  node3.lchild = &node4;
  node3.rchild = &node5;
  node6.rchild = &node7;
  node7.lchild = &node8;
  //开始递归遍历
  printf("DLR先序遍历根左右\n");
  RecursionDLR(&node1); //传入根结点
  printf("\n");
  printf("LDR中序遍历左根右\n");
  RecursionLDR(&node1);
  printf("\n");
  printf("LRD后序遍历左右根\n");
  RecursionLRD(&node1);

  //求子结点数目
  int leafNum = 0;
  CalculateLeafNum(&node1, &leafNum);
  // 上下两行对比原函数格式void CalculateLeafNum(BinaryNode *root, int *leafNum)
  printf("叶子结点数目：%d\n", leafNum);
  //求树高度
  int h = 0;
  int height = getTreeHeight(&node1, &h);
  printf("树的高度为：%d\n", height);
  //拷贝二叉树
  BinaryNode *root = CopyBinaryTree(&node1);
  //遍历新的二叉树，以DLR为例
  printf("DLR先序遍历新的二叉树:\n");
  RecursionDLR(root); //传入根结点
  //释放内存
  FreeSpaceBinaryTree(root);
  printf("\n");
  return 0;
}
// 小结：
// 三种遍历方法在写代码的时候，里面的递归要看清楚，一定要保持和本函数一致,否则遍历出来的结果混乱
