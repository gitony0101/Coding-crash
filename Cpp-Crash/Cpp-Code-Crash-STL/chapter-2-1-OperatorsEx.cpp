#include <cstdio>
#include <iostream>
#include <math.h> // 平方 开方
using namespace std;

// Part 1
/*Operator ex
Arithmetic Operators
Assignment Operators
Relational Operators
Logical Operators

Priority:
  Arithmetic operators >> relation operators >> logical operators
swap value
*/
// Part 2
/*
even odd teller
shape of triangle
BMI Calculator
guest number
*/

void exArithmetic() { // arithmetic operators take care of the results and the
                      // printf format specifiers

  printf("5+2 = %d\n5 / 2 = %d\n5.0 / 2 = %f\n5 / 2.0 = %f\n5 %% 2 = %d\n",
         5 + 2, 5 / 2, 5.0 / 2, 5 / 2.0,
         5 % 2 // modulus operator
  );
}

void exRelationalAndLogical() { // Relational operators: <, >, <=, >=, ==(just
                                // is equal to
                                // operator), !=
  // Logical Operators &&(AND), ||(OR), !(NOT)
  int a = 6, b = 5;
  printf("Relational Operators\na > b : %s\na < b : %s\na >=b : %d\na <= b : "
         "%d\na == b : %d\na != b "
         ": %d\n",
         a > b ? "true" : "false", a < b ? "true" : "false", a >= b, a <= b,
         a == b, a != b); // notice this printf, you can control the printf
                          // true/false or 0/1
  printf("Logical Operators\na == 5 && b ==5 : %s\na == 5 || b ==5 : %s\n!(a "
         "== 5 && b ==5) : %d\n",
         a == 5 && b == 5 ? "Yeah!" : "Nay!", // && AND operator
         a == 5 || b == 5 ? "Yeah!" : "Nay!", /// || OR operator
         !(a == 5 && b == 5));                // ! NOT operator
}

void exSwap() {
  int a = 20, b = 10;
  int temp = a;
  a = b;
  b = temp;
  printf("a = %d\nb = %d\n", a, b);
  // mathmetic way
  int x = 20, y = 10;
  x = x + y;
  y = x - y;
  x = x - y;
  printf("x = %d\ny = %d\n", x, y);
}

//

void exEvenOdd() { // determine whether the number is even or odd
  int number;
  printf("Please enter a number:\n");
  cin >> number;
  if (number % 2 == 0) {
    printf("%d is an even number.\n", number);
  } else {
    printf("%d is an odd number.\n", number);
  }
}

void exTriangleShape() { //输入三角形三边长度，让程序判定这个三角形
  float a, b, c;
  printf("Please enter the triangle's each side:\n");
  cin >> a >> b >> c;
  if (a == b && b == c)
    printf("This is an equilateral triangle.\n");

  else {
    if (a != b && b != c && a != c)
      printf("This is a scalene triangle.\n");
    else
      printf("This is an isosceles triangle.\n");
  }
}

void exBMICalculator() {
  // BMI calculator
  // weight(kg)/height * height(m)
  // Underweight 18.5
  // Normal weight 18.5-
  float weight, height, bmi;
  // bmi = weight(kg) / height ** 2(m)
  printf("Please enter your height(M):\n");
  cin >> height;
  printf("Please enter your weight(Kg):\n");
  cin >> weight;
  bmi = weight / pow(height, 2);
  if (bmi < 18.5)
    printf("You are underweight.\n");

  else {
    if (bmi > 25)
      printf("You are overwieight.\n");
    else
      printf("You are normalweight");
  }
}

void exGuestNumber() {
  int hostUserNum, guestUserNum;
  printf("Enter a host number:\n");
  cin >> hostUserNum;
  system("clear");
  printf("Enter a guest number:\n");
  cin >> guestUserNum;

  if (guestUserNum == hostUserNum)
    printf("Correct.\n");
  else
    printf("Failed.\n");
}

int main() {
  // exArithmetic();
  // exAssignment();
  exRelationalAndLogical();
  // exSwap();
  //   exEvenOdd();
  //   exTriangleShape();
  // exBMICalculator();
  // exGuestNumber();
}

// void exAssignment() { // Assignment operators: `=, +=, -=, \*=, /=,
//                       // %=, <<=,>>=,
//                       // &=, |=, ^=`
//   int x = 5;
//   x += 7; // x = x + 7,-= is the same as x = x - 7
//   printf("x = %d\nx++ = %d++x = %d\n", x, x++, ++x);
// }

// int a = 5, b = 4;
// cout << a + (b++) << endl; // here b still = 4 because the expression is
//                            // evaluated before the increment
// cout << b << endl; // here b = 5 because the expression is evaluated after
//                    // the increment
// cout << (--a) + b << endl; // Now a = 4 since pre-decrement is evaluated
//                            // before the expression, also, b is 5 now
// cout << !(true && false) << endl;
// cout << !(true || false) << endl;
// int x = 7;
// cout << (++x <= 9 && x + 2 >= 10) << endl;
// // ++ x = 8, then x + 2 = 8 + 2 = 10, then determine the logics:both true,
// // so at last it is true and print 1.

// int y = 3;
// cout << (y == y++) << endl;
// // warning: unsequenced modification and access to 'y' [-Wunsequenced]
// // y = 3, then y++ = 4 will NOT show at this time,so it is true
// // and print 1, while let's look at it now:
// cout << y << endl;

// float z = 8;
// z += 2; // 10
// cout << z << endl;
// z /= 2; // 10 / 2 = 5
// cout << z << endl;
