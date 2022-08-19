# DSA-2 二叉树代码记录

## 

> 尝试写头文件改代码

## 核心结构体与二叉树递归遍历

> 二叉链表示法

```c++
//定义二叉树结点结构体
typedef struct BINARYNODE { //二叉链表示法
  char ch; //把图里面A～H字符表示出来，这就是数据域
  struct BINARYNODE *lchild; //左结点
  struct BINARYNODE *rchild; //又结点
} BinaryNode;

```

以上定义了二叉树的结构体，我们可以看到的是，非常经典的根，左结点，右结点结构

### 主程序中的创建二叉树

树接上文，我们看一下下图例中的二叉树是怎么弄出来的

```cpp
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
//到此为止，下略
}
```

从代码中我们可以看到，二叉树的子结点不断指向它要链接的子结点，就成了我们看到图例中的样子。






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

- 叶子结点的性质在于没有child结点了，因此可以通过递归次数来找出叶子结点的个数
  - 一开始定义叶子结点个数为0，递归++

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

- 运行程序时候，`int leafNum = 0;`要进行初始化

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

## 二叉树非递归遍历 二叉树和栈的联名版应用

- **二叉树和栈的联名版应用**
  - 栈先进后出，是一个等待器
- 可以这样用，利用栈容器先进后出来替代之前二叉树代码中的**递归函数**
- 为什么要这样用：栈容器先进后出，结合二叉树自身**数据结构**，结合Bool思想给当前根结点做标记
  - 设定两种显示状态 ：`TRUE`为显示，`FALSE`为不显示：
```c++
      #define MY_FALSE 0 // 定义显示状态，如果为FALSE，设置为0，并且不被打印
      #define MY_TRUE 1 //定义显示状态，如果为TRUE，设置为1,打印
```



















### 联名版结构体

- 二叉树和栈容器相结合
```c++
//定义栈中结点的结构体
typedef struct BITREESTACKNODE { //用企业链表
  LinkNode node;                 //顶部晾衣绳结点
  BinaryNode *root;              //二叉树结点
  int flag;                      // MY_TRUE/FALSE 01 显示标记
} BiTreeStackNode;
```
- 使用的还是企业链表
- 接下来创建栈中结点是为了精简主函数，增加可读性

### 非递归三种遍历

以非递归先序遍历为例

```c++
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
```

主要步骤：

1. 结点压入栈中时，默认`flag`为FALSE不显示，然后弹出该结点
   - `flag`可以成为标志量
2. 以以先序遍历的**反向**顺序RLD把子结点压栈，顺序为：右结点先压栈，然后是左结点,最后是根结点
   - 这样是因为栈容器先进后出的性质决定
3. 将结点的显示标记改为TRUE，即表示该结点已经被显示
4. 打印该结点

- 一时间理解起来可能有难度，这个构造方法可以好好体会
- 至此非递归先序遍历完成，中序、后序可以改变这里压栈的逆顺序进而实现非递归遍历

### 改造头文件

在最后的遍历中加入了之前递归函数的比较，所以这些之前已经写好的函数，可以写到头文件中直接调用。



## 二叉树的创建

- 怎样的遍历逆运算能确定一棵树？
  - 中序遍历必参与







### 井号法创建二叉树



- `fflush(stdin);` 函数





# 小结 

关于二叉树，由于自身的结构性质，使得递归函数在这里应用广泛，想到二叉树，要想到递归
