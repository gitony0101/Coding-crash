#include <cstdio>
#include <cstdlib>
#include <iomanip> // 导入 iomanip 库 使用功能 setw()
#include <iostream>
using namespace std;

/*
三门课平均分 嵌套循环
升级版九九乘法表
打印矩形
打印三角形
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
  int a, b;
  do {
    printf("请输入第一个整数（0-50）:\n");
    cin >> a;
    printf("请输入第二个整数（0-50）:\n");
    cin >> b;
  } while (a >= 50 || a <= 0 || b >= 50 || b <= 0);
  printf("%d x %d 乘法表：\n", a, b);
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++)
      printf("%d * %d = %d\n", i, j, i * j);
  }
  cout << endl;
  printf("乘法表结束\n");
}

void printRectangle() { //打印矩形，使用iomanip库
  int height, width;
  char symbol;
  printf("Enter the height:\n");
  cin >> height;
  printf("Enter the width:\n");
  cin >> width;
  printf("Enter the symbol:\n");
  cin >> symbol;
  for (int h = 0; h < height; h++) {
    for (int w = 0; w < width; w++)
      cout << setw(3) << symbol; // 怎么能用上printf呢
    cout << endl;
  }
}

void printTriangle() {
  // make isolexic triangles
  // set parameters.
  int length;
  printf("Enter the length of the triangle: \n");
  cin >> length;
  char symbol;
  printf("Enter the symbol to use: \n");
  cin >> symbol;
  for (int i = 1; i <= length; i++) {
    for (int j = 1; j <= i; j++) {
      cout << setw(2) << symbol;
    }
    cout << endl;
  }
  cout << endl << endl;
  // make the upper triangle
  for (int i = length; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << setw(2) << symbol;
    }
    cout << endl;
  }
}

int main() {
  //   exAverageGrade();
  //   multiplicationTable01();
  //   printRectangle();
  printTriangle();
}
