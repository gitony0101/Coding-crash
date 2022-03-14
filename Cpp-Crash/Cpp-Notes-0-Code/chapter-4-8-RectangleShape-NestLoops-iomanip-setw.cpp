#include <iomanip>
#include <iostream> // import iomanip to use setw()

using namespace std;

int main() {
  int height, width;
  char symbol;
  cout << "Enter height: ";
  cin >> height;
  cout << "Enter width: ";
  cin >> width;
  cout << "Enter symbol: ";
  cin >> symbol;
  for (int h = 0; h < height; h++) {
    for (int w = 0; w < width; w++) {

      cout << setw(3) << symbol;
    }
    cout << endl;
  }
}
