#include <cstdlib>
#include <iostream>
using namespace std;

// Do while loop for keeping this ATM alive.
// extra number not allowed

void showMenu() {
  cout << "***********MENU***************" << endl;
  cout << "1. Balance" << endl;
  cout << "2. Deposit" << endl;
  cout << "3. Withdraw" << endl;
  cout << "4. Exit" << endl;
  cout << "*******************************" << endl;
}

int main() {
  int option;
  double balance = 500;
  do {
    // Check balance,deposit,withdraw,show menu.

    showMenu();
    cout << "Press the number of the option: ";
    cin >> option;
    system("cls");
    switch (option) {
    case 1:
      cout << "Balance:" << balance << "$" << endl;
      break;
    case 2:
      cout << "Deposit amount:";
      double depositamount;
      cin >> depositamount;
      balance += depositamount;
      break;
    case 3:
      cout << "Please enter the money you want to withdraw:";
      double withdrawamount;
      cin >> withdrawamount;

      if (withdrawamount <= balance) {
        balance -= withdrawamount;
        break;
      } else {
        cout << "You do not have enough balance." << endl;
        break;
      }
    }
  } while (option != 4);
}
