#include <iomanip>
#include <iostream> // import iomanip to use setw()

using namespace std;

int main() {
  // make isolexic triangles
  // set parameters.
  int length;
  cout << "Enter the length of the triangle: " << endl;
  cin >> length;
  char symbol;
  cout << "Enter the symbol to use: " << endl;
  cin >> symbol;

  // nest the loop
  // make the lower triangle
  for (int i = 1; i <= length; i++) {
    for (int j = 1; j <= i; j++) {
      cout << setw(2) << symbol;
    }
    cout << endl;
  }
  cout << endl << endl;
  // make the upper triangle
  for (int i = length; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << setw(2) << symbol;
    }
    cout << endl;
  }
}
