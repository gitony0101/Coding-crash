# C++ 编程笔记 03

# 函数

爱是个动词，函数也是。
- 函数可以是及物动词
- 函数可以是不及物动词

## 基础

三要素：函数名、参数、返回值

函数是一个命名了的代码块，通过调用函数执行相应的代码。
步骤：声明函数，创建函数，调用函数
典型的函数包括：

- 返回类型 `return type`
- 函数名 `function name`
- 参数列表 `(parameter list)`
  - 实参 `actual parameter` ：型参的初始值，默认值，类型必须匹配
  - 型参 `type parameter`：不能同名
- 函数体 `{ code block }`

### void main 和 int main 的区别 就是有无返回值

- void main 函数不需要返回值，返回值类型为 void
- int main 函数需要返回值，返回值类型为 int

## 参数传递

赋值参数的方式：

1. function(type1 parameter1, type2 parameter2);
2. function(type1 parameter1 , type2 parameter2 = default value);
   - 注意默认参数要放在定义参数的最后面

### 返回值 Return

- 函数返回值：
  - 函数返回值类型：`return type`
  - 函数返回值：`return value`

## 函数重载 Overload

有人不建议用，go里面就没有

函数重载是指在**同一作用域内**，可以有一组**具有相同函数名**，不同**参数列表的函数**，这组函数被称为**重载函数**。重载函数通常用来命名一组功能相似的函数，这样做减少了函数名的数量，避免了名字空间的污染，对于程序的可读性有很大的好处。



- 整合功能相似的函数
- 减少明明数量，避免了命名空间的污染
- 增强程序的可读性

## 递归 Recursion

递归指的是在函数的定义中使用函数自身的方法。
所谓的递归， 直白的说， 就是自己调用自己（Functions call themselves），注意结束条件。

不推荐的理由：
- 栈溢出危险
- 时间空间消耗较大
- 重复运算

### 二叉树递归先序遍历

这是一个很好的递归应用，先序遍历根左右

```c++
//递归遍历
void Recursion(BinaryNode *root) { //从根开始遍历
  if (root == NULL) {
    return;
  }
  //先序遍历 根左右 先访问根结点
  printf("%c", root->ch);
  //再遍历左子树
  Recursion(root->lchild);
  //再遍历右子树
  Recursion(root->rchild);
} //从根开始，那么终止退出的的条件就是：某个根下面没有结点了，自然而然root==NULL
```

## `do-while` 循环

一个神奇的循环：

### 希尔排序中增量减小的过程

- `do-while`循环在保障每次外层循环增量逐步减小：
```c++
do {
  int increasement = length; //初始化，先让增量等于数组全长
    increasement = increasement / 3 + 1; //循环第一步：确定分组的增量
  } while (increasement > 1);
```

- 希尔增量`increasement`一直在减小，直到减小到1
  - 例如数组全长length=9，初始化给到increasement，第一次increasement= 9/3 +1 =4.第二次 4/3+1 =2，第三次2/3+1=1，至此因`while (increasement > 1);`限定，推出循环，正好最后一次循环没有增量了，回归原来的插入排序，把整个**基本有序数组**再插入排序一次。



## Lambda 函数
- Lambda函数又称匿名函数，函数没有名字
- 具有输入输出，表达式的参数就是其输入，表达式结果为函数的输出





## 三元表达式

举例：求二叉树的高度，根结点左右结点的子树谁大谁 + 1，从顶部结点往下递归
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

这里求树高度`height`用了三元表达式，判定谁大就用谁+1

# 一些常见函数、方法

## Namespaces 命名空间

## `#include<header>` 和 `include"header"` 区别

- 使用#include<> 程序会直接到标准函数库中找文件

- 使用#include"" 程序会会先从当前目录中找文件，**如果找不到会再到标准函数库中找文件**，保底，自己写的头文件用它

## main 函数

[`main()` 函数是 C++ 程序的入口函数](https://blog.csdn.net/K346K346/article/details/49331965):
- C++ 标准规定 main() 函数的返回值类型为 int，返回值用于表示程序的退出状态，返回 0 表示程序正常退出，返回非 0，表示出现异常。
- C++ 标准规定，main() 函数原型有两种:

```c++
//第一种
int main();

//第二种
int main(int argc，char* argv[]);
int main(int argc，char** argv);

```

> 带参的 main() 函数可以提供用户向程序输入的参数，例如int main(int argc,char* argv[])，其中，argc 代表参数的个数，argv 数组中每一个元素用于保存命令行参数的内容

## [typedef void(*F)(类型)解读](https://blog.csdn.net/weixin_43772611/article/details/124115413)

- `typedef void(*T)(void *)`类型


1. `void(*T)()`T是一个指向返回值为void ，参数为空的类型的函数指针
2. `void(*T)(void *)`T是一个指向返回值为void，参数为void *类型的指针
3. `typedef void(*T)(void *)`T不再是一个函数指针了，它代表着一种类型，这种类型可以定义一个指向返回值为void，参数为void *类型的指针，例如打印函数指针(链表)
```c++
typedef void (*PRINTLINKNODE)(void *);
```







# 库函数 内置函数 标准函数

```c++

```

- `memcpy()` string.h
- `strcpy()`
- `strcmp()`

- `fflush(stdin)` 一个计算机专业术语，功能是清空输入缓冲区，通常是为了确保不影响后面的数据读取（例如在读完一个字符串后紧接着又要读取一个字符，此时应该先执行`fflush(stdin);`。

- `alloc()` `calloc()` `malloc()`
- 









