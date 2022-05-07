#include <cstdio>
#include <iostream>
using namespace std;

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
      printf("%d moldulate %d = %d\n", int(num1), int(num2),
             int(num1) % int(num2));
    break;
  default:
    printf("Invalid input.\n");
  }
}
int main() {
  // exOperatorCalc01();
  exOperatorCalc02();
}
