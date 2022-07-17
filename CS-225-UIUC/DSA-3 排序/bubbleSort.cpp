// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime> // time专用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/timeb.h> //获得系统毫秒时间
using namespace std;
/*冒泡排序
冒泡排序见好就收改进版
*/

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
//冒泡排序见好就收改进版
void exBubbleSortFlag(int arr[], int length, int flag) {
  for (int i = 0; i < length && flag == 0;
       i++) { //如果同时flag还是0，说明这层循环没有排，进行
    flag = 1; //打上已经交换标记，认为外层循环已经已经排序好
    for (int j = 0; j < length - i - 1; j++) {
      if (arr[j] > arr[j + 1]) { //如果哪层循环没有排序好，需要标注flag=0
        flag = 0; //标注过后，外层循环下次继续，内存循环还要再排，
        Swap(&arr[j + 1], &arr[j]);
      }
    }
  }
}

//调用原版还是改进版
void whichBubbleSortToRun(int arr[], int length, int call) {
  if (call == 0) {
    printf("排序前\n");
    printArr(arr, MAX);
    long t_start = getSysTime();
    exBubbleSort01(arr, MAX);
    long t_end = getSysTime();
    printf("排序后\n");
    printArr(arr, MAX);
    printf("冒泡排序 %d 个元素所需时间:%lo ms\n", MAX, (t_end - t_start));
  }
  if (call == 1) {
    printf("排序前\n");
    printArr(arr, MAX);
    long t_start = getSysTime();
    exBubbleSortFlag(arr, MAX, 0);
    long t_end = getSysTime();
    printf("排序后\n");
    printArr(arr, MAX);
    printf("冒泡排序 %d 个元素所需时间:%lo ms\n", MAX, (t_end - t_start));
  }
}

int main() {
  //冒泡排序初始化随机数组
  int arr[MAX];
  srand((unsigned int)time(NULL)); //设定随机数种子
  printf("生成随机数组：\n");
  for (int i = 0; i < MAX; i++) {
    arr[i] = rand() % MAX;
  }
  //调用冒泡排序
  // printf("排序前\n");
  // printArr(arr, MAX);
  // long t_start = getSysTime();
  // exBubbleSort01(arr, MAX);
  // long t_end = getSysTime();
  // printf("排序后\n");
  // printArr(arr, MAX);
  // printf("冒泡排序 %d 个元素所需时间:%lo ms\n", MAX, (t_end - t_start));
  //冒泡排序见好就收改进版
  // printf("排序前\n");
  // printArr(arr, MAX);
  // long t_start = getSysTime();
  // exBubbleSortFlag(arr, MAX, 0);
  // long t_end = getSysTime();
  // printf("排序后\n");
  // printArr(arr, MAX);
  // printf("冒泡排序 %d 个元素所需时间:%lo ms\n", MAX, (t_end - t_start));
  // whichBubbleSortToRun(arr, MAX, 0);
  whichBubbleSortToRun(arr, MAX, 1);
  printf("\n");
  return 0;
}
