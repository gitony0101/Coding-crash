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
选择排序
*/
#define MAX 10000

//获得系统毫秒时间
long getSysTime() {
  struct timeb tb;
  ftime(&tb);
  return tb.time * 1000 + tb.millitm;
}

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
//选择排序 减少了交换次数
void selectSort(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    int min = i; //有可能这个地方时是最小了
    for (int j = i + 1; j < length; j++) {
      if (arr[j] < arr[min]) {
        min = j; //更新下标为j
      }          //循环完毕后，min应该取到的是最小值的下标
    }
    if (min != i) {
      Swap(&arr[min], &arr[i]);
    }
  }
}

//把优化版冒泡排序拿来对比

void exBubbleSortFlag(int arr[], int length) {
  int flag = 0;
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

int main() {
  //冒泡排序初始化随机数组
  int length = MAX;
  int arr01[length];
  int arr02[length];
  srand((unsigned int)time(NULL)); //设定随机数种子
  for (int i = 0; i < length; i++) {
    int randNum = rand() % length;
    arr01[i] = randNum;
    arr02[i] = randNum;
  };
  //选择排序
  // printf("排序前\n");
  // printArr(arr01, length);
  long t_start01 = getSysTime();
  selectSort(arr01, length);
  long t_end01 = getSysTime();
  // printf("排序后\n");
  // printArr(arr01, length);
  printf("选择排序 %d 个元素所需时间:%lo ms\n", MAX, (t_end01 - t_start01));
  //冒泡改进
  // printf("排序前\n");
  // printArr(arr02, length);
  long t_start02 = getSysTime();
  exBubbleSortFlag(arr02, length);
  long t_end02 = getSysTime();
  // printf("排序后\n");
  // printArr(arr02, length);
  printf("改进见好就收版冒泡排序 %d 个元素所需时间:%lo ms\n", MAX,
         (t_end02 - t_start02));

  printf("\n");
  return 0;
}

/*
int *func(int length){
    int *arr = (int*)malloc(sizeof(int)*length);
    for (int i = 0; i < length; ++i) {
        arr[i] = i;
    }
    return arr;
}*/
