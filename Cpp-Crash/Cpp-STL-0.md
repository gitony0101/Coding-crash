# STL 笔记

## Todo

1. 精简概念
2. 集中代码，精简内容，少说多做

## Tutorials

- 黑马 C++ STL
- Cpp-Crash

# STL 概论

```c++
C++是 C + 面向对象（类）+模板（STL）， 所以叫++

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
6. list
7. set/multiset
8. map/multimap

## STL 容器常用接口表格

<div style="font-size: 16px">

<font size="4">

|              |            | `<string>` | `<vector>` | `<deque>` | `<stack>` | `<queue>` | `<list>` | `<set>` | `<multiset>` |   `<map>`   | `<multimap>` |
| :----------: | :--------: | :--------: | :--------: | :-------: | :-------: | :-------: | :------: | :-----: | :----------: | :---------: | :----------: |
| 典型内存结构 |            |            |  单端数组  | 双端数组  |           |           | 双向链表 | 二叉树  |    二叉树    |   二叉树    |    二叉树    |
|  可随机存取  |            |            |     是     |    是     |           |           |    否    |   否    |      否      | 对 key 不是 |      否      |
| 元素安插移除 |            |            |    尾端    | 头尾两端  |           |           | 任何位置 |    -    |      -       |      -      |      -       |
| 元素搜寻速度 |            |            |     慢     |    慢     |           |           |  非常慢  |   快    |      快      |  对 key 快  |  对 key 快   |
|     函数     |    作用    |            |            |           |           |           |          |         |              |             |              |
|  访问&遍历   |            |            |            |           |           |           |          |         |              |             |              |
|   `.at()`    |            |     ✔️     |     ✔️     |    ✔️     |           |           |    ✔️    |         |              |             |              |
|  `.front()`  | 返回头引用 |     ✔️     |     ✔️     |    ✔️     |           |           |    ✔️    |         |              |             |              |
|  `.back()`   | 返回尾引用 |     ✔️     |     ✔️     |    ✔️     |           |           |    ✔️    |         |              |             |              |
|  `.begin()`  | 返回头指针 |     ✔️     |     ✔️     |    ✔️     |           |           |    ✔️    |   ✔️    |              |             |              |
|   `.end()`   | 返回尾指针 |     ✔️     |     ✔️     |    ✔️     |           |           |    ✔️    |   ✔️    |              |             |              |
|  `.find()`   |            |     ✔️     |            |           |           |           |          |   ✔️    |              |     ✔️      |              |
|     信息     |            |            |            |           |           |           |          |         |              |             |              |
|  `.size()`   |            |            |     ✔️     |           |           |           |          |   ✔️    |              |             |              |
|  `.empty()`  |            |            |     ✔️     |           |           |           |          |   ✔️    |              |             |              |
|  `.empty()`  |            |            |     ✔️     |           |           |           |          |   ✔️    |              |             |              |
|   元素操作   |            |            |            |           |           |           |          |         |              |             |              |
|  `.empty()`  |            |            |     ✔️     |           |           |           |          |   ✔️    |              |             |              |
|     双向     |            |            |            |    ✔️     |           |           |          |   ✔️    |              |             |              |
| `.assign()`  |            |     ✔️     |     ✔️     |    ✔️     |           |           |    ✔️    |         |              |     ✔️      |              |
|              |            |            |            |           |           |           |          |         |              |             |              |
|              |            |            |            |           |           |           |          |         |              |             |              |
|              |            |            |            |           |           |           |          |         |              |             |              |
|              |            |            |            |           |           |           |          |         |              |             |              |
|              |            |            |            |           |           |           |          |         |              |             |              |
|              |            |            |            |           |           |           |          |         |              |             |              |
|              |            |            |            |           |           |           |          |         |              |             |              |
|              |            |            |            |           |           |           |          |         |              |             |              |
|              |            |            |            |           |           |           |          |         |              |             |              |
|              |            |            |            |           |           |           |          |         |              |             |              |
|   容器操作   |            |            |            |           |           |           |          |         |              |             |              |
|              |            |            |            |           |           |           |          |         |              |             |              |
|              |            |            |            |           |           |           |          |         |              |             |              |
|              |            |            |            |           |           |           |          |         |              |             |              |
|              |            |            |            |           |           |           |          |         |              |             |              |

</div >

- vector 的使用场景：比如软件历史操作记录的存储，我们经常要查看历史记录，比如上一次的记录，上上次的记录，但却不会去删除记录，因为记录是事实的描述。
- deque 的使用场景：比如排队购票系统，对排队者的存储可以采用 deque，支持头端的快速移除，尾端的快速添加。如果采用 vector，则头端移除时，会移动大量的数据，速度慢。

  - vector 与 deque 的比较：

    vector.at()比 deque.at()效率高，比如 vector.at(0)是固定的，deque 的开始位置 却是不固定的。
    如果有大量释放操作的话，vector 花的时间更少，这跟二者的内部实现有关。
    deque 支持头部的快速插入与快速移除，这是 deque 的优点。

- list 的使用场景：比如公交车乘客的存储，随时可能有乘客下车，支持频繁的不确实位置元素的移除插入。
- set 的使用场景：比如对手机游戏的个人得分记录的存储，存储要求从高分到低分的顺序排列。
- map 的使用场景：比如按 ID 号存储十万个用户，想要快速要通过 ID 查找对应的用户。二叉树的查找效率，这时就体现出来了。如果是 vector 容器，最坏的情况下可能要遍历完整个容器才能找到该用户

作为对上表的补充，使用时：

1. 缺省情况下应该使用 vector。vector 的内部结构最简单，并允许随机存取，所以数据的存取十分方便灵活据的处理也够快
2. 如果经常要在序列头部和尾部安插和移除元素，应该采用 deque。如果你希望元素被移除时，容器能够自动内存，那么你也应该采用 deque。此外，由于 vector 通常才有用一个内存区块来存放元素，而 deque 采用多块，所以后者可内含更多元素
3. 如果需要经常在容器的中段执行元素的安插、移除和移动，可考虑使用 list。list 提供特殊的成员函数，可常数时间内将元素从 A 容器转移到 B 容器。但由于 list 不支持随机存取，所以如果只要知道 list 的头部却要造访 li 中的元素，性能会大打折扣和所有“以节点为基础”的容器相似，只要元素还是容器的已不复，list 就不会令指向那些元素的迭代器失 vector 则不然，一旦超过其容量，它的所有 iterators,pointers.references 都会失效；执行安插或操作时，也会令一部分 iterators、pointers、references 失效。至于 deque,当它的大小改变，iterators，pointers，references 都会失效
4. 如果你要的容器是这种性质：每次操作若不成功，便无效用，那么你应该选用 list，或是采用关联式容器
5. 如果你经常需要根据某个准则来搜寻元素，那么应当使用“以该排序准则对元素进行排序”的 set 或 multise 记住，理论上，面对 1000 个元素的排序，对数复杂度比线性复杂度好 10 倍。就搜寻速度而言，hash table 通二叉树还要快 5-10 倍。但是 hash table 的元素并未排序，所以如果元素必须排序，它就用不上了
6. 如果想处理 key/value pair，请采用 map 或 multimap
7. 如果需要关联式数组，应采用 map
8. 如果需要字典结构，应采用 multimap。

## String 容器

- string 是 C++风格的字符串，而 string 本质上是一个类

string 和 char\* 的区别：

- char \* 是一个指针
- string 是一个类，类内部封装了 char\*，管理这个字符串，是一个 char*型的容器。
  string 管理 char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责

string 类内部封装了很多成员方法:

1. 构造 赋值
2. [],at 字符提取
   - [],at 区别： []访问越界直接挂，at 访问越界返回 out_of_range 异常
     - [] 可以提取字符串中的某个字符
     - at 可以提取字符串中的某个字符，但是不能提取字符串中的某个字符
3. 字符拼接 += append
4. 查找 find rfind
5. 替换 replace
6. 比较（多用于是否相等）
7. 子串
8. 插入 insert 删除 erase
9. string 和 const char\* 的转换
   - string 转换为 const char\* .c_str();
   - const char\* 隐式转换为 string，反之不可以. [here](https://www.electroniclinic.com/c-type-casting-explicit-and-implicit-with-examples/)
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
对 vector 的任何操作，一旦引起空间的重新配置指向原 vector 的所有迭代器就都失效了。
这是程序员容易犯的一个错误，务必小心。

构造函数： vector 的多种构造方式没有可比性，灵活使用即可
赋值操作： vector 赋值方式比较简单，使用 operator=，或者 assign 都可以

容量和大小操作：

- 判断是否为空 --- empty
- 返回元素个数 --- size
- 返回容器容量 --- capacity
- 重新指定大小 --- resize

插入和删除：尾插 尾删 插入删除清空

数据存取： 对 vector 中的数据的存取操作

- 迭代器 [] at() 获取 vector 中的元素
- front 返回第一个元素，back 最后一个。

互换容器 swap 可以使两个容器互换，可以达到实用的收缩内存效果

预留空间 reserve 减少 vector 在动态扩展容量时的扩展次数

逆序遍历 reverse_iterator 非质变算法

```c++

