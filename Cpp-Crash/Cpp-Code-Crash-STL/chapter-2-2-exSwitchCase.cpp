#include <cstdio>
#include <iostream>
using namespace std;
/*
exOperatorCalc
  if-else
  switch case

Swich case 2.0; Number of days

Leap Year algorithm:
  https://www.mathsisfun.com/leap-years.html

*/

void exOperatorCalc01() { // if-else version
  float num1, num2;
  char operatorCalc;
  printf("Please enter the calculation(number and the calculator)\n");
  cin >> num1 >> operatorCalc >> num2;
  if (operatorCalc == '+')
    printf("%f + %f = %f\n", num1, num2, num1 + num2);
  else if (operatorCalc == '-')
    printf("%f - %f = %f\n", num1, num2, num1 - num2);
  else if (operatorCalc == '*')
    printf("%f * %f = %f\n", num1, num2, num1 * num2);
  else if (operatorCalc == '/')
    printf("%f / %f = %f\n", num1, num2, num1 / num2);
  else
    printf("Invalid Operator.\n");
  ;
}

void exOperatorCalc02() { // switch case
  float num1, num2;
  char operatorCalc;
  // 创建一个新的 bool 判别是否输入为整数
  bool isNum1Int, isNum2Int;
  printf("Please enter the calculation(number and the calculator)\n");
  cin >> num1 >> operatorCalc >> num2;
  switch (operatorCalc) {
  case '+':
    printf("%f + %f = %f\n", num1, num2, num1 + num2);
  case '-':
    printf("%f - %f = %f\n", num1, num2, num1 - num2);
  case '*':
    printf("%f * %f = %f\n", num1, num2, num1 * num2);
  case '/':
    printf("%f / %f = %f\n", num1, num2, num1 / num2);
    break;
  case '%':
    isNum1Int = (int(num1) == num1);
    isNum2Int = (int(num2) == num2);
    if (isNum1Int && isNum2Int)
      printf("%d %% %d = %d\n", int(num1), int(num2),
             int(num1) % int(num2)); // 注意这里的格式
    break;
  default:
    printf("Invalid input.\n");
  }
}

// (year % 4 = 0 && year % 100 != 0 || year % 400 == 0)

void exDaysOfMonth() { // show the number of days in certain month, year.
  // leap year:
  ///(year%4=0 && year%100!=0 || year%400==0)
  int year, month;
  printf("Please enter the year and month:YYYY MM\n");
  cin >> year >> month;
  switch (month) {
  case 2: // 使用条件运算符 Exp1 ? Exp2 : Exp3;
    (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        ? printf("In the year of %d, there are 29 days in February.\n", year)
        : printf("In the year of %d, there are 28 days in February.\n", year);
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    printf("There are 30 days in month %d.\n", month);
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("There are 31 days in month %d.\n", month);
    break;
  default:
    printf("NOT VALID!\n");
  }
}

int main() {
  // exOperatorCalc01();
  // exOperatorCalc02();
  // exDaysOfMonth();
}
