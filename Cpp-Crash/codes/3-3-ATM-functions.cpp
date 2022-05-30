#include <cstdio>
#include <iostream>
using namespace std;

/*模拟ATM取款机操作页面，主要练习switch case*/
void ATMFunc(int option, double depositamount, double withdrawamount,
             double balance = 500) {

  printf("***********MENU***************\n1.Balance\n2.Deposit\n3.Withdraw\n4."
         "Exit\n******************************\n" //没有必要一口气写完
         "Press the number of the option:\n ");
  cin >> option;
  switch (option) {
  case 1:
    printf("Balance:%f\n", balance);
    break;
  case 2:
    printf("Deposit amount:\n");
    cin >> depositamount;
    balance += depositamount;
    // printf() 返回到上一级菜单？
  case 3:
    printf("Please enter the money you want to withdraw:\n");
    cin >> withdrawamount;
  }
}

int main() { ATMFunc(); }
