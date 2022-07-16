// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime> // time专用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/timeb.h> //获得系统毫秒时间
using namespace std;
/*冒泡排序*/

//获得系统毫秒时间
long getSysTime() {
  struct timeb tb;
  ftime(&tb);
  return tb.time * 1000 + tb.millitm;
}

#define MAX 10 // 设定数组最大值,目前测时间10000足¨够，多了会慢
//交换函数
void Swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
//打印函数
void printArr(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");
}
//冒泡排序
void exBubbleSort01(int arr[], int length) { //冒泡排序
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        Swap(&arr[j + 1], &arr[j]);
      }
    }
  }
}

int main() {
  int arr[MAX];
  srand((unsigned int)time(NULL)); //设定随机数种子
  printf("生成随机数组：\n");
  for (int i = 0; i < MAX; i++) {
    arr[i] = rand() % MAX;
  }
  printf("排序前\n");
  printArr(arr, MAX);
  long t_start = getSysTime();
  exBubbleSort01(arr, MAX);
  long t_end = getSysTime();
  printf("排序后\n");
  printArr(arr, MAX);
  printf("冒泡排序 %d个元素所需时间:%lo ms\n", MAX, (t_end - t_start));

  printf("\n");
  return 0;
}
