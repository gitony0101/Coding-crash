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
希尔、快排、归并排序测试
不打印，只测试时间，引入时间函数
引入重复数列的那个函数
通过比较你可以发现，快速排序名不虚传
*/

//准备
#define MAX 696712 // 按照不同情况自己设,696712 m1 最高
//获得系统毫秒时间
long getSysTime() {
  struct timeb tb;
  ftime(&tb);
  return tb.time * 1000 + tb.millitm;
}

//打印数组函数
void printArr(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
//三种排序：希尔排序 快速排序 归并排序
//希尔排序 减少增量排序
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
  } while (increasement > 1); //当 increasement < 1后，退出循环
}
//引入普通插入排序进行比较
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

//快速排序  从小到大排序
void QuickSort(int arr[], int start, int end) { // start和end使用时都要赋值首尾
  //初始化
  int i = start;         //让i指向第一个下标，使用时开始是0
  int j = end;           //让j指向最后一下标，使用时结束时len-1
  int temp = arr[start]; //初始化基准数为第一个元素
                         //所有数都和基准数进行比较
  if (i < j) {           //确保i开始下标一直比j结束下标小
    while (i < j) {      //在i<j的情况下一直循环
      //从右向左 找比基准数小的数
      while (i < j && arr[j] >= temp) { // arr[j] >= temp 条件确保了在找
        j--; //右标往左退一位，准备下一步赋值填坑
      }
      //填坑
      if (i < j) {
        arr[i] = arr[j];
        i++;
      }
      //从左向右 找比基准数大的数
      while (i < j && arr[i] < temp) {
        i++; //左标往右进一位，准备下一步填坑
      }
      //填坑
      if (i < j) {
        arr[j] = arr[i];
        j--;
      }
    } //此处while外层循环推出，因为找到了基准数的位置
      // 此时i=j，左右标重合了
    arr[i] = temp; // 把基准数放到它的位置上，arr[j]也行，因为此时他们重合了
    QuickSort(arr, start, i - 1); //对基准数左半部分进行递归快排. j-1也行，同上
    QuickSort(arr, i + 1, end); //对基准数右半部分进行递归快排. j-1也行，同上
  }
}

//归并排序
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

//归并排序主程序
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

int main() { //比较三组排序所用时间
  //初始化随机数组
  int length = MAX;
  int arr01[length];
  int arr02[length];
  int arr03[length];
  srand((unsigned int)time(NULL)); //设定随机数种子
  for (int i = 0; i < length; i++) {
    int randNum = rand() % length;
    arr01[i] = randNum; //希尔排序调用
    arr02[i] = randNum; //快速排序调用
    arr03[i] = randNum; //归并排序调用
  };
  // printf("每组容量为%d的三组随机数组同为：\n", MAX);
  // printArr(arr01, MAX);
  printf("\n下面进行希尔排序：\n");
  long t_start01 = getSysTime();
  shellSort(arr01, length); //调用希尔排序
  long t_end01 = getSysTime();
  printf("希尔排序 %d 个元素所需时间:%lo ms\n", MAX, (t_end01 - t_start01));
  printf("\n下面进行快速排序：\n");
  long t_start_02 = getSysTime();
  QuickSort(arr02, 0, MAX - 1); //调用快速排序
  long t_end02 = getSysTime();
  printf("快速排序排序 %d 个元素所需时间:%lo ms\n", MAX,
         (t_end02 - t_start_02));
  printf("\n下面进行归并排序");
  long t_start03 = getSysTime();
  int *temp = (int *)malloc(sizeof(int) * MAX); //归并排序参数temp空间在此生成
  MergeSort(arr03, 0, MAX - 1, temp);           //调用归并排序
  long t_end03 = getSysTime();
  printf("归并排序 %d 个元素所需时间:%lo ms\n", MAX, (t_end03 - t_start03));
  return 0;
}

// //创建容量为MAX的一维随机数组 本次并未使用
// int *CreatArray() {
//   int *arr = (int *)malloc(sizeof(int) * MAX);
//   for (int i = 0; i < MAX; i++) {
//     arr[i] = rand() % MAX + 1;
//   }
//   return arr;
// }
