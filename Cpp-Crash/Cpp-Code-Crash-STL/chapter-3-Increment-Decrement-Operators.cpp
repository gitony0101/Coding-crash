#include <iostream>
using namespace std;

int main() {
  // ++,--
  int counter = 7;
  counter++;
  cout << counter << endl;
  counter--;
  cout << counter << endl;
  // preincrement, predecrement
  // postincrement, postdecrement
  int counter_2 = 7;
  cout << counter_2++ << endl; // shows 7 which is the value before increment
  cout << counter_2 << endl; // Next, shows 8 which is the value after increment
  cout << counter_2--
       << endl; // shows 8 which is the value before decrement,yes, counter_2 is
                // 8 now becasue of previous increment.
  cout << counter_2 << endl; // Next, shows 7 which is the value after decrement
}
