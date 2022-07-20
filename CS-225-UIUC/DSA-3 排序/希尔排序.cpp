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
  int i, j, k;               //把循环变量先定义好
  do {
    increasement = increasement / 3 + 1; //循环第一步：确定分组的增量
    for (i = 0; i < increasement; i++) { //注意这步循环，你在哪里
      for (j = i + increasement; j < length; j += increasement) {
        //新的跨度:j += increasement，在这一步也通过这个跨度来实现了分组
        //但是光这样分组还不行，下面的循环里面还是要引进步长
        if (arr[j] < arr[j - increasement]) { //分组插入排序开始
          //如果当前数据元素比前一个小，进行插入排序
          //这里是 arr[j -increasement])，确保是分组的比较
          int temp = arr[j];
          for (k = j - increasement; k > 0 && temp < arr[k];
               k -= increasement) {
            arr[k + increasement] = arr[k];
          }
          arr[k + increasement] = temp;
        }
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
  //   printArr(arr02, MAX);
  //   shellSort(arr02, MAX);
  //   printArr(arr02, MAX);//测试希尔排序是否可用

  printf("\n");
  return 0;
}
