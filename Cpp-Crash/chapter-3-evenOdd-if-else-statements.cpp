#include <iostream>
using namespace std;

// User enters integer number
// Program write out if that number is even or odd

int main() {
  int number;                 // declare the number variable.
  cout << "Enter a number: "; // Hint the user to enter a number.
  cin >> number;              // get the number from the user.
  // determine if the number is even or odd
  if (number % 2 == 0)
  // notice the curly brackets which shows the next operation if number % 2 == 0
  {
    cout << "You entered an even number." << endl;
  } else

  // otherwise, the number is odd, notice the coding style.
  {
    cout << "You entered an odd number." << endl;
  }
  cout << "Thank you for using the program!" << endl;
}
