// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
//归并排序 魔改三元表达式

#define MAX 15
//创建容量为MAX的一维随机数组
int *CreatArray() {
  int *arr = (int *)malloc(sizeof(int) * MAX);
  for (int i = 0; i < MAX; i++) {
    arr[i] = rand() % MAX + 1;
  }
  return arr;
}
//打印数组
void PrintArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
//合并算法，从小到大排序，归并排序内部调用
void Merge(int arr[], int start, int end, int mid, int *temp) {
  //两个序列合并，要确定好两个序列的开始和结束
  int i_start = start;   //左边序列的开始
  int i_end = mid;       //左边序列结束
  int j_start = mid + 1; //右边序列的开始
  int j_end = end;       //右边序列的结束
  int length = 0; //初始化temp序列里面的元素为0，随着合并情况膨胀
  //合并两个有序序列 魔改三元表达式
  while (i_start <= i_end && j_start <= j_end) { //用while保证合理并循环递进

    temp[length++] =
        arr[i_start] < arr[j_start] ? arr[i_start++] : arr[j_start++];
  } //合并完毕，但是这两个序列中，必有一个序列的若干元素因为没有元素可以跟他比较被剩下来，需要把他填入temp的最后一个位置，需要遍历:
    // i序列
  while (i_start <= i_end) { //此时说明左边序列还剩的有元素
    temp[length++] = arr[i_start++];
  }
  // j序列,同上
  while (j_start <= j_end) {
    temp[length++] = arr[j_start++];
  }
  //辅助空间中的数据覆盖到原空间*******
  for (int i = 0; i < length; i++) {
    arr[start + i] = temp[i]; //重点理解
  }
}

//归并排序
void MergeSort(int arr[], int start, int end, int *temp) {
  //防呆设计，什么时候结束递归？start>=end
  if (start >= end) {
    return;
  } //下面开始else正题
  //确定从哪里分开成两个序列,准备分组
  int mid = (start + end) / 2;
  //递归分组
  MergeSort(arr, start, mid, temp);   //左半边
  MergeSort(arr, mid + 1, end, temp); //右半边
  //合并
  Merge(arr, start, end, mid, temp);
}

int main() {
  int *myArr = CreatArray();
  printf("随机数组为：\n");
  PrintArray(myArr, MAX);
  //申请一块辅助空间temp
  int *temp = (int *)malloc(sizeof(int) * MAX); //归并排序参数temp空间在此生成
  MergeSort(myArr, 0, MAX - 1, temp);
  printf("\n归并排序后的数组为：\n");
  PrintArray(myArr, MAX);
  //一共申请了两个空间：myArr和temp，用完以后需要释放这两个空间
  free(temp);
  free(myArr);
  printf("\n");
  return 0;
}

/*
//合并算法，从小到大排序，归并排序内部调用
void Merge(int arr[], int start, int end, int mid, int *temp) {
  //两个序列合并，要确定好两个序列的开始和结束
  int i_start = start;   //左边序列的开始
  int i_end = mid;       //左边序列结束
  int j_start = mid + 1; //右边序列的开始
  int j_end = end;       //右边序列的结束
  int length = 0; //初始化temp序列里面的元素为0，随着合并情况膨胀
  //合并两个有序序列 魔改三元表达式
  while (i_start <= i_end && j_start <= j_end) { //用while保证合理并循环递进
    if (arr[i_start] < arr[j_start]) {           //从头对比两个指针，
      // 当左边序列第一个要比较的元素小于右边序列第一个要比较的元素的时候：
      temp[length] = arr[i_start]; //把较小的左边序列第一个元素装进temp序列
      length++;                    // 此时length增加
      i_start++;                   // 左边序列指针+1
    } else { //否则，则是右边小于左边，右边序列第一个需要比较的元素入列temp
      temp[length] = arr[j_start];
      j_start++;
      length++;
    }
  }
//合并完毕，但是这两个序列中，必有一个序列的若干元素因为没有元素可以跟他比较被剩下来，需要把他填入temp的最后一个位置，需要遍历:
    // i序列
  while (i_start <= i_end) { //此时说明左边序列还剩的有元素
    temp[length] = arr[i_start];
    i_start++;
    length++;
  }
  // j序列,同上
  while (j_start <= j_end) {
    temp[length] = arr[j_start];
    j_start++;
    length++;
  }
  //辅助空间中的数据覆盖到原空间*******
  for (int i = 0; i < length; i++) {
    arr[start + i] = temp[i]; //重点理解
  }
}
*/
