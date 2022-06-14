#include <algorithm>
#include <cstdio>
#include <iostream>
#include <stdio.h>  // 动态数组用
#include <stdlib.h> //动态数组用
#include <string>

using namespace std;
/* 一维数组 二维数组
一维数组 升序排列 逆转排列 冒泡排序
1. `数据类型 数组名[ 数组长度 ];`
2. `数据类型 数组名[ 数组长度 ] = { 值1，值2 ...};` # 把值也标出来
3. `数据类型 数组名[ ] = { 值1，值2 ...};` # 长度可以自己推测出来，电脑会查

二维数组
推荐使用：
2. `数据类型 数组名[ 行数 ][ 列数 ] = { {数据1，数据2 } ，{数据3，数据4 } };`


指针访问数组
*/

//一维数组 从零开始，命名要规范，不要和变量重名
void exUnarry01() {
  double arr01[] = {1.001, 2, 3, 435, 6, 7, 8, 3, 4, 32, 3}; //直接生成一维数组
  int countArr01 = sizeof(arr01) / sizeof(arr01[0]); //统计元素个数
  printf("数组arr01中一共有%d个元素。\n", countArr01);
  printf("其中，第一个元素为%f,最后一个选素为%f\n", arr01[0],
         arr01[countArr01 - 1]);
  printf("整个数组所占空间为：%lu,平均每个元素所占空间为：%lu\n",
         sizeof(arr01), //对数组名进行 sizeof，可以获取整个数组占内存空间的大小
         sizeof(arr01[0])); //每个元素所占空间相同
  printf("数组首地址为%p，十进制地址为%d\n",
         arr01, //直接打印数组名，可以查看数组所占内存的首地址
         (int &)arr01); //注意这里的十进制转换
  printf("第一个元素地址为%p，十进制地址为%d\n", &arr01[0],
         (int &)arr01[0]); //注意首元素地址和数组首地址相同
  printf("第二个元素地址为%p，十进制地址为%d\n", &arr01[1], (int &)arr01[1]);
}

// 升序排列
void sortArr02() {
  int arr02[] = {300, 350, 200, 400, 250};
  int count = sizeof(arr02) / sizeof(arr02[0]);
  int max = 0;
  for (int i = 0; i <= count - 1; i++) { //注意初始化变量i要给他赋值
    if (arr02[i] > max)
      max = arr02[i];
  }
  printf("arr02 中最大数为 %d\n", max);
}

//逆序排列 原数组元素为：1,3,2,5,4;逆置后输出结果为:4,5,2,3,1
void reverseArr01() {
  //元素逆序排列，正好实现关于中心对称反转变换
  int arr01[] = {1, 3, 2, 5, 4};
  int count = sizeof(arr01) / sizeof(arr01[0]); //统计一下
  int start = 0;                                //起始元素下标
  int end = count - 1; //末尾元素下标，注意是从零开始，所以要减去1
  printf("逆序排列前的数组为：\n");
  for (int i = 0; i <= end; i++)
    printf("%d ", arr01[i]);
  cout << endl;

  //逆序排列，排列的是数字的编号
  //用到while-true的语句，互换，右值赋值为左值
  //通过 start++ 和 end--进行下一步，并且当数字标号start大于end的时候，结束

  while (start < end) {
    int temp = arr01[start]; //创建临时变量temp当作中间量以防数字被覆盖
    arr01[start] = arr01[end]; //两头数值互换
    arr01[end] = temp; // 中间量一直储存着左值，跟右值交换
    start++;           //左值往右迭代
    end--;             //右值往左迭代
                       //到这里，已经互换完毕。
  }
  printf("逆序排列后数组变换为：\n");
  for (int i = 0; i <= count - 1; i++)
    printf("%d ", arr01[i]);
  cout << endl;
  printf("此时，循环后的start 变为：%d，end变为：%d\n", start, end);
}

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
  for (int i = 0; i <= count - 1; i++)
    printf("%d ", arr01[i]);
  cout << endl;
  //开始冒泡排序，
  for (int i = 0; i <= count - 1; i++) //外层循环，排序轮数等于元素个数减一
  {
    //内层循环，用来相邻两数对比
    //每轮对比次数 = 元素个数 - 排序轮数
    for (int j = 0; j <= count - i - 1; j++)
      if (arr01[j] >
          arr01[j + 1]) //如果第一个数字比第二个数字大，交换这两个数字
      {                 //创建中间量交换数值
        int temp = arr01[j];
        arr01[j] = arr01[j + 1];
        arr01[j + 1] = temp;
      } //此时已经做完了冒泡排序
  }

  printf("排序后的数列：\n");
  for (int i = 0; i <= count - 1; i++)
    printf("%d ", arr01[i]);
  cout << endl;
}

//二维数组
//定义二
void exBinArr01() {                       //嵌套打印
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}}; //命名方式直接用第二个了
  printf("二维数组：\n");
  //因为是二维了，所以要打印数组的话需要逐行、逐列打印，用到嵌套循环
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", arr[i][j]);
    }
    cout << endl; //每打印一行，另起一行接着打印
  }
  // 查看二维数组大小、所占内存空间以及首地址
  printf("二维数组大小为：%ld，其中一行大小：%ld，每个元素大小%ld。\n",
         sizeof(arr), sizeof(arr[0]), sizeof(arr[0][0]));
  int roNum = sizeof(arr) / sizeof(arr[0]);        //行数
  int colNum = sizeof(arr[0]) / sizeof(arr[0][0]); //列数
  printf("二维数组一共有%d行，%d列\n", roNum, colNum);
  //内存地址
  printf("二维数组首地址：%p\n", &arr);
  printf("二维数组第一行地址：%p\n", &arr[0]);
  printf("二维数组第二行地址：%p\n", &arr[1]);
  printf("二维数组第一个元素地址%p，第二个元素地址%p\n", &arr[0][0],
         &arr[0][1]);
  // cout << (int &)arr[1] << endl;
}
//二维数组应用——考试成绩统计：
void gradeStastics() {
  int scores[3][3] = {
      {100, 100, 100},
      {90, 50, 100},
      {60, 70, 80},
  };
  string names[] = {"张三", "李四", "王五"};

  for (int i = 0; i < 3; i++) {
    int grade =
        0; //初始化零成绩必须在这个外循环里定义，因为你求的是一个人的总成绩
    for (int j = 0; j < 3; j++) {
      grade += scores[i][j];
    }
    printf("%s同学的总成绩为：%d\n", names->c_str(),
           grade); //打印的也是逐行打印，所以要在外层循环里面打印。
  }
}

// 动态数组
// 内存分配
void exDynamicArr01() {
  int *parr = nullptr; // In newer C++ (C++11 and higher), use nullptr.
  int *parr01 = nullptr;
  parr = (int *)malloc(
      sizeof(int)); // 开辟一个 int 4个字节的内存空间，用parr指针指向它
  printf("初始化后，parr的内存地址为：%p，parr的值为%d\n", &parr, *parr);
  *parr = 520; // 给parr赋值
  printf("赋值520后，parr的内存地址为：%p，parr的值为%d\n", &parr, *parr);
  parr01 = (int *)calloc(5, 4); // 开辟5个
}

int main() {
  //   exUnarry01();
  //   sortArr02();
  //   reverseArr01();
  //   exBubbleSort01();
  // exBinArr01();
  gradeStastics();
  // exDynamicArr01();
}