```

判断容器迭代器是否支持随机访问：

- 跳跃访问 itBegin += 3

## Deque 容器

### Deque 双端数组

可对头尾插入删除操作

### deque 与 vector 区别

- vector 对于头部的插入删除效率低，数据量越大，效率越低
- vector 访问元素时的速度会比 deque 快,这和两者内部实现有关
- deque 相对而言，对头部的插入删除速度回比 vector 快

### 工作原理

![img](./img/clip_image002-1547547642923.jpg)

内部工作原理：

deque 内部有个**中控器**，维护每段缓冲区中的内容，缓冲区中存放真实数据
中控器维护的是每个缓冲区的地址，使得使用 deque 时像一片连续的内存空间

- deque 容器的迭代器也是支持随机访问的

![img](./img/clip_image002-1547547896341.jpg)

- 构造 赋值 , 都一样，体现不出来区别。
- 大小操作 empty size resize

### 编辑

- 插入和删除提供的位置是迭代器，而不是迭代器的值
- 尾插 --- push_back
- 尾删 --- pop_back
- 头插 --- push_front
- 头删 --- pop_front

## Stack 栈容器

只有一个出口，先进后出 FILO,不能遍历

<div align = "center">
<div style="width:700px">

![img](./img/clip_image002-1547604555425.jpg)

</div>
</div>

- 入栈 进入数据 --- push
- 出栈 弹出数据 --- pop
- 返回栈顶 --- top
- 判断栈是否为空 --- empty
- 返回栈大小 --- size

## Queue 队列容器

正如 queue 字面意思，排队，先进先出 FIFO 没有遍历，有两个出口

<div align = "center">
<div style="width:700px">

![img](./img/clip_image002-1547606475892.jpg)

</div>
</div>

- 入队 往队尾添加元素 --- push
- 出队 从队头移除第一个元素 --- pop
- 返回队头元素 --- front
- 返回队尾元素 --- back
- 判断队是否为空 --- empty
- 返回队列大小 --- size

## List 列表容器

将数据进行链式存储，是一种物理单元上非连续的存储结构，数据元素的逻辑顺序通过链表中的指针链接实现
：

<div align = "center">
<div style="width:700px">

![img](./img/clip_image002-1547608564071.jpg)

</div>
</div>

- 链表 list 由一系列节点组成
  - 节点的组成：一个是存储数据元素的数据域，另一个是存储下一个节点地址的指针域
- STL 链表是双向循环链表

对外接口

- 构造、赋值、大小、重置大小、是否为空
- 反转 reverse 排序 sort
- 如果容器的迭代器支持随机访问，可以使用系统提供的标志算法
- 不支持随机访问的迭代器的容器，内部会提供对应的算法接口
- 对于自定义数据类型，必须要指定排序规则+
- 对自定义数据类型做了高级排序
- 如果利用 remove 删除自定义数据类型，需要重载

## set/multiset 容器（关联容器）

关联式容器：插入的时候已经帮助做好了排序,\* set/multiset 属于**关联式容器**，底层结构是用**二叉树**实现。

- set 里面不允许有重复元素，multiset 允许有重复元素
- lower_bound(keyElem);/返回第一个 key >= keyElem 元素的迭代器。
- upper_bound(keyElem);/返回第一个 key > keyElem 元素的迭代器。(下一个)
- equal_range(keyElem)),/返回容器中 key 与 keyElem 相等的上下限的两个迭代器 pair。

## pair 对组创建

- 成对出现的数据，利用对组可以返回两个数据

  `pair<type, type> p ( value1, value2 );`

  `pair<type, type> p = make_pair( value1, value2 );`

## map/multimap 容器

- 默认按照 key 从小到大排序
- 构造 赋值 大小交换 判断是否为空
- 查找和统计
- map 里面不允许有重复元素，multimap 允许有重复元素
- lower_bound(keyElem);/返回第一个 key >= keyElem 元素的迭代器。
- upper_bound(keyElem);/返回第一个 key > keyElem 元素的迭代器。(下一个)
- equal_range(keyElem)),/返回容器中 key 与 keyElem 相等的上下限的两个迭代器 pair。

```c++

```

```c++

```

## 迭代器

- iterator 普通迭代器
- reverse_iterator 反向(翻转)迭代器
- const_iterator 只读（常量）迭代器

### Callback function 回调函数

- One reason to use callbacks is to write generic code which is independent from the logic in the called function and can be reused with different callbacks，which passed to other functions as an argument to be called later in program execution

回调函数通过独立于函数的一般代码，可以被反复使用，在将来的程序执行时调用

```c++
// list 反转和排序专用回调函数,callback 时候，从大到小排列 val1 > val2。
bool myCompare(int val1, int val2) { return val1 > val2; }
// 回调函数在年龄相同的时候按照身高由大到小排列
bool ComparePerson(Person &p1, Person &p2) {
//定义回调函数
if (p1.m_Age == p2.m_Age) {
return p1.m_Height > p2.m_Height;
} else {
return p1.m_Age < p2.m_Age;
}
}

//加减法
int addTwoInts(int i, int j) { return i + j; }
int subtructTwoInts(int i, int j) { return i - j; }

```

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
