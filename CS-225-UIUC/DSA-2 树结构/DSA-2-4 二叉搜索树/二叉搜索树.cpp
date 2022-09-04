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
BstNode *GetNewNode(int data) { // GetNewNode函数名很形象
  // BstNode *newNode = (BstNode *)malloc(sizeof(BstNode));// mallc 写法
  BstNode *newNode = new BstNode(); // new 写法，都是为了开辟内存空间
  // 无论new还是malloc，创建结点的过程就是在栈内存开辟内存空间的过程
  newNode->data = data;                  //初始化数据
  newNode->left = newNode->right = NULL; //初始化左右结点都NULL
  return newNode;
}

//创造在结点中插入数值的函数insertData，从而可以创造二叉搜索树
BstNode *insertData(BstNode *root, int data) {
  if (root == NULL) {        // 空树
    root = GetNewNode(data); //为什么
  }
  //下面如果不是空树，我们有两种情况需要考虑，小的放到左子树，大的放到右子树
  else if (data <= root->data) { //父节点数值比插入数值大，那就放到左子树
    root->left = insertData(root->left, data);
  }
  //剩下的就是父节点数值比插入结点数值小，按照二叉搜素树要求，放到右结点
  else {
    root->right = insertData(root->right, data);
  }
  return root;
}
// 二叉搜索树搜索bool函数 还是用到了递归Search
bool Search(BstNode *root, int data) {
  if (root == NULL)
    return false;
  else if (root->data == data)
    return true;               //特例防呆
  else if (root->data >= data) //如果插入值小于父节点值，往左递归
    return Search(root->left, data);
  else //如果插入值大于父节点值，往右递归
    return Search(root->right, data);
  //总之牢记二叉搜索树两个子结点与父节点的关系就是：左小右大（与父节点比）
}

int main() {
  BstNode *root = NULL; //创建一个空树
  //按照insertData插入结点，从而创作二叉搜索树
  root = insertData(root, 15);
  root = insertData(root, 10);
  root = insertData(root, 20);
  root = insertData(root, 25);
  root = insertData(root, 8);
  root = insertData(root, 12);
  int num;
  printf("请输入数值:\n");
  scanf("%d", &num);
  if (Search(root, num) == true)
    printf("在二叉搜索树中找到了这个数");
  else
    printf("没有这个数。");
  printf("\n");
  return 0;
}
