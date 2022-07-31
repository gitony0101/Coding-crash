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
#define MAX 10 //设定最大值
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

// https://www.youtube.com/watch?v=j-DqQcNPGbE&ab_channel=%E9%BB%84%E6%B5%A9%E6%9D%B0
//堆排序第二版
void swap(int arr[], int a, int b) { //交换函数
  int temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}

void heapify02(int arr[], int n, int i) {
  if (i >= n) { //防呆设计，也是递归函数出口
    return;
  }
  int lChild = 2 * i + 1;
  int rChild = 2 * i + 2;
  int max = i; //假设i是最大值
  if (lChild < n && arr[lChild] > arr[max]) {
    max = lChild;
  }
  if (rChild < n && arr[rChild] > arr[max]) {
    max = rChild;
  }
  if (max != i) {
    swap(arr, max, i);
    heapify02(arr, n, max);
  }
}

//堆排序第二版结束

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
  // heapSort(arr01, MAX);
  // PrintArray(arr01, MAX);
  heapify02(arr02, MAX, 0);
  PrintArray(arr02, MAX);
  return 0;
}
