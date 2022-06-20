// #include <cstdio>
// #include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//引入定义好的头文件
#include "DynamicArray.h"
// using namespace std;

void testDynamicArr01() {
  //初始化动态数组
  Dynamic_Array *myArray = Init_Array(); //初始化并创建一个动态数组myArray
  for (int i = 0; i < 10; i++) {
    PushBack_Array(myArray, i);
  }
  Print_Array(myArray);
  //销毁 freespcae
  FreeSpace_Array(myArray);
}

int main(void) { testDynamicArr01(); }
