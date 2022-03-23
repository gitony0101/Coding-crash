#include <iostream>
using namespace std;

int main() {
  // Reversing number
  int number, reversedNUmber = 0;
  cout << "Please enter a number: ";
  cin >> number;

  while (number != 0) {

    int lastDigit = number % 10; // get the last digit by taking the modulo of
                                 // the number by 10 lastDigit += number % 10;
    reversedNUmber *= 10;        // level up the digit by multiplying it by 10
    reversedNUmber += lastDigit; // in the next step the new last digit still at
                                 // the last position
                                 // Or you can do it in one line:
                                 // reversedNUmber += number % 10
    number /= 10; // keep on dividing the number by 10 until it reaches 0
  }
  cout << "Reversed number :" << reversedNUmber << endl;
}
