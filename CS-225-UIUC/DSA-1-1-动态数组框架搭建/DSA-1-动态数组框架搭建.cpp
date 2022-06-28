#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//引入定义好的头文件
#include "DynamicArray.h"
using namespace std;

void testDynamicArr01() {
  //初始化动态数组
  Dynamic_Array *myArray = Init_Array(); //初始化并创建一个动态数组myArray
  //打印容量
  printf("数组容量 %d\n数组大小%d\n", Capacity_Array(myArray),
         Size_Array(myArray));
  for (int i = 0; i < 30; i++) {
    PushBack_Array(myArray, i);
  }
  printf("数组容量 %d\n数组大小%d\n", Capacity_Array(myArray),
         Size_Array(myArray));
  Print_Array(myArray); //打印数组
  //删除
  RemoveByPos_Array(myArray, 0);    //删除第一个元素
  RemoveByValue_Array(myArray, 27); //删除数值27（第一个数值）
  Print_Array(myArray);             //删除过后再打印
                                    // 查找
  //   int pos = Find_Array(myArray, 5); // 找到第五个元素
  printf("查找到第 %d 个位置上元素为 %d。\n", 5, At_Array(myArray, 5));
  //销毁 freespcae
  FreeSpace_Array(myArray);
}

int main() { testDynamicArr01(); }
