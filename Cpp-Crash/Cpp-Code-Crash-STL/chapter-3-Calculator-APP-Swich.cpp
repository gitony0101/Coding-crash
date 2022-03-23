#include <iostream>
using namespace std;

int main() {
  float num1, num2;  // declare two float variables
  char operatorCalc; // declare the operatoras  a char variable which we will
                     // use to store the operator
  bool isNum1Int, isNum2Int; // declare two bool variables to be determine
                             // whether num1 and num2 are integers.
  cout << "Please enter the number and operator: " << endl;

  cin >> num1 >> operatorCalc >>
      num2; // declare the expression we will use in the calculator.

  switch (operatorCalc) {
  case '-':
    cout << num1 << operatorCalc << num2 << " = " << num1 - num2 << endl;
    break;
  case '+':
    cout << num1 << operatorCalc << num2 << " = " << num1 + num2 << endl;
    break;
  case '*':
    cout << num1 << operatorCalc << num2 << " = " << num1 * num2 << endl;
    break;
  case '/':
    cout << num1 << operatorCalc << num2 << " = " << num1 / num2 << endl;
    break;
  case '%':
    isNum1Int = (int(num1) == num1);
    isNum2Int = (int(num2) == num2);
    if (isNum1Int && isNum2Int) // if they are both true.
      cout << num1 << operatorCalc << num2 << " = " << int(num1) % int(num2)
           << endl;
    else
      cout << "Invalid input" << endl;
    break;
  default:
    cout << "Invalid calculation" << endl;
  }
}
