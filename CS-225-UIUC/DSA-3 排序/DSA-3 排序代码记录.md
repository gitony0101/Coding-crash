# DSA-3 排序代码记录



- **快速排序和归并排序**是一定要掌握的，因为都用到了递归和分治的思想
  - 快速排序是二叉树的前序遍历，归并排序是后序遍历，那么从遍历到二叉树，为什么会有这样的联系，是需要回过头来感悟的
    - 快排有个基准枢轴量`pivot`，动态地把序列分开
    - 归并
- 其次是**堆排序**，属于堆数据结构部分的基础知识
  - 其他排序从面试的角度讲，考察的概率很低

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

- 这就是如何拷贝生成相同的数组




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

## 插入排序

> 将无序的序列插入到有序的序列中

```c++
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
```

部分节选，创建函数并开始循环，注意 `i=1`开始，留出了第0个元素，这样从一开始就能分成两个部分，双层嵌套，在第一层大嵌套的环境下，你要看明白这里面的函数都做了什么
     
1.   `if (arr[i] < arr[i - 1]) ` 如果当前数据元素比前一个小，符合我们的判断条件，可以往前寻找并插入了，进行插入排序
2.  
   - 内层县创建缓存变量保存外层走到的当前元素，然后开始：
   - `for (j = i - 1; j >= 0 && temp < arr[j]; j--)`
     
      - `temp < arr[j]`这个条件很重要，确保摘出来存在`temp`上的元素要比空单元前面的元素小，这样，空单元前一个元素可以进到这个空单元里面，前面的元素跟上，接着跟`temp`比较
      -  接着，之前已经定义好了`int j`，因为下面还要存储比较过后空下来的`temp`元素
- 单独的那个元素，自成一列 ，可以看作是有序
- 这个部分还需要再精简一下语言。

插入排序代码思路梳理


- 时间复杂度分析： 若将待排序的数据元素按从小到大的顺序排序，可分为最好情况和最坏情况讨论。
  - 最好的情况：最好的情况就是待排序的数据已经排好序了，这时只需要进行（n-1)次比较操作。
  - 最坏的情况：最坏的情况就是待排序的数据序列是逆序的。此时需要进行的比较次数为n(n-1)/2次，赋值操作是比较操作的次数n(n-1)/2+(n-1）次。平均来说插入排序算法的时间复杂度为O(n^2）。
- 所以： **插入排序不适合对于数据量比较大的排序应用**


```c++

```





## 高级排序

## 希尔排序 Shell Sort

```c++

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
```

- 外层`do-while`循环在保障每次外层循环增量逐步减小
```c++
do {
  int increasement = length; //初始化，先让增量等于数组全长
    increasement = increasement / 3 + 1; //循环第一步：确定分组的增量
  } while (increasement > 1);
```

- 希尔增量一直在减小，直到减小到1
  - 例如数组全长length=9，初始化给到increasement，第一次increasement= 9/3 +1 =4.第二次 4/3+1 =2，第三次2/3+1=1，至此因`while (increasement > 1);`限定，推出循环，正好最后一次循环没有增量了，回归原来的插入排序，把整个**基本有序数组**再插入排序一次。













## 快速排序

**快速排序就是个二叉树的前序遍历**

- 分治法 + 挖坑填数
  - 分治法：大而化小，小而解决
- 找基准数










### 调用打印数组代码略

### 快速排序主代码

```c++
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
```

从最后的递归：
```c++
    QuickSort(arr, start, i - 1); //对基准数左半部分进行递归快排. j-1也行，同上
    QuickSort(arr, i + 1, end); //对基准数右半部分进行递归快排. j-1也行，同上
```
**我们看到快速排序是二叉树的前序遍历，根左右**









## 随机快速排序












```c++

```

## 归并排序

- 拆分
- 计算机整数除法会取整
- 合并的过程里面包括比较复制的过程，也是排序的过程
- 归并排序就是二叉树的后序遍历
  



### 先看主代码

```c++
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
```
可以看到递归：
```c++
  MergeSort(arr, start, mid, temp);   //左半边
  MergeSort(arr, mid + 1, end, temp); //右半边
  //合并
  Merge(arr, start, end, mid, temp);
```
> 先左后右再合并一起，归并排序就是二叉树的后序遍历





## 堆排序










# 小结

## 元素移动

> 数组中的元素，如何按照循环，往前移动，或者往后移动?

```c++
for (int i = 1; i < length; i++) { 
    if (arr[i] < arr[i - 1]) { 
      int temp = arr[i]; 
      for (j = i - 1; j >= 0 && temp < arr[j]; j--) 
```
- 这个地方设置的外层循环往前移动，内层循环在满足`j >= 0 && temp < arr[j];`的情况下，凭借`j--`往后移动，在`j = i - 1; `的设定下，一直在扩充自己的空间





