# DSA-1-1 线性表顺序存储 动态数组框架搭建



1. 当插入一个新的元素的时候，这个时候发现空间不足？
2. 申请一块更大的内存空间,将原空间的数据拷贝到新的空间
3. 释放旧的空间
4. 把元素放入新的空间

## 编写框架步骤

1. 编写动态数组`.h`头文件
2. 编写动态数组`.cpp`源文件
3. 编写输出函数(main.cpp)
4. 编写makefile文件
- 关于debug编译，另参阅tasks/launch json文件编译教程
- 此次创建的是int类型的动态数组框架



# 框架编写记录

> 每一步这么细致是为了比较每次编写的不同和改进，这就是写代码的思路

## `.h`头文件暨`.cpp`源文件框架

- 防止头文件被包含，引入标准库
- 创建用到的结构体
  - 线性表（数组、链表）结构体
    - 结点结构体
  - 功能函数结构体  **这里写的是多态，还需在输出函数中定义功能细节，你无法定义的信息，交给用户去定义，写好多态，复用后人的函数** 
    - 打印函数指针 
    - 对比（比较）函数指针
  - 定义需要的宏 `#define XXX_TRUE 1 / XXX_FALSE 0`等等

- 初始化线性表（数组、链表）：`XXXList *Init_XXXList()`
- 编写功能函数（以线性表为例）:
  
    1. 插入结点
    2. 删除结点：按位置、按值（要用到比较回调函数）
    3. 查找结点：按值（要用到比较回调函数）
    4. 返回容量大小
    5. 返回首结点
    6. 打印
    7. 释放内存





## 1 创建 头文件 `DynamicArray.h`

- 动态增长内存：策略：将内存放到堆上
- 动态数组 如果当前有n个元素，目前要再插进去一个元素
  - 所以我们 申请内存 拷贝数据 释放内存


```c++
#ifndef DYNAMIC_ARRAY_H //防止头文件被重复包含
#define DYNAMIC_ARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//创建动态数组结构体
typedef struct DYNAMICARRAY { // typedef 不多余
  int *pAddr;                 // 数据存放地址
  int size;                   // 当前有多少个元素
  int capacity;               //容量，容器当前能容纳多少元素
} Dynamic_Array;              // 第三种方法创建结构体
//写一系列相关的对 DYNAMICARRAY 结构体操作的函数；
// 1、初始化结构体，不需要任何参数，创建过后，Dynamic_Array指向DYNAMICARRAY内存空间
Dynamic_Array *Init_Array(); // 很重要，调用的时候要写到函数中的
// 2、插入
void PushBack_Array(Dynamic_Array *arr, int value); // PushBack 这么写好看
// 3、删除 情况：根据值删除和根据位置删除
void RemoveByPos_Array(Dynamic_Array *arr, int pos);
void RemoveByValue_Array(Dynamic_Array *arr, int value);

// 4、查找 int类型
int Find_Array(Dynamic_Array *arr, int value);
// 5、 打印
void Print_Array(Dynamic_Array *arr);
// 6、 释放动态数组的内存
void FreeSpace_Array(Dynamic_Array *arr); //释放内存地址
//再有新的功能可以继续增加
// 7、 清空数组
void Clear_Array(Dynamic_Array *arr);
// 8、获得动态数组容量
int Capacity_Array(Dynamic_Array *arr);
// 9、 获得动态数组当前元素个数
int Size_Array(Dynamic_Array *arr);
//根据位置获得某个位置元素
int At_Array(Dynamic_Array *arr, int pos);
#endif
```

- typedef并不多余，在写一系列相关的对 DYNAMICARRAY结构体操作的函数时候如果没这个定义函数，则报错Unknown typename'Dynamic_Array'
- capacity 表示当前内存空间一共可以存放多少元素
- size 记录当前数组中的具体元素个数
- 再有新的功能可以继续增加
- 头文件三件套，防止头文件被重复包含:

    ```c++
    #ifndef XXX
    #define XXX
    /*Codes*/
    #endif
    ```
## 2 写声明 `DynamicArray.cpp`

把头文件复制粘贴过来，用花括号把每个函数先打开

