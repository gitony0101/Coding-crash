#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//引入定义好的头文件
#include "DynamicArray.h"
using namespace std;

/*报错问题未解决：
DSA-1-动态数组框架搭建
clang++ DSA-1-动态数组框架搭建.cpp DynamicArray.cpp -o DSA-1-动态数组框架搭建
./DSA-1-动态数组框架搭建
*/

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
  Print_Array(myArray);
  //销毁 freespcae
  FreeSpace_Array(myArray);
}

int main() { testDynamicArr01(); }
