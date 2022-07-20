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
希尔排序Shell Sort
*/

#define MAX 10

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

//希尔排序

void shellSort(int arr[], int length) {
  int increasement = length; //初始化，先让增量等于数组全长
  int i, j;                  //把循环变量先定义好
  do {
    increasement = increasement / 3 + 1; //循环第一步：确定分组的增量
    for (i = 0; i < increasement; i++) { //注意这步循环，你在哪里
      for (j = i + increasement; j < length; j += increasement) {
        //新的跨度:j += increasement
      }
    }
  } while (increasement > 1); //当 increasement > 1后，推出循环
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

  printf("\n");
  return 0;
}
