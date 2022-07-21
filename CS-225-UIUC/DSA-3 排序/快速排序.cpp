// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//打印数组
void PrintArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
}
//快速排序 从小到大
void QuickSort(int arr[], int start, int end) {
  //初始化
  int i = start;         //让i指向第一个下标
  int j = end;           //让j指向最后一下标
  int temp = arr[start]; //初始化基准数为第一个元素
                         //所有数都和基准数进行比较
  if (i < j) {           //确保i开始下标一直比j结束下标小
    while (i < j) {      //为了确保挖坑填数，重复了一遍i<j
                         //开始填坑
    }
  }
}

int main() {
  int myArr[] = {4, 2, 8, 0, 5, 7, 1, 3, 9}; //直接要了个数组
  int len = sizeof(myArr) / sizeof(int); // 或者sizeof(myArr)/sizeof(myArr[0])
  PrintArray(myArr, len);
  printf("\n");
  return 0;
}
