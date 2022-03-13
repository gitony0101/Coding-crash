#include <iostream>
using namespace std;

int main() {
  float num1, num2;
  char operatorCalc;
  cout << "Please enter the number and operator: " << endl;
  cin >> num1 >> operatorCalc >> num2;
  if (operatorCalc == '+')
    cout << num1 + num2 << endl;
  else if (operatorCalc == '-')
    cout << num1 - num2 << endl;
  else if (operatorCalc == '*')
    cout << num1 * num2 << endl;
  else if (operatorCalc == '/')
    cout << num1 / num2 << endl;
  else if (bool(int(num1) == num1) && bool(int(num2) == num2))
    cout << int(num1) % int(num2)
         << endl; // caution: only modulo the intergers.
  else
    cout << "Invalid input" << endl;
}