1. 引入头文件`"DynamicArray.h"`
2. 把花括号都加上
   - 需要初始化的先`retrun NULL;`
   - 需要输出值的先`return 0;`
   - >最后编写完成运行前要认真检查所有return最后的返回值是否合理

```c++
#include "DynamicArray.h" // 把对应头文件引入进来

Dynamic_Array *Init_Array() { //初始化，需要默认返回NULL
  return NULL;
}

// 2、插入
void PushBack_Array(Dynamic_Array *arr, int value){

};
// 3、删除 情况：根据值删除和根据位置删除
void RemoveByPos_Array(Dynamic_Array *arr, int pos){

};
void RemoveByValue_Array(Dynamic_Array *arr, int value){

};

// 4、查找 int类型
int Find_Array(Dynamic_Array *arr, int value) {
  return 0; //需要写默认值返回0
};
// 5、 打印
void Print_Array(Dynamic_Array *arr){

};
// 6、 释放动态数组的内存
void FreeSpace_Array(Dynamic_Array *arr){

};

//再有新的功能可以继续增加
// 7、 清空数组
void Clear_Array(Dynamic_Array *arr){

};
// 8、获得动态数组容量
int Capacity_Array(Dynamic_Array *arr) {
  return 0; //需要写默认值返回0
};
// 9、 获得动态数组当前元素个数
int Size_Array(Dynamic_Array *arr) {
  return 0; //需要写默认值返回0
};
// 10、根据位置获得某个元素位置
int At_Array(Dynamic_Array *arr, int pos) {
  return arr->pAddr[pos]; //一开始需要写默认值返回0
  //此处不用再判断报错，如果返回值无效直接越界
};

```

### 壳已经写完了，下面开始写函数的实现，先从简单的5-10开始写

```c++
// 5、 打印
void Print_Array(Dynamic_Array *arr) {
  for (int i = 0; i < arr->size; i++) {
    printf("%d ", arr->pAddr[i]);
  }
  printf("\n");
};
// 6、 释放动态数组的内存
void FreeSpace_Array(Dynamic_Array *arr) { //先释放内部内存，再释放外面的
  if (arr == NULL) {                       //首先判断是否指针为空
    return;
  }
  if (arr->pAddr != NULL) {
    free(arr->pAddr);
  }
  free(arr);
};

//再有新的功能可以继续增加
// 7、 清空数组
void Clear_Array(Dynamic_Array *arr) {
  if (arr == NULL) { //首先判断是否指针为空
    return;
  }
  // pAddr -> 空间
  arr->size = 0; //直接等于0即可清空
};
// 8、获得动态数组容量
int Capacity_Array(Dynamic_Array *arr) {
  if (arr->capacity == 0) { //首先判断是否指针为空
    return 0;
  }
  return arr->capacity; //一开始需要写默认值返回0
};
// 9、 获得动态数组当前元素个数
int Size_Array(Dynamic_Array *arr) {
  if (arr == NULL) {
    return 0;
  } //需要写默认值返回0
  return arr->size;
};
// 10、根据位置获得某个元素位置
int At_Array(Dynamic_Array *arr, int pos) {
  if (arr == NULL) {
    return 0;
  }
  return arr->pAddr[pos]; //一开始需要写默认值返回0
};


```

每次都要判断一下当前线性表是否为NULL或者data值是否为零：
```c++
 if (arr == NULL) {
    return 0;
  } //需要写默认值返回0
  //或者：
  if (arr->capacity == 0) { //首先判断是否指针为空
    return 0;
  }

```

## 下面写增删改查

### 插入

```c++

// 2、插入
void PushBack_Array(Dynamic_Array *arr, int value) {
  if (arr == NULL) { //首先判断是否指针为空
    return;
  }
  //判断空间是否足够
  if (arr->size == arr->capacity) { //判断是否空间已经满了
                                    //第一步 申请一块更大的空间
    int *newSpace = (int *)malloc(sizeof(int) * arr->capacity *
                                  2); //默认新空间是旧空间的两倍
    //第二步 拷贝数据到新的空间
    // memcpy(),目标空间，原空间，空间大小为新的空间大小，注意乘以sizeof
    memcpy(newSpace, arr->pAddr, arr->capacity * sizeof(int));
    //第三步，释放旧空间的内存
    free(arr->pAddr);
    //第四步 更新容量和指针指向
    arr->capacity = arr->capacity * 2;
    arr->pAddr = newSpace; //内存指向新空间，至此新空间开辟完成
  }
  //插入新元素 从尾部插入
  arr->pAddr[arr->size] = value; //最后一位就是pos[arr->size],赋值value
  arr->size++;                   //记得要累加这个size
};
```

