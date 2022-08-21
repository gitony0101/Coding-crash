// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime> // time专用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/timeb.h> //获得系统毫秒时间
using namespace std;
/*堆排序
https://www.bilibili.com/video/BV1P64y1U7HY?share_source=copy_pc
*/
#define MAX 100 //设定最大值
//准备  从小到大
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
//交换函数
void swap(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}
// heapify 二叉堆的顺序存储
void heapify(int arr[], int length, int i) {
  int largest = i;
  int lChild = 2 * i + 1;
  int rChild = 2 * i + 2;
  if (lChild < length && arr[largest] < arr[lChild]) {
    largest = lChild;
  }
  if (rChild < length && arr[largest] < arr[rChild]) {
    largest = rChild;
  }
  //如果这两个情况都不是，说明这俩情况都不用调整,说明
  if (largest != i) {
    swap(arr[largest], arr[i]);
    heapify(arr, length, largest);
    //若果发生了交换，下一个子树会造成不平衡,并且是在largest处不平衡，后面子树要递归进行交换
  }
}
//堆排序
void heapSort(int arr[], int length) {
  int i;
  //创建堆
  for (i = length / 2 - 1; i >= 0; i--) {
    heapify(arr, length, i);
  }
  //堆排序
  for (i = length - 1; i > 0; i--) {
    swap(arr[i], arr[0]);
    heapify(arr, i, 0);
  }
}

int main() {
  int length = MAX;
  int *myArr = new int[length];
  InitMyArr(myArr, length);
  printf("随机数组：\n");
  PrintArray(myArr, length);
  //堆排序
  heapSort(myArr, length);
  printf("\n对排序后数组:\n");
  PrintArray(myArr, length);
  printf("\n");
  return 0;
}

/*

// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime> // time专用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/timeb.h> //获得系统毫秒时间
using namespace std;


// 堆排序
// 初始化堆 大顶堆 从小到大


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
  printf("\n堆排序后数组:\n");
  PrintArray(myArr, length);
  printf("\n");
  return 0;
}

// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime> // time专用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/timeb.h> //获得系统毫秒时间
using namespace std;

//堆排序ex
// 维护堆的性质
// 比较一下性能
// https://github.com/imxtx/algorithms/blob/main/01-sort/05-heap/heap.c
// */
// #define MAX 10 //设定最大值
// //准备  从小到大
// //打印数组
// void PrintArray(int arr[], int length) {
//   for (int i = 0; i < length; i++) {
//     printf("%d ", arr[i]);
//   }
//   printf("\n");
// }
// //交换函数
// void Swap(int *a, int *b) {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }
// //创建堆 并且 大顶堆？
// void heapify(int arr[], int length, int i) {
//   int largest = i;
//   int lChild = i * 2 + 1;
//   int rChild = i * 2 + 2;
//   if (lChild < length && arr[largest] < arr[lChild]) {
//     largest = lChild;
//   }
//   if (rChild < length && arr[largest] < arr[lChild]) {
//     largest = rChild;
//   }
//   if (largest != i) {
//     Swap(&arr[largest], &arr[i]);
//     heapify(arr, length, largest);
//   }
// }

// //堆排序入口
// void heapSort(int arr[], int length) {
//   int i;
//   //建堆
//   for (i = length / 2 - 1; i >= 0; i--) {
//     heapify(arr, length, i);
//   }
//   //排序
//   for (i = length - 1; i > 0; i--) {
//     Swap(&arr[i], &arr[0]);
//     heapify(arr, i, 0);
//   }
// }

// //
// https://www.youtube.com/watch?v=j-DqQcNPGbE&ab_channel=%E9%BB%84%E6%B5%A9%E6%9D%B0
// //堆排序第二版
// void swap(int arr[], int a, int b) { //交换函数
//   int temp = arr[a];
//   arr[a] = arr[b];
//   arr[b] = temp;
// }

// void heapify02(int arr[], int n, int i) {
//   if (i >= n) { //防呆设计，也是递归函数出口
//     return;
//   }
//   int lChild = 2 * i + 1;
//   int rChild = 2 * i + 2;
//   int max = i; //假设i是最大值
//   if (lChild < n && arr[lChild] > arr[max]) {
//     max = lChild;
//   }
//   if (rChild < n && arr[rChild] > arr[max]) {
//     max = rChild;
//   }
//   if (max != i) {
//     swap(arr, max, i);
//     heapify02(arr, n, max);
//   }
// }
// //堆排序第二版结束

// int main() {
//   //初始化随机数组
//   int length = MAX;
//   int arr01[length];
//   int arr02[length];
//   srand((unsigned int)time(NULL)); //设定随机数种子
//   for (int i = 0; i < length; i++) {
//     int randNum = rand() % length;
//     arr01[i] = randNum;
//     arr02[i] = randNum;
//   };
//   PrintArray(arr01, MAX);
//   printf("\n堆排序\n");
//   // heapSort(arr01, MAX);
//   // PrintArray(arr01, MAX);
//   heapify02(arr02, MAX, 0);
//   PrintArray(arr02, MAX);
//   return 0;
// }
