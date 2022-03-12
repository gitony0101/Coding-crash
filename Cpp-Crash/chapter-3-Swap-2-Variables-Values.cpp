#include <iostream>
using namespace std;

int main() {
  // Program to swap two variables values
  int a = 20, b = 10;
  int temp = a; // hold the value of a in temp
  a = b;        // assign the value of b to a
  b = temp;     // assign the value of temp to b
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  // Also, we can make it without using the third container, instead, we will
  // handle it in a mathmatic way:
  int x = 20, y = 10;
  x = x + y; // now x stores the sum of x and y which is 30
  y = x - y; // the NEW x subtracts the value of y ITSELF, which is 20, now we
             // get y value swapped
  x = x - y; // the NEW x subtracts NEW y, in the end x value got swapped which
             // is 10.
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
}
