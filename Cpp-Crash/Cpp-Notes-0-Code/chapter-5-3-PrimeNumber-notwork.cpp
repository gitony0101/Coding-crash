#include <iostream>
using namespace std;

int main() {
  int number;
  cout << " Please enter a number : ";
  cin >> number;

  // ket loop here:
  bool isPrimeFlag = true; // Presumption of prime number(true)

  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      isPrimeFlag = false;
      break; // Once there is one number can be divided by the number, it is not
             // a prime number, stop here
      cout << "The number is not a prime number" << endl;
    } else {
      cout << "The number is a prime number" << endl;
    }
  }
}
