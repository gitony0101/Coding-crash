// #define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

/*练手 快速排序
初始化数组
基准数分治递归思想
- 分治法 + 挖坑填数
  - 分治法：以`pivot`中轴思想为抓手
  - 打头挖坑作为基准数：
    - 从最右边开始找，找个比它小的放到左边的坑
    - 再从左边开始找，找个比它大的数，去填上一步右边的坑
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
