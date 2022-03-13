#include <iostream>
using namespace std;

// Here is my first factorial function **with out for loop** ,it failed in the
// test.However, I like it, keep on coding!

// Life's tough, let's rock
//	When the going gets tougher, the tough get going.

int main() {
  // The factorial of a number:
  // The product of all the integers from 1 to the number.
  // The number must be natural number。
  // With out for loop
  int number, fac;
  cout << "Enter a number,I will solve the factorial of it : ";
  cin >> number;

  if (number < 0) {
    cout << "The number must be natural number." << endl;
  } else if (number == 0) {
    cout << "The factorial of 0 is 1." << endl;
  } else {
    bool isNumInt;
    isNumInt = (int(number) == number);
    // Here JUST exclude the generalized factorial case.

    if (isNumInt) {
      do {
        fac = number * (number - 1);
        number--;
      } while (number == 0);
      cout << "The factorial of " << number << " is " << fac << endl;
    }
  }
}

// 6! = 6*5*4*3*2*1 = 720
// 6-5-4-3-2-1
