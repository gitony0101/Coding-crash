#include <iostream>
using namespace std;

int main() {
  // The factorial of a number:
  // The product of all the integers from 1 to the number.
  // The number must be natural number。
  int number;
  cout << "Please enter a number, I will show the factorial of it : " << endl;
  cin >> number;

  int factorial = 1; // initialize the factorial number with 1

  // Also we can do it this way: 6! = 6*5*4*3*2*1 = 720
  for (int i = number; i >= 1; i--) {
    factorial = factorial * i;
  }

  //   for (int i = 1; i <= number; i++) {
  //     factorial = factorial * i;
  //     // here the product : 1 * 2 * 3 * ...* number
  //     // also this explains why 0! = 1
  //   }
  cout << number << "! = " << factorial << endl;
}
// 6! = 6*5*4*3*2*1 = 720
// 6-5-4-3-2-1
