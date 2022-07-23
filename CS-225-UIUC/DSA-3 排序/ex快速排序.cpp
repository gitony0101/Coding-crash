// #define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

/*练手 快速排序
初始化数组
基准数分治递归思想
- 分治法 + 挖坑填数
  - 分治法：以`pivot`中轴思想为抓手
  - 打头挖坑作为基准数：
    - 从最右边开始找，找个比它小的放到左边的坑
    - 再从左边开始找，找个比它大的数，去填上一步右边的坑
https://blog.csdn.net/qq_45269116/article/details/105850709*/

//打印数组
void PrintArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
}
//初始化一个随机数组
void InitMyArr(int arr[], int length) {
  srand((unsigned)time(NULL));
  for (int i = 0; i < length; i++) {
    arr[i] = rand() % 100 + 1;
  }
}

//快速排序
void QuickSort(int arr[], int left, int right) {
  int i = left;       //定义开始下标
  int j = right;      //定义末尾下标
  int pivot = arr[i]; //取出第一个元素为基准数，并挖坑
  if (i < j) {        //限定条件，保证左标一直小于右标
    while (i < j) { //循环条件，每次只要左标还小于右标，那就往下循环。
                    // 是为了递归设定的吗？
      //从右向左开始找，找到第一个比基准数小的元素（准备放到左边去）
      while (i < j && pivot < arr[j]) {
        j--; //往前迭代下标
      }
      if (i < j) { //判断左标是否右边走i++

        arr[i] = arr[j]; //把在右边找到的比基准数小的这个数移到左边
        i++;             //左标往前走
      }
      //从左向右开始找，找到第一个比基准值大的元素（准备放到右边去）
      while (i < j && pivot > arr[i]) {
        i++; //往后迭代下标
      }
      if (i < j) {       //判断右标是否该往左边走j--
        arr[j] = arr[i]; //把在左边找到的比基准数大的数移到右边
      }
    }
    QuickSort(arr, left, i - 1);
    QuickSort(arr, i + 1, right);
  }
}

int main() {  //自定义创建随机数组并进行快速排序
  int length; // 定义数组长度
  printf("请输入一维数组大小：\n"); //单独写出来
  scanf("%d", &length);             //只负责输入
  int *Array = new int[length];
  //随机初始化的数组有点问题，可以自定固定数组
  //   int Array[] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
  //   int length = sizeof(Array) / sizeof(int);
  InitMyArr(Array, length);
  printf("未排序前的数组：\n");
  PrintArray(Array, length);
  printf("\n");
  printf("快速排序后的数组：\n");
  QuickSort(Array, 0, length - 1);
  PrintArray(Array, length);
  printf("\n");
  return 0;
}
