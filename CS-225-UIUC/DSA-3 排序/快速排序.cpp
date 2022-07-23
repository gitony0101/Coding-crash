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
//快速排序 从小到大排序
void QuickSort(int arr[], int start, int end) {
  //初始化
  int i = start; //让i指向第一个下标，使用时开始是0，为什么不直接写0？
  int j = end;           //让j指向最后一下标，使用时结束时len-1
  int temp = arr[start]; //初始化基准数为第一个元素
                         //所有数都和基准数进行比较
  if (i < j) {           //确保i开始下标一直比j结束下标小
    while (i < j) {      //在i<j的情况下一直循环
      //从右向左 找比基准数小的数
      while (i < j && arr[j] >= temp) { // arr[j] >= temp 条件确保了在找
        j--;                            //
      }
      //填坑
      if (i < j) {
        arr[i] = arr[j]; //从右向左把坑填好了
        i++;
      }
      //从左向右 找比基准数大的数
    }
  }
}

int main() {
  int myArr[] = {4, 2, 8, 0, 5, 7, 1, 3, 9}; //直接要了个数组
  int len = sizeof(myArr) / sizeof(int); // 或者sizeof(myArr)/sizeof(myArr[0])
  PrintArray(myArr, len);
  QuickSort(myArr, 0, len); //调用快速排序
  printf("\n");
  return 0;
}
