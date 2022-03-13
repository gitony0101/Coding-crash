#include <iostream>
using namespace std;

int main() {
  // Simulate the safe locker box in the hotel

  int userPin = 1234, pin,
      errorCounter = 0; // initialize the userPin and pin which would be the
                        // input of the user, and the errorCounter which is used
                        // to count the number of error, start from 0 times.

  // Do-While loop:

  do { // code block will be executed when the while condition is true
    cout << "Please enter your 4-digit pin: "; // Hint user to enter the pin
    cin >> pin;                                // input the pin number
    if (pin != userPin) { // condition :if the pin is not equal to the userPin
      errorCounter++;     // increment the errorCounter
      cout << "Incorrect pin, please try again." << endl; // hint try again
    }
  } while (errorCounter < 3 &&
           pin != userPin); // while condition for the do block
  if (pin == userPin) {     // condition : if the pin is equal to the userPin
    cout << "Loading..." << endl;
    cout << "Access granted." << endl;
  } else
    cout << "Access denied." << endl;
}
