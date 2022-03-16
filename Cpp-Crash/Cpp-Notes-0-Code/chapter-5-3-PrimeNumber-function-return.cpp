#include <iostream>
using namespace std;

bool isPrimeNumber(int number) {
  bool isPrimeFlag = true; // initialize the flag prime number is true

  // key loop
  for (int i = 2; i < number; i++) {
    if (number % i == 0) { //  check the  number if it is divisible by i, which
                           //  ranged from 2 to the number itself.
      isPrimeFlag = false; // if it is divisible, then the flag is false
      break;               // Once the case happened, break the loop
    }
  }
  return isPrimeFlag;
}

int main() {
  int number;
  cout << " Please enter a number : ";
  cin >> number;

  bool isPrimeFlag = isPrimeNumber(number);
  if (isPrimeFlag) {
    cout << " The number " << number << " is a prime number." << endl;
  } else {
    cout << " The number " << number << " is not a prime number." << endl;
  }
}
