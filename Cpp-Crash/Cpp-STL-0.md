# STL 笔记

## Todo

1. 精简概念
2. 集中代码，精简内容，少说多做

## Tutorials

- 黑马 C++ STL
- Cpp-Crash

# STL 概论

```c++
C++是C + 面向对象（类）+模板（STL）， 所以叫++
```

为了建立数据结构和算法标准，并且降低他们之问的耦合关系，以提升各自的独立性、弹性、交互操作性（相互合作性 interoperability),诞生了 STL(Standard Template Library,标准模板库)。

STL 从广义上分为：

- 容器(container）
- 算法 algorithm)
- 送代器(iterator)

|  组件  |   英文    |                 描述                 |
| :----: | :-------: | :----------------------------------: |
|  容器  | container |    容器是用来管理某一类对象的集合    |
|  算法  | algorithm | 作用于容器，提供了执行各种操作的方式 |
| 迭代器 | iterator  |            链接容器和算法            |

**容器和算法之问通过送代器进行无缝连接。**

## STL 六大组件
**容器、算法、迭代器、仿函数、适配器（配接器）和空问配置器。**

- 容器：各种数据结构，如 vector、list,deque、Set、map 等，用来存放数据，从实现角度来看，STL 容器是一种 class template
- 算法：各种常用的算法，如 sort、find、copy、for_each。从实现的角度来看，STL 算法是一种 function tempalte
- 迭代器：扮演了容器与算法之间的胶合剂，共有五种类型，从实现角度来看，送代器是一种将 operator\*,operator->,operator.++,operator--等指针相关操作子以重载的 class template.所有 STL 容器都附带有自己专属的送代器，只有容器的设计者才知道如何遍历自己的元素。**原生指针(native pointer)也是一种送代器。**
- 仿函数：行为类似函数，可作为算法的某种策路。从实现角度来看，仿函数是一种重载了 operator(0 的 class 或者 class template
- 适配器：一种用来修饰容器或者仿函数或送代器接口的东西。
- 空问配置器：负责空间的配置与管理，从实现角度看，配置器是一个实现了动态空间配置、空间管理、空间释放的 class tempalte.

## STL 优点

1. 内建在 C+编译器中，不需要安装额外内容+
2. 不需要了解具体实现内容，只要熟练运用即可
3. STL 具有**高可重用性，高性能，高移植性**，跨平台的优点。

- 高可重用性：STL 中几乎所有的代码都采用了模板类和版函如的方式实现,这相比于传统的由函数和类组成的库来说提供了更好的代码重用机会。
- 高性能：如 map 可以高效地从十万条记录里面查找出指定的记录，因为 map 是采用红黑树的变体实现的.
- 高移植性：如在项目 A 上用 STL 编写的模块，可以直接移植到项目 B 上。

### 容器划分

序列式容器
关联式容器
有个 key 起到索引作用

### 算法

质变算法
非质变算法

# STL 初识：

- 内置数据类型
- 自定义数据类型

### 利用算法遍历容器

- for_each(v.begin(),v.end(),myPrint）头文件 algorithm+
- 容器中存放自定义数据类型
- 容器中存放自定义数据类型指针
- 容器嵌套容器

# STL 常用容器

1. string
2. vector
3. deque
4. stack
5. queue
6. 

## STL 容器常用接口表格



## String 容器
- string是C++风格的字符串，而string本质上是一个类
  














string 和 char* 的区别：
- char * 是一个指针
- string是一个类，类内部封装了char\*，管理这个字符串，是一个char*型的容器。
string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责

string 类内部封装了很多成员方法: 

1. 构造 赋值
2. [],at 字符提取
   - [],at 区别： []访问越界直接挂，at访问越界返回out_of_range异常
     - [] 可以提取字符串中的某个字符
     - at 可以提取字符串中的某个字符，但是不能提取字符串中的某个字符
3. 字符拼接 += append
4. 查找 find rfind
5. 替换 replace
6. 比较（多用于是否相等）
7. 子串
8. 插入insert 删除 erase
9. string 和 const char* 的转换
    - string 转换为 const char* .c_str();
    - const char* 隐式转换为 string，反之不可以. [here](https://www.electroniclinic.com/c-type-casting-explicit-and-implicit-with-examples/)
10. 大小写互换 tolower toupper
    






## Vector 容器

- 使用率高，可以理解为数组--单端数组
- 动态数组：自动扩展内存
  - 自动扩展内存并不是在原有空间后续进行扩展，而是另起炉灶，将原有数据拷贝到新空间下并释放原有空间。 
- 接口
  - 赋值 构造
  - 交换 swap
  - 大小 size
  - 是否为空 empty
  - 重置大小 resize ：多退超出部分，少补默认值
  - 容量 capacity
  - 翻转 reverse
  - 检索 at []
  - front 返回容器中的第一个元素 back 返回容易中最后一个元素











<div align = "center">
<div style="width:800px">

![img](./img/clip_image002.jpg)

</div>
</div>



注意：
所谓动态增加大小，并不是在原空间之后续接新空间（因为无法保证原空间之后尚有可配
置的空间)，而是一块更大的内存空间，然后将原数据拷贝新空间，并释放原空间。因此，
对vector的任何操作，一旦引起空间的重新配置指向原vector的所有迭代器就都失效了。
这是程序员容易犯的一个错误，务必小心。







构造函数： vector的多种构造方式没有可比性，灵活使用即可
赋值操作： vector赋值方式比较简单，使用operator=，或者assign都可以

容量和大小操作：
 - 判断是否为空  --- empty
 - 返回元素个数  --- size
 - 返回容器容量  --- capacity
 -  重新指定大小  ---  resize

插入和删除：尾插 尾删 插入删除清空

数据存取： 对 vector中的数据的存取操作
- 迭代器 [] at() 获取vector中的元素
- front 返回第一个元素，back 最后一个。

互换容器  swap 可以使两个容器互换，可以达到实用的收缩内存效果

预留空间 reserve 减少vector 在动态扩展容量时的扩展次数

逆序遍历 reverse_iterator 非质变算法

```c++

```

判断容器迭代器是否支持随机访问：
- 跳跃访问 itBegin += 3

## Deque 容器



















### Deque 双端数组 

可对头尾插入删除操作






### deque与vector区别
- vector对于头部的插入删除效率低，数据量越大，效率越低
- vector访问元素时的速度会比deque快,这和两者内部实现有关
- deque相对而言，对头部的插入删除速度回比vector快


### 工作原理
![img](./img/clip_image002-1547547642923.jpg)

内部工作原理：

deque内部有个**中控器**，维护每段缓冲区中的内容，缓冲区中存放真实数据
中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间
- deque容器的迭代器也是支持随机访问的

![img](./img/clip_image002-1547547896341.jpg)

- 构造 赋值 , 都一样，体现不出来区别。
- 大小操作 empty size resize

###  编辑

- 插入和删除提供的位置是迭代器，而不是迭代器的值
- 尾插   ---  push_back
- 尾删   ---  pop_back
- 头插   ---  push_front
- 头删   ---  pop_front

## Stack 栈容器


只有一个出口，先进后出FILO,不能遍历


<div align = "center">
<div style="width:700px">

![img](./img/clip_image002-1547604555425.jpg)

</div>
</div>










- 入栈 进入数据  --- push
- 出栈 弹出数据  --- pop
- 返回栈顶   --- top
- 判断栈是否为空   --- empty
- 返回栈大小   --- size

## Queue 队列容器

正如queue字面意思，排队，先进先出FIFO 没有遍历，有两个出口

<div align = "center">
<div style="width:700px">

![img](./img/clip_image002-1547606475892.jpg)

</div>
</div>


- 入队  往队尾添加元素 --- push
- 出队  从队头移除第一个元素 --- pop
- 返回队头元素   --- front
- 返回队尾元素   --- back
- 判断队是否为空   --- empty
- 返回队列大小   --- size

## List 列表容器

将数据进行链式存储，是一种物理单元上非连续的存储结构，数据元素的逻辑顺序通过链表中的指针链接实现
：
<div align = "center">
<div style="width:700px">

![img](./img/clip_image002-1547608564071.jpg)

</div>
</div>

- 链表list由一系列节点组成
  - 节点的组成：一个是存储数据元素的数据域，另一个是存储下一个节点地址的指针域
- STL 链表是双向循环链表

















List容器
3.1
双向循环链表
3.2
对外接口
3.2.1构造、赋值、大小、重置大小、是否为空
3.2.2反转reverse
3.2.3排序5ot
3.2.3.1/如果容器的迭代器支持随机访问，可以使用系统提供的标志算法
3.2.3.2不支持随机访问的迭代器的容器，内部会提供对应的算法接口
3.2.3.3对于自定义数据类型，必须要指定排序规则+
3.2.4对自定义数据类型做了高级排序
3.2.5
如果利用remove删除自定义数据类型，需要重载





## 迭代器

- iterator 普通迭代器
- reverse_iterator 反向(翻转)迭代器
- const_iterator 只读（常量）迭代器






---

# ON-THE-GO

逻辑回归的损失函数
PCA 原理

# 指针

# 引用

# 引用 Reference 逆向引用 Dereference `*`

## References in C++ `‘&’`

When a variable is declared as a reference, it becomes an alternative name for an existing variable.

**A variable can be declared as a reference by putting `‘&’` in the declaration.**

```c++
#include <iostream>
using namespace std;

int main() {
  int x = 10;

  // ref is a reference to X.
  int &ref = x;
  cout << ref << endl;

  // Value of x is now changed to 20
  ref = 20;
  cout << "x = " << x << endl;

  // Value of x is now changed to 30
  x = 30;
  cout << "ref = " << ref << endl;
}
```

### References are less powerful than pointers

1. Once a reference is created, it cannot be later made to reference another object; it cannot be reset. This is often done with pointers.
2. References cannot be NULL. Pointers are often made NULL to indicate that they are not pointing to any valid thing.
3. A reference must be initialized when declared. There is no such restriction with pointers.
   Due to the above limitations, references in C++ cannot be used for implementing data structures like Linked List, Tree, etc. In Java, references don’t have the above restrictions and can be used to implement all data structures. References being more powerful in Java is the main reason Java doesn’t need pointers.

### References are safer and easier to use:

1. Safer: Since references must be initialized, wild references like wild pointers are unlikely to exist. It is still possible to have references that don’t refer to a valid location (See questions 5 and 6 in the below exercise )
2. Easier to use: References don’t need a dereferencing operator to access the value. They can be used like normal variables. ‘&’ operator is needed only at the time of declaration. Also, members of an object reference can be accessed with dot operator (‘.’), unlike pointers where arrow operator (->) is needed to access members.

Together with the above reasons, there are few places like the copy constructor argument where pointer cannot be used. Reference must be used to pass the argument in the copy constructor. Similarly, references must be used for overloading some operators like ++.

# 指针和引用的关心

# 运算符重载

```c++

```

```c++

```

int main

void function(int x) {
int y = x;
int \*p = &x;
int &r = x;
}

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```
