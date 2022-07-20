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

#define MAX 100000

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
  //与普通插入排序比较测试效率，调整MAX 到100000
  long t_start02 = getSysTime();
  shellSort(arr02, length);
  long t_end02 = getSysTime();
  printf("希尔排序 %d 个元素所需时间:%lo ms\n", MAX, (t_end02 - t_start02));
  long t_start01 = getSysTime();
  InsertSort(arr01, length);
  long t_end01 = getSysTime();
  printf("插入排序 %d 个元素所需时间:%lo ms\n", MAX, (t_end01 - t_start01));

  printf("\n");
  return 0;
}
