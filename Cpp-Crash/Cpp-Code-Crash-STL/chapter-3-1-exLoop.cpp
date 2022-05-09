#include <cstdio>
#include <iostream>
using namespace std;

/*
500以内被3 和5 整除
统计数字的位数
数字反转

*/

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

int main() {
  // exDivisible3and5();
  // numDigitsCounter();
  // exReverseNumbers01();
  // exReverseNumbers02();
  // int a = 123 / 10;
  // printf("%d\n", a);
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
