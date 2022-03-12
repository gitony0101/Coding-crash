#include <iostream>
using namespace std;

int main() {
  int a = 5, b = 4;
  cout << a + (b++) << endl; // here b still = 4 because the expression is
                             // evaluated before the increment
  cout << b << endl; // here b = 5 because the expression is evaluated after
                     // the increment
  cout << (--a) + b << endl; // Now a = 4 since pre-decrement is evaluated
                             // before the expression, also, b is 5 now
  cout << !(true && false) << endl;
  cout << !(true || false) << endl;
  int x = 7;
  cout << (++x <= 9 && x + 2 >= 10) << endl;
  // ++ x = 8, then x + 2 = 8 + 2 = 10, then determine the logics:both true, so
  // at last it is true and print 1.

  int y = 3;
  cout << (y == y++) << endl;
  // warning: unsequenced modification and access to 'y' [-Wunsequenced]
  // y = 3, then y++ = 4 will NOT show at this time,so it is true
  // and print 1, while let's look at it now:
  cout << y << endl;

  float z = 8;
  z += 2; // 10
  cout << z << endl;
  z /= 2; // 10 / 2 = 5
  cout << z << endl;
}
