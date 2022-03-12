#include <iostream>
using namespace std;

int main() {
  // show the number of days in certain month, year.
  // leap year:
  ///(year%4=0 && year%100!=0 || year%400==0)
  int year, month;
  cout << "Please enter the year and month:YYYY MM " << endl;
  cin >> year >> month;
  switch (month) {
  case 2:
    (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        ? cout << "29 days in February" << endl
        : cout << "28 days in February" << endl;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    cout << "30 days in this month" << endl;
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    cout << "31 days in this month" << endl;
    break;
  default:
    cout << "NOT VALID!" << endl;
  }
}
