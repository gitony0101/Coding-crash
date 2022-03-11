#include <iostream>
using namespace std;

int main() {
  char c1, c2, c3, c4, c5;
  cout << "Enter 5 ASCII numbers:";
  cin >> c1 >> c2 >> c3 >> c4 >> c5;

  cout << "The message:" << char(c1) << " " << char(c2) << " " << char(c3)
       << " " << char(c4) << " " << char(c5) << endl;
  // " " is the blankspace character
}
