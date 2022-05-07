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

int main() { exOperatorCalc01(); }
