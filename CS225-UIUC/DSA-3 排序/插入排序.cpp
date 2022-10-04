// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime> // time专用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/timeb.h> //获得系统毫秒时间
using namespace std;

/*插入排序 希尔排序的基础
> 将无序的序列插入到有序的序列中
- 从局部循环到全部，二分法
> 插入排序在序列基本有序效率高，或者数据序列元素比较少
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
void InsertSort(int arr[], int length) {
  int j;
  for (int i = 1; i < length; i++) { //开始循环
    if (arr[i] < arr[i - 1]) { //如果当前数据元素比前一个小，进行插入排序
      int temp = arr[i]; //先创建缓存变量把当前元素缓存下来

      for (j = i - 1; j >= 0 && temp < arr[j]; j--) { // 从i-1的位置倒着来
        //再往前找比当前元素小的数据元素，只要temp元素小于往前寻找的元素，就继续往前找
        arr[j + 1] = arr[j]; //往前移动的实现
      } //之所以能够j--，是因为外层循环在一直扩大，所以能够有空间让j--
        // 这也是插入排序的重点：动态思想，把一个序列分成有序的无序的两个序列，通过i++循环壮大有序序列，吸收（减小，j--)无序序列。
      //上面的循环在条件内循环结束后，才有了下面的赋值
      arr[j + 1] = temp; //就是比较过后，j后面那个位置，最后剩下给temp的位置
    }
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
  printArr(arr01, MAX);
  InsertSort(arr01, MAX);
  printArr(arr01, MAX);
  printf("\n");
  return 0;
}
