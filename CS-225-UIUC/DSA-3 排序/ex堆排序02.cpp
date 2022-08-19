// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime> // time专用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/timeb.h> //获得系统毫秒时间
using namespace std;
/*堆排序ex02
https://www.bilibili.com/video/BV1P64y1U7HY?share_source=copy_pc
*/
#define MAX 15 //设定最大值
//准备  从小到大
//初始化一个随机数组
void InitMyArr(int arr[], int length) {
  srand((unsigned)time(NULL));
  for (int i = 0; i < length; i++) {
    arr[i] = rand() % 10 + 1;
  }
}
//打印数组
void PrintArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
//交换函数
void swap(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}
// heapify 二叉堆的顺序存储
void heapify(int arr[], int length, int i) {
  int largest = i;
  int lChild = 2 * i + 1;
  int rChild = 2 * i + 2;
  if (lChild < length && arr[largest] < arr[lChild]) {
    largest = lChild;
  }
  if (rChild < length && arr[largest] < arr[rChild]) {
    largest = rChild;
  }
  //如果这两个情况都不是，说明这俩情况都不用调整,说明
  if (largest != i) {
    swap(arr[largest], arr[i]);
    heapify(arr, length, largest);
    //若果发生了交换，下一个子树会造成不平衡,并且是在largest处不平衡，后面饿子树要递归进行交换
  }
}
//堆排序
void heapSort(int arr[], int length) {
  int i;
  //创建堆
  for (i = length / 2 - 1; i >= 0; i--) {
    heapify(arr, length, i);
  }
  //堆排序
  for (i = length - 1; i > 0; i--) {
    swap(arr[i], arr[0]);
    heapify(arr, i, 0);
  }
}

int main() {
  int length = MAX;
  int *myArr = new int[length];
  InitMyArr(myArr, length);
  printf("随机数组：\n");
  PrintArray(myArr, length);
  //堆排序
  heapSort(myArr, length);
  printf("\n对排序后数组:\n");
  PrintArray(myArr, length);
  printf("\n");
  return 0;
}
