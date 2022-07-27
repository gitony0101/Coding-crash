// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime> // time专用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/timeb.h> //获得系统毫秒时间
using namespace std;
/*
归并排序
先分后合，合并的过程也是排序的过程
https://www.bilibili.com/video/BV1Pt4y197VZ
三元表达式魔改
*/

#define MAX 15
//创建容量为MAX的一维随机数组
int *CreatArray() {
  int *arr = (int *)malloc(sizeof(int) * MAX);
  for (int i = 0; i < MAX; i++) {
    arr[i] = rand() % MAX + 1;
  }
  return arr;
}
//打印数组
void PrintArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

//合并魔改  三元表达式
void Merge(int arr[], int temp[], int left, int mid, int right) {
  //标记左右半区首尾元素
  int l_start = left;
  int r_start = mid + 1;
  int length = left; //初始化临时数组的下标
  //合并
  while (l_start <= mid && r_start <= right) { //魔改
    temp[length++] =
        arr[l_start] < arr[r_start] ? arr[l_start++] : arr[r_start++];
  }
  //合并左或者右半区剩余元素 上面合并的拆分版，仔细对照
  while (l_start <= mid) {
    temp[length++] = arr[l_start++];
  }
  while (r_start <= right) {
    temp[length++] = arr[r_start++];
  }
  //把临时数组中的元素复制回原来的数组，覆盖。
  while (left <= right) {
    arr[left] = temp[left];
    left++;
  }
};
//魔改完成

//归并排序
void MergeSort(int arr[], int temp[], int left, int right) {
  //排序数组，临时数组，左标，右标
  //如果只有一个元素，那么久不需要继续划分，本身有序，直接归并
  if (left < right) {
    int mid = (left + right) / 2;         //计算机整型整除,找中间点
    MergeSort(arr, temp, left, mid);      //递归划分左半区
    MergeSort(arr, temp, mid + 1, right); //递归划分右半区
    Merge(arr, temp, left, mid, right);   //合并已经排序的部分
  }
}
//

//归并排序入口
void exMergeSortPort(int arr[], int length) {
  //初始化数组并进行排序划分打印，辅助数组的分配和回收
  int *temp = (int *)malloc(sizeof(int) * MAX); //分配一个辅助的数组temp
  if (temp) { //另外一种写法，就是在说，如果这个是真，说明辅助数组temp分配成功
    MergeSort(arr, temp, 0, length - 1);
    free(temp);
  } else {
    printf("Error,failed to allocate memory.\n");
  }
}

int main() {
  int *arr = CreatArray();
  PrintArray(arr, MAX);
  exMergeSortPort(arr, MAX);
  printf("\n");
  PrintArray(arr, MAX);
  return 0;
}

/*//合并
void Merge01(int arr[], int temp[], int left, int mid, int right) {
  //标记左右半区首尾元素
  int l_start = left;
  int r_start = mid + 1;
  int length = left; //初始化临时数组的下标
  //合并
  while (l_start <= mid && r_start <= right) { //确保左右半区都有元素的情况下
    if (arr[l_start] < arr[r_start]) { //左区第一个元素更小的时候
      temp[length++] = arr[l_start++]; //赋值并递增继续比较
                                       // ！！可以用三元表达式！！
    } else {                           //右区第一个元素更小的时候
      temp[length++] = arr[r_start++]; //赋值并递增继续比较
    }
  }

  //合并左或者右半区剩余元素 上面合并的拆分版，仔细对照
  while (l_start <= mid) {
    temp[length++] = arr[l_start++];
  }
  while (r_start <= right) {
    temp[length++] = arr[r_start++];
  }
  //把临时数组中的元素复制回原来的数组，覆盖。
  while (left <= right) {
    arr[left] = temp[left];
    left++;
  }
};*/
