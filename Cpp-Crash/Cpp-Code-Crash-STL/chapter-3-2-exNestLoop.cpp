#include <cstdio>
#include <cstdlib>
#include <iomanip> // 导入 iomanip 库 使用功能 setw()
#include <iostream>
using namespace std;

/*
三门课平均分 嵌套循环
升级版九九乘法表
*/

void exAverageGrade() { //三门课求平均分 使用for 嵌套do-while 循环
  int grade, sum = 0;   //初始化成绩
  for (int i = 0; i < 3; i++) {
    do {
      printf("Enter the grade (1-5):\n");
      cin >> grade;
    } while (
        grade < 1 ||
        grade >
            5); // 要求区间1-5，之所以这样取，是因为一旦输错，本段程序不会纪录成绩并要求重新输入新的，正确的代码。
    sum += grade;
  }
  printf("the sum of the grade is %d, the average of the grade is : %f.\n", sum,
         float(sum) / 3.0);
}

void multiplicationTable01() { // 升级版九九乘法表
}

int main() { exAverageGrade(); }