- 内置函数`memcpy()`,目标空间，原空间，空间大小为新的空间大小，注意乘以sizeof
- `int *newSpace = (int *)malloc(sizeof(int) * arr->capacity *2);` //默认新空间是旧空间的两倍
- 增加一个元素，每次都要size++

### 删除

情况：根据位置删除和根据值删除

- 关于位置删除算法：
  - 比如一列数组：{1,2,3,4,5,6,7,8,9,10}
  - 我删除了第7个元素，然后后面的8、9、10往前移

```c++
// 3、删除 情况：根据位置删除和根据值删除
// 3.1、根据位置删除
void RemoveByPos_Array(Dynamic_Array *arr, int pos) {
  if (arr == NULL) { //首先判断是否指针为空
    return;
  }
  //其次判断位置是否有效
  if (pos < 0 || pos >= arr->size) {
    return;
  }
  //删除元素的指令
  for (int i = pos; i < arr->size - 1; i++) {
    arr->pAddr[i] = arr->pAddr[i + 1]; //向前覆盖了
  }
  arr->size--; //往前缩进一位
};

```

 根据值删除，首先还是先找到位置，然后嵌套根据位置删除
 - 但是这是删除的value第一次出现的那个位置上的值



### 查找

这里其实是复制了上面的查找过程，其实可以变换一下

> 所以这个编程问题，第一，我们可以先解决查找的函数，然后按顺序调用查找函数解决按位置删除，接着是嗲用查找和按位置删除去写按照数值删除，

所以我们改变一下顺序，把查找代码和删除代码放在一起输出：

```c++
// 4、查找 int类型
int Find_Array(Dynamic_Array *arr, int value) {
  if (arr == NULL) {
    return -1; //返回-1说明出错
  }
  //找到值的位置
  int pos = -1; //初始化位置值为-1防止误操作
  for (int i = 0; i < arr->size; i++) {
    if (arr->pAddr[i] == value) {
      pos = i; //找到了这个位置，赋值给pos
      break;   //停止查找了
    }
  }
  return pos;
};

// 3、删除 情况：根据位置删除和根据值删除
// 3.1、根据位置删除
void RemoveByPos_Array(Dynamic_Array *arr, int pos) {
  if (arr == NULL) { //首先判断是否指针为空
    return;
  }
  //其次判断位置是否有效
  if (pos < 0 || pos >= arr->size) {
    return;
  }
  //删除元素的指令
  for (int i = pos; i < arr->size - 1; i++) {
    arr->pAddr[i] = arr->pAddr[i + 1]; //向前覆盖了
  }
  arr->size--; //往前缩进一位
};
// 3.2、 根据值删除
// 注意；这只是删除的value第一次出现的那个位置上的值
void RemoveByValue_Array(Dynamic_Array *arr, int value) {
  if (arr == NULL) {
    return;
  }

  int pos = Find_Array(arr, value); //嵌套上面的查找函数
  //嵌套根据位置删除
  RemoveByPos_Array(arr, pos); //嵌套上面的按照位置删除
};

```

注意这两次嵌套：
```c++
  int pos = Find_Array(arr, value); //嵌套上面的查找函数
  //嵌套根据位置删除
  RemoveByPos_Array(arr, pos); //嵌套上面的按照位置删除
```
这种优化代码的思想要有。







## 小结

1. 我们整个数组的搭建，都是在维护最初定义的结构体：
```c++
typedef struct DYNAMICARRAY { 
  int *pAddr;                 // 数据存放地址
  int size;                   // 当前有多少个元素
  int capacity;               //容量，容器当前能容纳多少元素
} Dynamic_Array;              // 第三种方法创建结构体
```
> 我们在写函数的时候都是在围绕结构体增加各种操作 
>
> 优化代码的思想：嵌套函数结构体，但是要按照实际情况去考虑
