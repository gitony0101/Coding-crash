#include <iostream>
using namespace std;

int main() {
  int number;
  cout << " Please enter a number : ";
  cin >> number;

  // key loop here:
  // bool isPrimeFlag = true; // Presumption of prime number(true)

  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      cout << "The number is NOT a prime number" << endl;
      break;

    } else {
      cout << "The number is a prime number" << endl;
      break;
    }
  }
}
