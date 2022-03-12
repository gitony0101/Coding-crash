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
}
