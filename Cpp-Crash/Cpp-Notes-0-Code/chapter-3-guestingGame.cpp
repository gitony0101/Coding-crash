#include <iostream>
using namespace std;

int main() {
  int hostUserNum, guestUserNum;
  cout << "Enter a host number: ";
  cin >> hostUserNum;
  system("clear");
  cout << "Enter a guest number: ";
  cin >> guestUserNum;
  (guestUserNum == hostUserNum) ? cout << "Correct."
                                : cout << "Failed." << endl;
  //   int hostUserNum, guestUserNum;
  //   cout << "Enter a host number: ";
  //   cin >> hostUserNum;
  //   system("clear");
  //   cout << "Enter a guest number: ";
  //   cin >> guestUserNum;

  //   if (guestUserNum == hostUserNum)
  //     cout << "Correct." << endl;
  //   else
  //     cout << "Failed." << endl;
}
