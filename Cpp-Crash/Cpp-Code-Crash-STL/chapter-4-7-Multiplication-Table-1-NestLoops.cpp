#include <iostream>
using namespace std;

int main() {
  // Make a Multiplication Table
  // Double Loop?
  int a, b;
  do {
    cout << "Enter the first integer (0-50) :" << endl;
    cin >> a;
    cout << "Enter the second integer (0-50) :" << endl;
    cin >> b;
  } while (a >= 50 || a <= 0 || b >= 50 || b <= 0);

  cout << "Multiplaction Table for " << a << " * " << b << ":" << endl;

  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      cout << i << " * " << j << " = " << i * j << endl;
    }
    cout << endl;
  }
  cout << "END of Multiplaction Table for " << a << " * " << b << endl;
}
