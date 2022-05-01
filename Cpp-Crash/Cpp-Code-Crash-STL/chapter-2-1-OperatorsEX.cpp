#include <cstdio>
#include <iostream>
using namespace std;

/*Operator ex
Arithmetic Operators
Assignment Operators
Relational Operators
Logical Operators

priority:
  Arithmetic operators >> relation operators >> logical operators
*/

void exArithmetic() { // arithmetic operators take care of the results and the
                      // printf format specifiers

  printf("5+2 = %d\n5 / 2 = %d\n5.0 / 2 = %f\n5 / 2.0 = %f\n5 %% 2 = %d\n",
         5 + 2, 5 / 2, 5.0 / 2, 5 / 2.0,
         5 % 2 // modulus operator
  );
}

void exAssignment() { // Assignment operators: `=, +=, -=, \*=, /=,
                      // %=, <<=,>>=,
                      // &=, |=, ^=`
  int x = 5;
  x += 7; // x = x + 7,-= is the same as x = x - 7
  printf("x = %d\nx++ = %d++x = %d\n", x, x++, ++x);
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

int main() {
  exArithmetic();
  exAssignment();
  exRelationalAndLogical();
}

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
