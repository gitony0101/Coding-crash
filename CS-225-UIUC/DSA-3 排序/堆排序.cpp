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
堆排序
初始化堆 大顶堆 从小到大
*/

//初始化一个随机数组
void InitMyArr(int arr[], int length) {
  srand((unsigned)time(NULL));
  for (int i = 0; i < length; i++) {
    arr[i] = rand() % 10 + 1;
  }
}
//打印数组
void PrintArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
//堆排序 函数：交换函数 调整堆  堆排序主函数
// 交换函数
// void mySwap(int arr[], int a, int b) { // a b 为下标数
//   int temp = arr[a];                   //初始化temp存放一个值arr[a]
//   arr[a] = arr[b]; //把b处的值交换给a，此时两处值都是arr[b]
//   arr[b] = temp;   //把存放在temp的arr[a]的值换回来交给arr[b]
// }
void mySwap(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}
// 调整堆
/*
heapify 二叉堆的顺序存储
  @param arr 待调整的数组
  @param index 待调整的结点下标
  @param length 数组的长度
*/
void Heapify(int arr[], int index, int length) {
  //先保存父结点下标,并假设：父结点就是最大的，大顶堆，从大到小，就这么安排
  index = length / 2;
  //保存左右孩子结点的数组下标：
  int lChild = index * 2 + 1; //左子结点下标
  int rChild = index * 2 + 2; //右子结点下标
  int max = index;
  //比较父结点和子结点大小，大顶堆从大到小，把大的放到父结点
  if (lChild < length &&
      arr[lChild] > arr[max]) { //如果存在左子树，并且左子树数据比父结点大
    max = lChild;               //交换下标，现在lChild最大
  }
  if (rChild < length &&
      arr[rChild] > arr[max]) { //如果存在右子树，并且左子树数据比父结点大
    max = rChild;               //交换下标，现在rChild最大
  }
  if (max != index) { //交换两个结点
    mySwap(max, index);
    Heapify(arr, max, length);
  }
};
//堆排序主函数
void HeapSort(int arr[], int length) {
  //初始化堆
  for (int i = length / 2 - 1; i >= 0; i--) { //从大到小初始化，好好思考这个循环
    Heapify(arr, i, length);
  }
  //交换堆顶元素和最后一个元素
  for (int i = length - 1; i >= 0; i--) {
    mySwap(arr[0], arr[i]); //交换头尾
    Heapify(arr, i, 0);
  }
  printf("%d ", arr[0]);
  printf("\n");
}

int main() {
  int length = 10;
  int *myArr = new int[length];
  InitMyArr(myArr, length);
  printf("随机数组：\n");
  PrintArray(myArr, length);
  //堆排序
  HeapSort(myArr, length);
  printf("\n对排序后数组:\n");
  PrintArray(myArr, length);
  printf("\n");
  return 0;
}
