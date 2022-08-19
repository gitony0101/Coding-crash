// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

/*
快速排序 基准数分治递归思想
*/

//打印数组
void PrintArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
}
//快速排序  从小到大排序
void QuickSort(int arr[], int start, int end) { // start和end使用时都要赋值首尾
  //初始化
  int i = start;         //让i指向第一个下标，使用时开始是0
  int j = end;           //让j指向最后一下标，使用时结束时len-1
  int temp = arr[start]; //初始化基准数为第一个元素
                         //所有数都和基准数进行比较
  if (i < j) {           //确保i开始下标一直比j结束下标小
    while (i < j) {      //在i<j的情况下一直循环
      //从右向左 找比基准数小的数
      while (i < j && arr[j] >= temp) { // arr[j] >= temp 条件确保了在找
        j--; //右标往左退一位，准备下一步赋值填坑
      }
      //填坑
      if (i < j) {
        arr[i] = arr[j];
        i++;
      }
      //从左向右 找比基准数大的数
      while (i < j && arr[i] < temp) {
        i++; //左标往右进一位，准备下一步填坑
      }
      //填坑
      if (i < j) {
        arr[j] = arr[i];
        j--;
      }
    } //此处while外层循环推出，因为找到了基准数的位置
      // 此时i=j，左右标重合了
    arr[i] = temp; // 把基准数放到它的位置上，arr[j]也行，因为此时他们重合了
    QuickSort(arr, start, i - 1); //对基准数左半部分进行递归快排. j-1也行，同上
    QuickSort(arr, i + 1, end); //对基准数右半部分进行递归快排. j-1也行，同上
  }
}

int main() {
  int myArr[] = {4, 2, 8, 0, 5, 7, 1, 3, 9}; //直接要了个数组
  int len = sizeof(myArr) / sizeof(int); // 或者sizeof(myArr)/sizeof(myArr[0])
  printf("排序前数组\n");
  PrintArray(myArr, len);
  QuickSort(myArr, 0, len - 1); //调用快速排序
  printf("\n快速排序后的数组\n");
  PrintArray(myArr, len);
  printf("\n");
  return 0;
}
