# C++ 编程笔记 03

# 函数

## Namespaces 命名空间

## #include<> 和 include"" 区别

- 使用#include<> 程序会直接到标准函数库中找文件

- 使用#include"" 程序会会先从当前目录中找文件，**如果找不到会再到标准函数库中找文件**，保底，自己写的头文件用它

## 基础

三要素：函数名、参数、返回值

函数是一个命名了的代码块，通过调用函数执行相应的代码。典型的函数包括：

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

函数重载是指在**同一作用域内**，可以有一组**具有相同函数名**，不同**参数列表的函数**，这组函数被称为**重载函数**。重载函数通常用来命名一组功能相似的函数，这样做减少了函数名的数量，避免了名字空间的污染，对于程序的可读性有很大的好处。

- 整合功能相似的函数
- 减少明明数量，避免了命名空间的污染
- 增强程序的可读性

## 递归 Recursion

递归指的是在函数的定义中使用函数自身的方法。

语法格式：

```cpp
void recursion()
{
   statements;
   ... ... ...
   recursion(); /* 函数调用自身 */
   ... ... ...
}

int main()
{
   recursion();
}
```

A function that calls itself is known as a recursive function. And, this technique is known as recursion.

[Check here for Recursion.](https://www.programiz.com/cpp-programming/recursion)

As we see the code above there are always a base case to stop the recursion and a return statement to show us how it recurrs.

# Generic and Template

Philosophy of programming.

- Generic : 范型
- Template : 模板

Generic programming is writing code once that works with different types rather than having to repeat the same code multiple times by copying and pasting each type you want to support. In C++, you use templates to produce generic code. Templates are a special kind of parameter that tells the compiler to represent a wide range of possible types.

In this chapter we just introduce these concepts，since Generic and Template is more than this.

```c++
#include <iostream>
using namespace std;

template <typename T> // declare the template "args" as T,  typename is the
                      // kyeword you can use class (ANOTHER TYPTE) etc.

                      void Swap(T &a, T &b) { // & as reference, we will go
                                              // througt it later.
  T temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 5, b = 7;
  cout << "Initially, a = " << a << "and b = " << b << endl;
  Swap(a, b);
  cout << "Now, a = " << a << "and b = " << b << endl;

  char c = 'c', d = 'd';
  cout << "Initially, c = " << c << "and d = " << d << endl;
  Swap(c, d);
  cout << "Now, c = " << c << "and d = " << d << endl;
}
```

eusable applications with less code and shorter development time
