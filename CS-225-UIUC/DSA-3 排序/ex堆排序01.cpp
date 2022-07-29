// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime> // time专用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/timeb.h> //获得系统毫秒时间
using namespace std;
/*堆排序ex
维护堆的性质
比较一下性能
https://github.com/imxtx/algorithms/blob/main/01-sort/05-heap/heap.c
*/
#define MAX 15 //设定最大值
//准备  从小到大
//打印数组
void PrintArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
//交换函数
void Swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
//创建堆 并且 大顶堆？
void heapify(int arr[], int length, int i) {
  int largest = i;
  int lChild = i * 2 + 1;
  int rChild = i * 2 + 2;
  if (lChild < length && arr[largest] < arr[lChild]) {
    largest = lChild;
  }
  if (rChild < length && arr[largest] < arr[lChild]) {
    largest = rChild;
  }
  if (largest != i) {
    Swap(&arr[largest], &arr[i]);
    heapify(arr, length, largest);
  }
}

//堆排序入口
void heapSort(int arr[], int length) {
  int i;
  //建堆
  for (i = length / 2 - 1; i >= 0; i--) {
    heapify(arr, length, i);
  }
  //排序
  for (i = length - 1; i > 0; i--) {
    Swap(&arr[i], &arr[0]);
    heapify(arr, i, 0);
  }
}
int main() {
  //初始化随机数组
  int length = MAX;
  int arr01[length];
  int arr02[length];
  srand((unsigned int)time(NULL)); //设定随机数种子
  for (int i = 0; i < length; i++) {
    int randNum = rand() % length;
    arr01[i] = randNum;
    arr02[i] = randNum;
  };
  PrintArray(arr01, MAX);
  printf("\n堆排序\n");
  heapSort(arr01, MAX);
  PrintArray(arr01, MAX);
  return 0;
}
