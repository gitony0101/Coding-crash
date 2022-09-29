// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue> //引入队列
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

/*
DFS（Deep First Search）深度优先搜索。
前中后序遍历就是深度优先
BFS（Breath First Search）广度优先搜索。
BFS为是从根节点开始，沿着树的宽度遍历树的节点。如果所有节点均被访问，则算法中止。
       A
     /   \
    B     F
     \     \
      C     G
     / \    /
    D  E   H
如图所示二叉树，A是第一个访问的，然后是B、F，接着C、G，最后是 D、E、H

基本思路：二叉树广度优先搜索队列实现
仔细看看层序遍历过程，其实就是从上到下，从左到右依次将每个数放入到队列Queue中，然后按顺序依次打印就是想要的结果。所以这里我们借助一个队列进行操作。

实现过程：
1.首先将二叉树的根节点push到队列中，判断队列不为nullptr，就输出队头的元素
2.判断节点如果有孩子，就将孩子push到队列中，
3. 遍历过的节点出队列，
4.循环以上操作，直到root= NULL。
*/

typedef struct BINARYNODE { //定义二叉树结构体
  char ch;
  struct BINARYNODE *lchild;
  struct BINARYNODE *rchild;
} BinaryNode;

void BFS_Q(BinaryNode *root) { //二叉树广度优先搜索队列实现
  if (root == NULL) {
    return;
  }
  queue<BinaryNode *> q_BFS;
  q_BFS.push(root);
  while (!q_BFS.empty()) {
    printf("%c", q_BFS.front()->ch);
    if (q_BFS.front()->lchild != NULL) { //先将左子树入队
      q_BFS.push(q_BFS.front()->lchild);
    }
    if (q_BFS.front()->rchild != NULL) { //再将右子树入队
      q_BFS.push(q_BFS.front()->rchild);
    }
    q_BFS.pop();
  }
}

int main() {
  BinaryNode node1 = {'A', NULL, NULL}; //定义结点，初始化时左右结点为NULL
  BinaryNode node2 = {'B', NULL, NULL};
  BinaryNode node3 = {'C', NULL, NULL};
  BinaryNode node4 = {'D', NULL, NULL};
  BinaryNode node5 = {'E', NULL, NULL};
  BinaryNode node6 = {'F', NULL, NULL};
  BinaryNode node7 = {'G', NULL, NULL};
  BinaryNode node8 = {'H', NULL, NULL};
  node1.lchild = &node2; // A(node1)的左子树指向B(node2)
  node1.rchild = &node6; // A(node1)的右子树指向F(node6)
  node2.rchild = &node3; // B(node2)只有右子树，指向C(node3)
  node3.lchild = &node4;
  node3.rchild = &node5;
  node6.rchild = &node7;
  node7.lchild = &node8;
  printf("二叉树广度优先搜索队列实现\n");
  BFS_Q(&node1);

  printf("\n");
  return 0;
}
