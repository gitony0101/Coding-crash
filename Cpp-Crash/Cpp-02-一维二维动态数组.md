# C++ 编程笔记 02

# 数组

一段连续的内存空间

- 静态数组：需要指定数组元素的个数，使用多大的内存空间
  - 一维数组
  - 二维数组
- 动态数组：软件运行过程中，可以根据需要动态的增加或减少数组的元素个数
> 动态内存分配问题

数组特点：
- 放在一块连续的内存空间中
- 数组中每个元素都是相通的数据类型

## 一维数组

1. `数据类型 数组名[ 数组长度 ];`
2. `数据类型 数组名[ 数组长度 ] = { 值1，值2 ...};` # 把值也标出来
3. `数据类型 数组名[ ] = { 值1，值2 ...};` # 长度可以自己推测出来，电脑会查

> 注意： 数组从零开始，命名要规范，不要和变量重名

### 创建一维随机数组



- 方法1 new方法创建随机数组，
  - 打印函数略，使用了`scanf`
```c++
void InitMyArr(int arr[], int length) {
  srand((unsigned)time(NULL));
  for (int i = 0; i < length; i++) {
    arr[i] = rand() % 100 + 1;
  }
}
//创建并打印，这是个及物函数 int *Array = new int[length]是核心
void InitPrintArrInput() {
  int length;
  printf("请输入一维数组大小：\n"); //单独写出来
  scanf("%d", &length);             //只负责输入
  int *Array = new int[length];     //注意这里用的是new
  InitMyArr(Array, length);
  PrintArray(Array, length);
}

```


- 方法2 预设长度，malloc创建空间往里填充数据

```c++
#define MAX 10// 预设最大数组长度
//开辟内存空间创建一维随机数组
int *CreateArray() {
  srand((unsigned)time(NULL));
  int *arr = (int *)malloc(sizeof(int) * MAX);
  for (int i = 0; i < MAX; i++) {
    arr[i] = rand() % MAX;
  }
  return arr;
}
void exPrintArrMAX() {
  int *arr = CreateArray(); //注意形式
  PrintArray(arr, MAX);
}

```

## 二维数组

在一维数组的基础上增加了一个维度

定义方式：

1. `数据类型 数组名[ 行数 ][ 列数 ];`
2. `数据类型 数组名[ 行数 ][ 列数 ] = { {数据1，数据2 } ，{数据3，数据4 } };` 最直观，提高了代码可读性，推荐
3. `数据类型 数组名[ 行数 ][ 列数 ] = { 数据1，数据2，数据3，数据4};`
4. ` 数据类型 数组名[ ][ 列数 ] = { 数据1，数据2，数据3，数据4};`这个有点意思，但是不推荐，行数可以省去，列数不能省去






嵌套循环打印二维数组矩阵
- 换行换行，肯定是在行那里回车啊

## 动态数组

### 动态内存分配问题

#### 需要用到的几个头文件




`stdlib.h`

`malloc(size_t size)` // ，malloc蜂窝煤机器，内存就是煤堆，括号内表示要分配的内存大小

`calloc(size_t nmemb, size_t size)` // 括号内表示要分配的内存个数以及每个内存大小

`realloc(void *ptr, size_t size)` // 扳手，根据不同的情况开辟不同大小的内存，调整内存，但是**有时候返回的内存地址会不一样**

`free(void *ptr)` // 括号内表示要释放的内存地址

动态一维数组：`int *arr`,和静态一样，一条内存空间
动态二维数组：`int **parr`第一维是一列指针数组，分别指向第二维各自的内存空间
 - 两层嵌套
三维数组`int ***parr`,想清楚，第一维是指针数组指向的是一个二维指针数组，第二维指向的是一个一维数组
- 三层嵌套
>以此类推

`XXX/可能有* newSPace = (XXX *)malloc(sizeof(XXX)); // 这是一个公式`

```c++
//申请内存 malloc开辟
Dynamic_Array *myArray = (Dynamic_Array *)malloc(sizeof(Dynamic_Array));

// 给链表开辟内存
  LinkList *list = (LinkList *)malloc(sizeof(LinkList));
```

###  [new和malloc的区别](https://www.cnblogs.com/qg-whz/p/5140930.html)


|  特征  |  `new/delete`  |  `malloc/free`  |
|:--:|:--:|:--:|
|  内存分配位置  | 自由存储区   |堆    |
|   内存分配失败 | 抛出异常   |返回`NULL`    |
| 内存分配大小   | 编译器根据类型计算得出 |显示指定字节数    |
|  属性  |  C++关键字   |  库函数  |
| 使用   | 申请空间需要表明申请内存大小   |  无需标明内存大小  |
|  返回类型  |  对象类型指针  |  符合类型安全性的操作符  |
| 处理数组   |对应版本`new[]` |需要用户计算数组大笑后进行内存分配    |
|已分配内存再扩张    |  不支持  |支持，`realloc`    |
| 分配内存时内存不足   |  可以指定处理函数或重新制定分配器  | 无法通过用户代码进行处理   |
| 是否可以重载   | 是   |  否 |
|  构造函数与析构函数|  调用  | 不调用   |

- malloc给你的就好像一块原始的土地，你要种什么需要自己在土地上来播种
- new帮你划好了田地的分块（数组），帮你播了种（构造函数），还提供其他的设施给你使用

> 趋势： [std::make_unique](https://vivym.gitbooks.io/effective-modern-cpp-zh/content/SmartPointers/21-Prefer-std-make_unique-and-std-make_shared-to-direct-use-of-new.html)多，**智能指针比较符合现代C++，安全性高**，一般不建议用new或者malloc








## 小结

创建数组，创建什么样的数组，是对数组和函数的综合运用
