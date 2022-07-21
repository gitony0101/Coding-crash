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
//快速排序
void QuickSort(int arr[], int start, int end) {}

int main() {
  int myArr[] = {4, 2, 8, 0, 5, 7, 1, 3, 9}; //直接要了个数组
  int len = sizeof(myArr) / sizeof(int); // 或者sizeof(myArr)/sizeof(myArr[0])
  PrintArray(myArr, len);
  printf("\n");
  return 0;
}
