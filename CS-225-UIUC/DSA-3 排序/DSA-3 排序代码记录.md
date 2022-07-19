# DSA-3 排序代码记录



## 冒泡排序

### 一维数组版本




```c++

//冒泡排序 4,2,8,0,5,7,1,3,9 进行升序排序
void exBubbleSort01() {
  //利用冒泡排序实现升序序列
  int arr01[] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
  int count = sizeof(arr01) / sizeof(arr01[0]);
  /*
1. 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
2. 对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
3. 重复以上的步骤，每次比较次数-1，直到不需要比较
*/
  printf("排序前的数列：\n");
  for (int i = 0; i < count; i++)
    printf("%d ", arr01[i]);
  cout << endl;
  //开始冒泡排序，
  for (int i = 0; i < count - 1; i++) //外层循环，排序轮数等于元素个数减一
  {
    //内层循环，用来相邻两数对比
    //每轮对比次数 = 元素个数 - 排序轮数
    for (int j = 0; j < count - i - 1; j++)
      if (arr01[j] >
          arr01[j + 1]) //如果第一个数字比第二个数字大，交换这两个数字
      {                 //创建中间量交换数值
        int temp = arr01[j];
        arr01[j] = arr01[j + 1];
        arr01[j + 1] = temp;
      } //此时已经做完了冒泡排序
  }

  printf("排序后的数列：\n");
  for (int i = 0; i < count; i++)
    printf("%d ", arr01[i]);
  cout << endl;
}

```

## 本单元版本
```c++
// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime> // time专用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/timeb.h> //获得系统毫秒时间
using namespace std;
/*冒泡排序*/

//获得系统毫秒时间
long getSysTime() {
  struct timeb tb;
  ftime(&tb);
  return tb.time * 1000 + tb.millitm;
}

#define MAX 10 // 设定数组最大值,目前测时间10000足¨够，多了会慢
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
//冒泡排序
void exBubbleSort01(int arr[], int length) { //冒泡排序
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        Swap(&arr[j + 1], &arr[j]);
      }
    }
  }
}

int main() {
  int arr[MAX];
  srand((unsigned int)time(NULL)); //设定随机数种子
  printf("生成随机数组：\n");
  for (int i = 0; i < MAX; i++) {
    arr[i] = rand() % MAX;
  }
  printf("排序前\n");
  printArr(arr, MAX);
  long t_start = getSysTime();
  exBubbleSort01(arr, MAX);
  long t_end = getSysTime();
  printf("排序后\n");
  printArr(arr, MAX);
  printf("冒泡排序 %d个元素所需时间:%lo ms\n", MAX, (t_end - t_start));

  printf("\n");
  return 0;
}

```

- `srand((unsigned int)time(NULL));` //[设定随机数种子](https://blog.csdn.net/jx232515/article/details/51510336)
- 把交换数值、打印函数单独写出来，精简、增加可读性

### 问题：

- `#define MAX 10`

当这里的数值设置的够大的时候，你会发现，冒泡排序并没有按要求增加，而是在无序的输出，求余数生成随机数比大小有关系，因为当数字排到9了以后，再往后怎么办，10以内9最大了，于是就会在局部形成无序的有序循环。

## 冒泡排序改进版 见好就收 提高效率

- 改进的是什么：如果已经排列有序了，就可以退出了，剩下的比较没有必要，**减少嵌套循环次数**
- 怎么改进：设置标志量`flag = 0/1`
- 如何改进：使用标志量来标识该层循环是否完成：
  - 未完成比较 `flag = 0`,那么此层循环开始
  - 已经完成比较 `flag =1 `，那么不用此层循环



### 别废话，不要冗余，见好就收的改进思想放光芒

### 在对比的过程中，我们会遇到的问题

需要用两个完全相同的随机数组进行对比：

```c++
//冒泡排序初始化随机数组
  int length = MAX;
  int arr01[length];
  int arr02[length];
  srand((unsigned int)time(NULL)); //设定随机数种子
  for (int i = 0; i < length; i++) {
    int randNum = rand() % length;
    arr01[i] = randNum;
    arr02[i] = randNum;
  };

```

- 这就是如何拷贝生成的数组


```c++

```

```c++

```

## 选择排序

比冒泡排序少了交换次数，但是高不到哪里去

```c++
void selectSort(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    int min = i; //有可能这个地方时是最小了
    for (int j = i + 1; j < length; j++) {
      if (arr[j] < arr[min]) {
        min = j; //更新下标为j
      }          //循环完毕后，min应该取到的是最小值的下标
    }
    if (min != i) {
      Swap(&arr[min], &arr[i]);
    }
  }
}


```

> 最后我们看到这个选择排序比冒泡效率高一些,因为交换次数少了些





## 插入排序

> 将无序的序列插入到有序的序列中

```c++
void InsertSort(int arr[], int length) {
  for (int i = 1; i < length; i++) { 
   

    }
    
  }
}

```

创建函数并开始循环，注意 `i=1`开始

主要的一层比较：
```cpp
 for (j = i - 1; j >= 0 && temp < arr[j]; j--) 
```





# 小结

## 元素移动

> 数组中的元素，如何按照循环，往前移动，或者往后移动?




