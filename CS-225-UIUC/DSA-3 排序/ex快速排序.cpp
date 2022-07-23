// #define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

/*练手 快速排序
初始化数组
基准数分治递归思想：
1．先从数列中取出一个数作为基准数。
2．分区过程，将比这个数大的数全放到它的右边，小于或等于它的数全放到它的左边。
3．再对左右区间重复第二步，直到各区间只有一个数。

坑填数
1．i =L; j = R; 将基准数挖出形成第一个坑a[i]。
2．j–由后向前找比它小的数，找到后挖出此数填前一个坑a[i]中。
3．i++由前向后找比它大的数，找到后也挖出此数填到前一个坑a[j]中。
4．再重复执行2，3二步，直到i==j，将基准数填入a[i]中。
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

int main() {  //自定义创建随机数组并进行快速排序
  int length; // 定义数组长度
  printf("请输入一维数组大小：\n"); //单独写出来
  scanf("%d", &length);             //只负责输入
  int *Array = new int[length];
  InitMyArr(Array, length);
  printf("未排序前的数组：\n");
  PrintArray(Array, length);
  printf("\n");
  return 0;
}
