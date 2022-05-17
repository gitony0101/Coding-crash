#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

/*
阶乘 for
500以内被3 和5 整除 while
统计数字的位数 while
数字反转 while
酒店保险箱 do while
模拟ATM机 do while + switch case

*/

void exFactorial() { //求整数的阶乘
  int number, factorial = 1;
  printf("Please enter an integer:\n");
  cin >> number;
  //递减for循环
  for (int i = number; i >= 1; i--) {
    factorial *= i;
  }
  printf("The factorial of %d is %d\n", number, factorial);
}

void exDivisible3and5() {
  // Write out all the numbers between 100-500 that are divisible by 3 and 5
  int counter = 100;
  while (counter <= 500) {
    if (counter % 3 == 0 && counter % 5 == 0)
      printf("%d is divisible by 3 and 5\n", counter);
    counter++;
    // ++counter; // same as above
  }
}

void numDigitsCounter() {

  int number, counter = 0;
  printf("Please enter a number:\n");
  cin >> number;
  if (number == 0)
    printf("You just entered 0.\n");
  else
    while (number != 0) {
      number /= 10;
      ++counter;
    } // counter++; all the same
  //  we need this curly braces
  printf("The number you entered has %d digits.\n", counter);
}

void exReverseNumbers01() { // Reversing Number
  int number, reversedNumber = 0;
  printf("Please enter a number:\n");
  cin >> number;
  while (number != 0) {
    int lastDigit = number % 10; //对该数字用10来取模求的最后一位数字

    reversedNumber *= 10; //通过乘以10来把最后一位数字升位，
    reversedNumber +=
        lastDigit; // 在下一步中，添加新的最后一位数字，它仍然在最后的位置
    number /= 10;
  } //  we need this curly braces
  printf("Reversed number: %d.\n", reversedNumber);
}

void hotelSafeLocker() { //模拟酒店房间里的保险箱密码锁
  int userPin = 1234, pin,
      errorCounter = 0; // 初始化密码1234，初始化自定义pin，初始化拨错次数0
  do {
    printf("Please enter your 4 digit \n");
    cin >> pin;
    if (pin != userPin) {
      errorCounter++;
      printf("Incorrect pin,please try again.\n");
    }
  } while (errorCounter < 3 && pin != userPin);
  if (pin == userPin)
    printf("Loading...\nAccess granted.\n");
  else
    printf("Access denied.\n");
}

void simATM() { // do while 循环模拟ATM机
  int option;
  double deopositAmount, withdrawAmount, balance = 1500;
  printf("********MENU*******\n"
         "*1.Balance        *\n"
         "*2.Deposit        *\n"
         "*3.Withdraw       *\n"
         "*4.Exit           *\n"
         "*******************\n"
         "\n\nPress the number of the option.\n");
  do { // 查看银行存款，存取款。
    cin >> option;
    system("cls");
    switch (option) {
    case 1:
      printf("Balance : $ %f\n", balance);
    case 2:
      printf("Deposit amount:\n");
      cin >> deopositAmount;
      balance += deopositAmount;
      break;
    case 3:
      printf("Please enter the money you want to withdraw:\n");
      cin >> withdrawAmount;

      if (withdrawAmount <= balance)
        balance -= withdrawAmount;
      else
        printf("You do not have enough balance.\n");
      break;
    }
  } while (option != 4); // 限定了循环
}

int main() {
  // exFactorial();
  // exDivisible3and5();
  // numDigitsCounter();
  // exReverseNumbers01();
  // hotelSafeLocker();
  // simATM();
}

// Notes:
/*
about the numDigitsCounter():

We find that 1 / 10 = 0, so here is our while loop :

      step 1 initialize the counter variable as 0;
  step 2 input the number we want to count the digits;
  step 3 let the number divide by 10, and repeat step 3 until the number is
  0,
      save the times of division in the counter variable;
  step 4 print out the number of digits.


Now：
Please enter a number : 123124345356423665777 The
    number you entered has 10 digits.

    This is a story about the datatype : 123124345356423665777 is
        exceeding the range of an int,
    by very far

        you could declare number as a size_t instead,
    which translates to the largest unsigned
        integer type natively available on the
        platform(probably 64 bits in most cases)
*/

/*
Reverse Numbers:

For instance, a number 123, we want to reverse it to 321.

step 1.we need a container - a variable to store the reversed number which is
intialized as 0;
step 2.get the the last digit of the number with the method of
**taking the modulo of the number by 10**;

step 3.**multiply the last digit by10** and add it to the reversed number;
step 4.taking the modulo of the number by 10 to get the last digit at that
time and repeat step 2 and 3 until the previous number is 0;

- Get the last digit by taking modulo of the number by 10,which will be
multiplied by 10 at the next step.
- You need to know the modulus method

*/

/* not work
void exReverseNumbers02() { // Reversing Number
  int number, reversedNumber = 0;
  printf("Please enter a number:\n");
  cin >> number;
  while (number != 0) {
    reversedNumber += number % 10;
    number /= 10;
  }
  printf("Reversed number: %d.\n", reversedNumber);
}

但是可以参考这道medium
https://leetcode.com/problems/reverse-integer/discuss/1054279/faster-than-100.00-of-C%2B%2B-online-submissions
*/
