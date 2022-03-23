#include <iostream>
using namespace std;

bool isPrimeNumber(int number) {

  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      return false; // equals to isPrimeFlag = false; break;
    }
  }
  return true; // if there is no number between [2,number] that can divide
               // number, then it is REALLY a prime number, the bool function
               // will return true.
}

int main() {
  // check the number range from 1 to 1000:
  for (int i = 1; i <= 1000; i++) {
    bool isPrime = isPrimeNumber(i);
    if (isPrime) {
      cout << i << " is a prime number." << endl;
    }
  }
}
