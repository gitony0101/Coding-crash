// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

/*求二叉树叶子结点数目

       A
     /   \
    B     F
     \     \
      C     G
     / \    /
    D  E   H

*/

//定义二叉树结点结构体
typedef struct BINARYNODE { //二叉链表示法
  char ch; //把图里面A～H字符表示出来，这就是数据域
  struct BINARYNODE *lchild; //左结点
  struct BINARYNODE *rchild; //又结点
} BinaryNode;

int main() {

  printf("\n");
  return 0;
}
