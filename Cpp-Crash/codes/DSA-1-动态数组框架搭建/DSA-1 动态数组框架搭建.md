# DSA-1 动态数组框架搭建

黑马 DSA C++

1. 当插入一个新的元素的时候，这个时候发现空间不足？
2. 申请一块更大的内存空间,将原空间的数据拷贝到新的空间
3. 释放旧的空间
4. 把元素放入新的空间

## 1 创建 头文件 `DynamicArray.h`

```c++
#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
动态增长内存：策略：将内存放到堆上
动态数组 如果当前有n个元素，目前要再插进去一个元素，所以我们 申请内存 拷贝数据
释放内存
capacity 表示当前内存空间一共可以存放多少元素
size 记录当前数组中的具体元素个数
*/

typedef struct DYNAMICARRAY { // typedef 不多余
  int *pAddr;                 // 数据存放地址
  int size;                   // 当前有多少个元素
  int capacity;               //容量，容器当前能容纳多少元素
} Dynamic_Array;              // 第三种方法创建结构体
//写一系列相关的对 DYNAMICARRAY 结构体操作的函数；
// 1、初始化结构体，不需要任何参数，创建过后，Dynamic_Array指向DYNAMICARRAY内存空间

Dynamic_Array *Dynamic_Array_Init();
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

#endif
```

- 再有新的功能可以继续增加
- 头文件三件套，防止头文件被重复包含
```c++
#ifndef XXX
#define XXX
 \\codes
#endif
```

- typedef并不多余，在写一系列相关的对 DYNAMICARRAY结构体操作的函数时候如果没这个定义函数，则报错Unknown typename'Dynamic_Array'

## 2 写声明 `DynamicArray.c`

1. 引入头文件`"DynamicArray.h"`
2. 把花括号都加上
   - 需要初始化的先`retrun NULL;`
   - 需要输出值的先`return 0;`

3. 开始写函数，从初始化开始写

```cpp
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
//根据位置获得某个位置元素
int At_Array(Dynamic_Array *arr, int pos) {
  return 0; //需要写默认值返回0
};


```

### 壳已经写完了，下面开始写函数的实现，先从简单的5-10开始写

```cpp
#include "DynamicArray.h" // 把对应头文件引入进来
#include <stdio.h>
#include <stdlib.h>

Dynamic_Array *Init_Array() { //动态数组初始化
  //申请内存 malloc开辟
  Dynamic_Array *myArray = (Dynamic_Array *)malloc(sizeof(Dynamic_Array));
  //初始化 地址addr、元素个数size、容量capacity
  myArray->capacity = 20; //初始化容量，给20个空间
  myArray->size = 0;      //初始化元素个数为零
  myArray->pAddr = (int *)malloc(
      sizeof(int) * myArray->capacity); //开辟内存空间，用整型大小乘以capacity
  return myArray; //一开始没写好的时候这里先默认NULL
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

> 每一步这么细致是为了比较每次编写的不同和改进，这就是写代码的思路

每次都要判断一下当前内存情况是否不足或者值是否为零：
```cpp
 if (arr == NULL) {
    return 0;
  } //需要写默认值返回0
  //或者：
  if (arr->capacity == 0) { //首先判断是否指针为空
    return 0;
  }

```

### 下面写增删改

```c++

```

```c++

```




