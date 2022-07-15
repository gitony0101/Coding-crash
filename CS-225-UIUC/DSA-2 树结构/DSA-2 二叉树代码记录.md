# DSA-2 二叉树代码记录

## 二叉树递归遍历

三种方法

核心结构体、递归遍历

```c++
//定义二叉树结点结构体
typedef struct BINARYNODE { //二叉链表示法
  char ch; //把图里面A～H字符表示出来，这就是数据域
  struct BINARYNODE *lchild; //左结点
  struct BINARYNODE *rchild; //又结点
} BinaryNode;
```

> 二叉链表示法

```c++
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
```

- 二叉树递归遍历是在二叉链表示法创建的结构体为基础，通过递归的方式遍历二叉树的所有结点
> - 重点注意，递归函数是要调用自己本身，复制代码一时爽，但是没有递归自己会让结果报错

## 求叶子结点个数

- 叶子结点的性质在于没有child结点了，因此可以通过递归来找出叶子结点的个数

```c++
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
```

## 求二叉树高度

- 依靠递归思想，求二叉树的高度，根结点左右结点的子树谁大谁 + 1，从顶部结点往下递归

```c++

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
}
```

- 其中：
```c++
  int height = lHeight > rHeight ? lHeight + 1 : rHeight + 1; 
```
这里用了三元表达式，判定谁大就用谁+1

与此同时，还有一种max比较的代码思想：
```c++
return 1 + max(getTreeHeight(root->lchild),getTreeHeight(root->rchild));
```
看起来更加简洁高效
- 此处需要`#include <algorithm>`来调用`max`

## 拷贝二叉树

```c++
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
```

- 拷贝左右子树的时候继续用到了递归，在创建新的结点的时候，需要开辟新内存，同时数据、左右结点赋值。
- 拷贝的时候我们拷贝的是结点的数据，而不是指针，所以是`newnode->l/rchild = l/rchild;`

## 释放内存 注意这是C++的基本素质
```c++
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
```

## 二叉树非递归遍历

- **二叉树和栈出的联名版应用**
- 可以这样用，利用栈容器性质来替代之前二叉树代码中的**递归函数**
- 为什么要这样用：利用栈的性质，结合二叉树自身**数据结构**，结合Bool思想给当前根结点做标记
  - 设定两种显示状态 ：`TRUE`为显示，`FALSE`为不显示：
   ```cpp
      #define MY_FALSE 0 // 定义显示状态，如果为FALSE，设置为0，并且不被打印
      #define MY_TRUE 1 //定义显示状态，如果为TRUE，设置为1,打印
  ```



















## 二叉树的创建

- 怎样的遍历逆运算能确定一棵树？
  - 中序遍历必参与







### 井号法创建二叉树



- `fflush(stdin);` 函数





# 小结 

关于二叉树，由于自身的结构性质，使得递归函数在这里应用广泛，想到二叉树，要想到递归
