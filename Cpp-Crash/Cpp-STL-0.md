# STL 笔记

## Tutorials

- 黑马 C++ STL
- Cpp-Crash

# STL 概论

为了建立数据结构和算法标准，并且降低他们之问的耦合关系，以提升各自的独立性、弹性、交互操作性（相互合作性 interoperability),诞生了 STL(Standard Template Library,标准模板库)。

STL 从广义上分为：

- 容器(container）
- 算法 algorithm)
- 送代器(iterator)

**容器和算法之问通过送代器进行无缝连接。**

STL 几乎所有的代码都采用了模板类或者模板函数，这相比传统的由函数和类组成的库来说提供了更好的代码重用机会。C++标准程序库中隶属于 STL 的占到了 80%以上，

## STL 六大组件简介

STL 提供了六大组件，彼此之间可以组合套用，这六大组件分别是**容器、算法、迭代
器、仿函数、适配器（配接器）和空问配置器。**

- 容器：各种数据结构，如 vector、list,deque、Set、map 等，用来存放数据，从实现角度来看，STL 容器是一种 class template
- 算法：各种常用的算法，如 sort、find、copy、for_each。从实现的角度来看，STL 算法是一种 function tempalte
- 迭代器：扮演了容器与算法之间的胶合剂，共有五种类型，从实现角度来看，送代器是一种将 operator\*,operator->,operator.++,operator--等指针相关操作子以重载的 class template.所有 STL 容器都附带有自己专属的送代器，只有容器的设计者才知道如何遍历自己的元素。**原生指针(native pointer)也是一种送代器。**
- 仿函敌：行为类似函数，可作为算法的某种策路。从实现角度来看，仿函数是一种重载了 operator(0 的 class 或者 class template
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

```c++
  vector<int>::iterator itBegin =
      v.begin(); // v.begin() Initial iterator, points to the firs element of
                 // the container.
  vector<int>::iterator itEnd = v.end(); // v.end() end iterator,points to the
                                         // next poistion of the last element.
```

v.begin()起始迭代器，指向容器中第一个数据
v.end()结束迭代器，指向的是容器中最后一个元素的下一个位置

- 内置数据类型
- 自定义数据类型

### 利用算法遍历容器

- for_each(v.begin(),v.end(),myPrint）头文件 algorithm+
- 容器中存放自定义数据类型
- 容器中存放自定义数据类型指针
- 容器嵌套容器

---

# On the Go

1. 指针；2. 引用；3. 指针和引用的关心；4. 运算符重载
