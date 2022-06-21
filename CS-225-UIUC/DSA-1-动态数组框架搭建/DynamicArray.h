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
/*
1、头文件三件套，防止头文件被重复包含
#ifndef XXX
#define XXX
 \\codes
#endif
2、 typedef并不多余，在写一系列相关的对 DYNAMICARRAY
结构体操作的函数时候如果没这个定义函数，则报错Unknown type
name'Dynamic_Array'
*/
