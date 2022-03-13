#include <iostream>
using namespace std;

int main() {
  // Simulate the safe locker box in the hotel

  int userPin = 1234, pin, errorCounter = 0;

  do {
    cout << "Please enter your 4-digit pin: ";
    cin >> pin;
    if (pin != userPin) {
      errorCounter++;
      cout << "Incorrect pin, please try again." << endl;
    }
  } while (errorCounter < 3 && pin != userPin);
  if (errorCounter < 3)
    cout << "Access granted." << endl;
  else
    cout << "Access denied." << endl;

  //   if (pin == userPin) {
  //     cout << "Loading..." << endl;
  //     cout << "Access granted." << endl;
  //   } else
  //     cout << "Access denied." << endl;
}
