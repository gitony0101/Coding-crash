#include <iostream>
using namespace std;

int main() {
  // Count digits of a number
  int number, counter = 0;
  cout << "Please enter a number: ";
  cin >> number;
  if (number == 0)
    cout << "You juse entered 0." << endl;
  else {
    while (number != 0) {
      number /= 10;
      // counter++; //all the same
      ++counter;
    }
  }
  cout << "The number you entered has " << counter << " digits." << endl;
}

// This is a story about the datatype:
// 123124345356423665777 is exceeding the range of an int,
//     by very far

//         you could declare number as a size_t instead,
//     which translates to the largest unsigned integer type natively available
//     on
//         the platform(probably 64 bits in most cases)
