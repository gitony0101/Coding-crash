# C++ Notes 0

Tutorial:

- CodeBeauty 10-hours
  ·
  Books:

- C++ Crash

Ref:

- W3C School

# Chap 0

## Intro C++

- Part 1

  - What is C++
  - What is it used for
  - What kind of Compiler applications can we build with C++
  - Why it was created
  - Source code
  - Object code
  - Algorithm

- Part 2
  - Cpp console app

## What is C++?

General purpose

- Create all types of programs:
  - Games,
  - Operating systems,
  - Browsers,compilers,
  - Embedded systems,
  - All other general purpose software.
- Compiled
  - Converting code that you understand into code that your computer understands
  - Building code
  - Compile-time errors
- Case sensitive
  - C++distinguishes between uppercase and lowercase letters
  - **myVariablel != myvariable**

```c++
#include <iostream> // header file-"Library"
                    // input output stream
int main()
{ // main: main function
  std::cout << "Hello World!\n"; // this will output the console hello world.
  // cout : consloe output
  // cin : console input
  // std : name of the base for using cout and cin
  std::cout << "My name is Tony0101." << std::endl;
  std::cout << "Today is Wednesday.\n";
}
```

```c++
#include <iostream> // header file-"Library"
                    // input output stream
using namespace std; // using the std at global level
int main()
{ // main: main function
  cout << "Hello World!\n"; // this will output the console hello world.
  // cout : consloe output
  // cin : console input  // std : name of the base for using cout and cin
  cout << "My name is Tony0101." << endl;
  cout << "Today is Wednesday.\n";
}
```

```c++
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World!\n";
  cout << "My name is To ny0101." << endl;
  cout << "Today is Wednesday.\n";
  cout << "Have a nice day!\n";
}
```

## About the C++ Version and Evironments

## One More Thing

# Chapter 1 Variables, Datatypes

## Variales

Variales: store int float double char string bool with maxium limit container.

- Can NOT store different datatypes in one varialble
- Can NOT change the datatype once you created

Create a variale "annualsalary" with the datatype "float", put the value "50000.99" into the variable.

```c++
#include <iostream>
using namespace std;

int main(){
    float annualSalary = 50000.99;
    float monthlySallary = annualSalary / 12;
    cout << "Annual salary: " << annualSalary << endl;
    cout << "Your monthly salary is : " << monthlySallary << endl;
}
```

```c++
#include <iostream>
using namespace std;

int main(){
    float annualSalary = 500000;
    float monthlySallary = annualSalary / 12;
    cout << "Annual salary: " << annualSalary << endl;
    cout << "Your monthly salary is : " << monthlySallary << endl;
}
```

- cin ： input from users.

```c++
#include <iostream>
using namespace std;

int main()
{
float annualSalary;
cout << "Please enter your annual salary:\n";
cin >> annualSalary;
float monthlySallary = annualSalary / 12;
cout << "Annual salary: " << annualSalary << endl;
cout << "Your monthly salary is : " << monthlySallary << endl;
}
```

Let pc compute the income in 10 years

```c++
#include <iostream>
using namespace std;

int main()
{
float annualSalary;
cout << "Please enter your annual salary:\n";
cin >> annualSalary;
float monthlySallary = annualSalary / 12;
cout << "Annual salary: " << annualSalary << endl;
cout << "Your monthly salary is : " << monthlySallary << endl;
cout << "In 10 years you will earn:" << annualSalary * 10 << endl;
}
```

## Datatypes

Most common datatypes we use in C++.

```c++
#include <climits>
#include <iostream>
using namespace std;

int main() { //most common datatypes we use in C++
  int yearOfBirth = 1995;
  char gender = 'm';
  bool isOlderThan18 = true;
  float averageGrade = 4.5;
  double balance = 452345234;


  cout << "Int min value is " << INT_MIN << endl;
  cout << "Int max value is " << INT_MAX << endl;
  cout << "Uint max value is " << UINT_MAX << endl;

  cout << "Size of char is " << sizeof(char) << "bytes\n";
  cout << "Size of unsinged int is " << sizeof(unsigned int) << " bytes\n";
  cout << "Size of int is " << sizeof(int) << " bytes\n";
  cout << "Size of float is " << sizeof(float) << " bytes\n";
  cout << "Size of double is " << sizeof(double) << " bytes\n";

}

```

The following table shows the variable type, how much memory it takes to store the value in memory, and what is maximum and minimum value which can be stored in such type of variables.

![img](img/datatyes.png)

## Datatype overflow

```c++
#include <iostream>
using namespace std;

int main() { // max amount of INT
  int intMax = INT_MAX;
  cout << intMax << endl;
  cout << intMax + 1 << endl;

}
```

### Datatype importance

**The datatype is critical to the program**. If you use the wrong datatype, the program will not work, or in worse,the program will give you wired result.

It actually works like the clock when it is over INT_MAX, then it goes to the INT_MIN.

# Chapter 2 ASCII Program

```c++
#include <iostream>
using namespace std;

int main() {
  cout << (int)'a' << endl;
  cout << int('a') << endl;
  cout << int('A') << endl;
}
```

The $\textit{American Standard Code for Information Interchange (ASCII)}$ table assigns integers to characters. Table 2-4 shows the ASCII table. For each integer value in decimal (0d) and hex (0x), the given control code or printable character is shown.

![img](img/ascii-1.png)

![img](img/ascii-2.png)

```c++

```

So， you can build an app to cipher or decipher words and ASCII codes.

```c++
#include <iostream>
using namespace std;

int main() {
  char c1, c2, c3, c4, c5;
  cout << "Enter 5 letters:";
  cin >> c1 >> c2 >> c3 >> c4 >> c5;

  cout << "ASCII message:" << int(c1) << " " << int(c2) << " " << int(c3) << " "
       << int(c4) << " " << int(c5) << endl;
  // " " is the blankspace character
}

```

```c++
#include <iostream>
using namespace std;

int main() {
  char c1, c2, c3, c4, c5;
  cout << "Enter 5 ASCII numbers:";
  cin >> c1 >> c2 >> c3 >> c4 >> c5;

  cout << "The message:" << char(c1) << " " << char(c2) << " " << char(c3)
       << " " << char(c4) << " " << char(c5) << endl;
  // " " is the blankspace character
}

```

# Chapter 3 If-else statements

## Operators

Operators in C++ can be classified into 6 types:

Arithmetic Operators
Assignment Operators
Relational Operators
Logical Operators
Bitwise Operators // not in in note ver 0.1
Other Operators // not in in note ver 0.1

### Arithematic operators: +, -, \*, /, % (modulus)

First of all ,we need to know how the computer to calculate the result.

```c++

#include <iostream>
using namespace std;

int main() {
  cout << 5 + 2 << endl;
  cout << "5 / 2 = " << 5 / 2 << endl; // take care!
  cout <<"5.0 / 2 = " <<  5.0 / 2 << endl; // take care!
  cout <<"5 / 2.0 = " <<  5 / 2.0 << endl;//take care!
  cout << "5 % 2 = " << 5 % 2 << endl; // modulus operator
  cout << "47 % 10 = " <<47 % 10 << endl; // modulus operator
}
```

**Here we notice that 5 / 2 = 2 since C++ returns the integer value of the division.If you want to get the decimal value, you need to change the type of the divisor or dividend to float.**

- Increment/decrement operators ++ --
  Increment/decrement operators increment or decrement the value of the object.

  Pre-increment `++a` and pre-decrement `--a` operators increments or decrements the value of the object and returns a reference to the result.

Post-increment `a++` and post-decrement `a--` creates a copy of the object, increments or decrements the value of the object and returns the copy from before the increment or decrement.

```c++
#include <iostream>
using namespace std;

int main() {
  // ++,-- increment and decrement operators
  int counter = 7;
  counter++;
  cout << counter << endl;
  counter--;
  cout << counter << endl;
  // preincrement, predecrement
  // postincrement, postdecrement
  int counter_2 = 7;
  cout << counter_2++ << endl; // shows 7 which is the value before increment
  cout << counter_2 << endl; // Next, shows 8 which is the value after increment
  cout << counter_2--
       << endl; // shows 8 which is the value before decrement,yes, counter_2 is 8 now becasue of previous increment.
  cout << counter_2 << endl; // Next, shows 7 which is the value after decrement
}
```

### Relational operators: <, >, <=, >=, ==(just is equal to operator), !=

```c++
#include <iostream>
using namespace std;

int main()
{
int a = 6, b = 5;
cout << (a > b ) << endl; // shows 1 for true
cout << (a < b)  << endl; // shows 0 for false
cout << (a >= b) << endl; // shows 0 for false
cout << (a <= b) << endl; // shows 1 for true
cout << (a == b) << endl; // shows 0 for false
cout << (a != b) << endl; // shows 1 for true
}

```

### Logical Operators &&(AND), ||(OR), !(NOT)

Logical operators evaluate Boolean logic on bool types. You characterize operators by how many operands they take. A unary operator takes a single operand, a binary operator takes two, a ternary operator takes three, and so on. You categorize operators further by describing the types of their operands.

- The unary negation operator `!` takes a single operand and returns its opposite. In other words, !true yields false, and !false yields true.
- The logical operators AND `&&` and OR `||` are binary.
- Logical AND returns true only if both of its operands are true. Logical OR returns true if either or both of its operands are true.

```c++
#include <iostream>
using namespace std;

int main()
{
int a = 6, b = 5;
cout << (a == 5 && b ==5) << endl; // AND operator,shows 0 for false
cout << (a == 5 || b ==5) << endl; // OR operator,shows 1 for true
// JUST add a '!' to the front of the operator to get the opposite result
cout << (!(a == 5 && b ==5)) << endl; // NOT operator,shows 1 for true
}
```

- Operator priority

  Arithmetic operators >> relation operators >> logical operators

```c++
#include <iostream>
using namespace std;

int main()
{
int x = 6, y = 8;
cout << (x ==6 && y == 5 +3) << endl; // calculates 5+3 first, then checks  whether x==6 , y== 8 seperately, at last, make sure they are BOTH true, shows 1 for true.

}
```

### Assignment operators: =, +=, -=, \*=, /=, %=, <<=, >>=, &=, |=, ^=

```c++
#include <iostream>
using namespace std;

int main() {
  int x =5;
  x +=7; // x = x + 7 (equals to 12)
  cout << x << endl;
  // -= is the same as x = x - 7

}

```

### Later, check [**C++ Operator Precedence Table**](https://en.cppreference.com/w/cpp/language/operator_precedence) for more information.

### How to swap 2 variables values?

- Pouring liquids

<div align = "center">
<div style="width:200px">

![img](./img/swap-pouring-with-3rd-glass)

</div>
</div>

Yeah, we need a third glass to contain one of the two liquids.

However, we can exchange them without the third container since we can make full use of themselves:

Let's code:

```c++
#include <iostream>
using namespace std;

int main() {
  // Program to swap two variables values
  int a = 20, b = 10;
  int temp = a; // hold the value of a in temp
  a = b;        // assign the value of b to a
  b = temp;     // assign the value of temp to b
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  // Also, we can make it without using the third container, instead, we will
  // handle it in a mathmatic way:
  int x = 20, y = 10;
  x = x + y; // now x stores the sum of x and y which is 30
  y = x - y; // the NEW x subtracts the value of y ITSELF, which is 20, now we
             // get y value swapped
  x = x - y; // the NEW x subtracts NEW y, in the end x value got swapped which
             // is 10.
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
}
```

## If-else statements

- If-else statements
- conditional operator (0?1:2)
- Switch case statements

```c++
#include <iostream>
using namespace std;

// User enters integer number
// Program write out if that number is even or odd

int main() { cout << 10 % 3 << endl; }

```

with the modulo operator,we can make the function with the flowchart:

![img](./img/chapter-3-ifelseDIagram.png)

```c++
#include <iostream>
using namespace std;

// User enters integer number
// Program write out if that number is even or odd

int main() {
  int number;                 // declare the number variable.
  cout << "Enter a number: "; // Hint the user to enter a number.
  cin >> number;              // get the number from the user.
  // determine if the number is even or odd
  if (number % 2 == 0)
  // notice the curly brackets which shows the next operation if number % 2 == 0
  {
    cout << "You entered an even number." << endl;
  } else

  // otherwise, the number is odd, notice the coding style.
  {
    cout << "You entered an odd number." << endl;
  }
  cout << "Thank you for using the program!" << endl;
}
```

Review this code carefully and notice hwo to code if-else statement.

Let's get it more complex.
Determine whether a triangle is equilateral,isosceles or scalene.

![img](img/chapter-3--Tri-ifelseDIagram.png)

```c++
#include <iostream>
using namespace std;

int main() {
  // User enters side lengths of a triangle (a,b,c)
  // Program should write out whether that triangle is equilateral,isosceles or
  // scalene
  float a, b, c;
  cout << "Enter the length of the triangle's each side a,b,c:";
  cin >> a >> b >> c;
  if (a == b && b == c) // Here I hide the curly brackets for better readability.
    cout << "The triangle is equilateral.\n";
  else {
    if (a != b && b != c && a != c) {
      cout << "The triangle is scalene.\n";
    } else {
      cout << "The triangle is isosceles.\n";
    }
  }
}
```

### From BMI Calulator to algorithm design

There are 3 thresholds for BMI:
// Underweight 18.5
// Normal weight 18.5-24.9
// Overweight >25

So with the if-else statement, we can design the algorithm with the condition:

1. if <= 18.5
2. if>= 25
3. else

![img](./img/BMI.jpg)

as we see in the plot, we can make the "Break points" with 18.5 and 25 to reduce steps.

```c++
#include <iostream>
using namespace std;

int main() {
  // BMI calculator
  // weight(kg)/height * height(m)
  // Underweight 18.5
  // Normal weight 18.5-24.9
  // Overweight >25
  float weight, height, bmi; // bmi = weight(kg)/height * height(m)
  cout << "Enter your weight(kg): ";
  cin >> weight;
  cout << "Enter your height(m): ";
  cin >> height;
  bmi = weight / (height * height); // essential brackets

  // this if else statement is more precise:
  if (bmi < 18.5)
    cout << "you are underweight" << endl;
  else if (bmi > 25)
    cout << "you are overweight" << endl;
  else
    cout << "you are normal weight" << endl;

  cout << "Your BMI is: " << bmi << endl;
}

```

```c++

```

### Codidtional Operators (0 ? 1 : 2) : short version of if-else statement

IN C++ :

```c++
Exp1 ? Exp2 : Exp3;
```

Exp1, Exp2, and Exp3 are expressions. Notice the use and placement of the **colon**.

The **value of a ? expression** is determined like this: Exp1 is evaluated. If it is true, then Exp2 is evaluated and becomes the value of the entire ? expression. If Exp1 is false, then Exp3 is evaluated and its value becomes the value of the expression.

The **? is called a ternary operator** because it requires three operands and can be used to replace if-else statements.

```c++
#include <iostream>
using namespace std;

int main() {
  int hostUserNum, guestUserNum;
  cout << "Enter a host number: ";
  cin >> hostUserNum;
  system("clear");
  cout << "Enter a guest number: ";
  cin >> guestUserNum;

  if (guestUserNum == hostUserNum)
    cout << "Correct." << endl;
  else
    cout << "Failed." << endl;
}

```

Now lets take a look at the short version:
condicion ? expresion1 : expresion2

```c++
#include <iostream>
using namespace std;

int main() {
  int hostUserNum, guestUserNum;
  cout << "Enter a host number: ";
  cin >> hostUserNum;
  system("clear");
  cout << "Enter a guest number: ";
  cin >> guestUserNum;
    (guestUserNum == hostUserNum)? cout << "Correct." :cout << "Failed.";
}

```

Also, we can upgrade the function with loops later.

### From if-else statement to swich case statement

Now let's build a calculator with if-else statement.

```c++
#include <iostream>
using namespace std;

int main() {
  float num1, num2;
  char operatorCalc;
  cout << "Please enter the number and operator: " << endl;
  cin >> num1 >> operatorCalc >> num2;
  if (operatorCalc == '+')
    cout << num1 + num2 << endl;
  else if (operatorCalc == '-')
    cout << num1 - num2 << endl;
  else if (operatorCalc == '*')
    cout << num1 * num2 << endl;
  else if (operatorCalc == '/')
    cout << num1 / num2 << endl;
  // else if (operatorCalc == '%')
  //   cout << int(num1) % int(num2)
  //        << endl;
  // caution: only modulo the intergers.
  else
    cout << "Invalid operator" << endl;
}
```

Cool calculator, and you got hinted that **the modulo integers ONLY**,you made it, now let's introduce the switch case statement.

This is the formal version of the switch case statement:

```c++
switch (expression)  {
    case constant1:
        // code to be executed if
        // expression is equal to constant1;
        break;

    case constant2:
        // code to be executed if
        // expression is equal to constant2;
        break;
        .
        .
        .
    default:
        // code to be executed if
        // expression doesn't match any constant
}
```

Where the expression is corresponding to constantX.

#### Why switch case statement?

- **Enhance the efficiency of the program, reduce the number of if-else statements.**

With this method, let's code the calculator with switch case statement.

```c++
#include <iostream>
using namespace std;

int main() {
  float num1, num2;  // declare two float variables
  char operatorCalc; // declare the operatoras  a char variable which we will
                     // use to store the operator
  bool isNum1Int, isNum2Int; // declare two bool variables to be determine
                             // whether num1 and num2 are integers.
  cout << "Please enter the number and operator: " << endl;

  cin >> num1 >> operatorCalc >>
      num2; // declare the expression we will use in the calculator.

  switch (operatorCalc) {
  case '-':
    cout << num1 << operatorCalc << num2 << " = " << num1 - num2 << endl;
    break;
  case '+':
    cout << num1 << operatorCalc << num2 << " = " << num1 + num2 << endl;
    break;
  case '*':
    cout << num1 << operatorCalc << num2 << " = " << num1 * num2 << endl;
    break;
  case '/':
    cout << num1 << operatorCalc << num2 << " = " << num1 / num2 << endl;
    break;
  case '%':
    isNum1Int = (int(num1) == num1);
    isNum2Int = (int(num2) == num2);
    if (isNum1Int && isNum2Int) // if they are both true.
      cout << num1 << operatorCalc << num2 << " = " << int(num1) % int(num2)
           << endl;
    else
      cout << "Invalid input" << endl;
    break;
  default:
    cout << "Invalid calculation" << endl;
  }
}

```

yeah, we made the defalut condition as the other error cases.

Moreover, notice that : 123 / 10 = 12, 123.4 / 10 = 12.34.

### Swich case 2.0; Number of days

[Leap Year algorithm](https://www.mathsisfun.com/leap-years.html)

```c++
/(year%4=0 && year%100!=0 || year%400==0)
```

```c++
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
```

The switch case statement just **consider situations within the `cases`**,so if you try 13 or -1 as the month which is not delared in the statement, the function itself show as an error.

# Chapter 4 Loops

## Intro to Loops

Loops as iteration statements execute a statement repeatedly.

The four kinds of iteration statements are the while loop, the do-while loop, the for loop, and the range-based for loop.

## Write the first loop

Write out all the numbers between 100-500 that are divisible by 3 and 5

```c++
#include <iostream>
using namespace std;

int main() {
  // Write out all the numbers between 100-500 that are divisible by 3 and 5
  int counter = 100;
  while (counter <= 500) {
    if (counter % 3 == 0 && counter % 5 == 0)
      cout << counter << " is divisible by 3 and 5" << endl;
    counter++;
    // ++counter; // same as above
  }
}
```

## While Loop

### Count digits of a number

Now let's build a while loop to count digits of a number,this is a classical way to count digits.

As we discussed previously,C++ returns the integer value of the division of two integers, like:

```c++
#include <iostream>
using namespace std;

int main() {
  cout << "5 / 2 = " << 5 / 2 << endl; // take care!
  cout << "1 / 10 = " << 1 / 10 << endl;
  cout << - 1 / 10 << endl;
}
```

We find that 1 / 10 = 0, so here is our while loop:

step 1 initialize the counter variable as 0;
step 2 input the number we want to count the digits;
step 3 let the number divide by 10, and repeat step 3 until the number is 0,save the times of division in the counter variable;
step 4 print out the number of digits.

```c++
#include <iostream>
using namespace std;

int main() {
  // Count digits of a number
  int number, counter = 0;
  cout << "Please enter a number: ";
  cin >> number;
  if (number == 0)
    cout << "You juse entered 0." << endl;
  else {
    while (number != 0) {
      number /= 10;
      // counter++; //all the same
      ++counter;
    }
  }
  cout << "The number you entered has " << counter << " digits." << endl;
}
```

    Please enter a number: 123124345356423665777
    The number you entered has 10 digits.

This is a story about the datatype:
123124345356423665777 is exceeding the range of an int, by very far

you could declare number as a size_t instead, which translates to the largest unsigned integer type natively available on the platform (probably 64 bits in most cases)

#### ？

So, let's move on and imporve later.

### Reversing number

For instance, a number 123, we want to reverse it to 321.

step 1.we need a container - a variable to store the reversed number which is intialized as 0;
step 2.get the the last digit of the number with the method of **taking the modulo of the number by 10**;
step 3.**multiply the last digit by 10** and add it to the reversed number;
step 4.taking the modulo of the number by 10 to get the last digit at that time and repeat step 2 and 3 until the previous number is 0;

- Get the last digit by taking modulo of the number by 10,which will be multiplied by 10 at the next step.
- You need to know the modulus method [here, consider it with periodic features](https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/what-is-modular-arithmetic).

```c++
#include <iostream>
using namespace std;

int main() {
  // Reversing number
  int number, reversedNUmber = 0;
  cout << "Please enter a number: ";
  cin >> number;

  while (number != 0) {

    int lastDigit = number % 10; // get the last digit by taking the modulo of
                                 // the number by 10 lastDigit += number % 10;
    reversedNUmber *= 10;        // level up the digit by multiplying it by 10
    reversedNUmber += lastDigit; // in the next step the new last digit still at
                                 // the last position
                                 // Or you can do it in one line:
                                 // reversedNUmber += number % 10
    number /= 10; // keep on dividing the number by 10 until it reaches 0
  }
  cout << "Reversed number :" << reversedNUmber << endl;
}
```

## Do-while Loop

- Syntax

```c++
do {
  // code block to be executed
}
while (condition);
```

### Hotel Safe Locker

Make the safe locker by using do-while loop.

```c++
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
```

This is a simple safe locker while here is the Saldina code's different part:

```c++
  if (errorCounter < 3)
    cout << "Access granted." << endl;
  else
    cout << "Access denied." << endl;
```

## For Loop

- Syntax

```c++
 for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
```

Cool, three statements.

Intro for loop with application of factorial.

#### Factorial

```c++
#include <iostream>
using namespace std;

int main() {
  // The factorial of a number:
  // The product of all the integers from 1 to the number.
  // The number must be natural number。
  int number;
  cout << "Please enter a number, I will show the factorial of it : " << endl;
  cin >> number;

  int factorial = 1; // initialize the factorial number with 1

  // Also we can do it this way: 6! = 6*5*4*3*2*1 = 720
  for (int i = number; i >= 1; i--) {
    factorial = factorial * i;
  }

  //   for (int i = 1; i <= number; i++) {
  //     factorial = factorial * i;
  //     // here the product : 1 * 2 * 3 * ...* number
  //     // also this explains why 0! = 1
  //   }
  cout << number << "! = " << factorial << endl;
}
```

It works,however, we still encounter the issue of datatype:

Please enter a number, I will show the factorial of it :
18
18! = -898433024

## Nest Loops

Now we will nest for loop with do-while loop.

### Nested For Loop with do-while loop, sum grade

Here we would like to sum up the 3 courses grades of a student, and get the average grade.
Why nest loop?

- 3 courses, each grade ranges from 1 to 5.

```c++
#include <iostream>
using namespace std;

int main() {
  // nest for loop with do-while loop
  // Sum up the grades and ger the average grade
  int grade, sum = 0; // initialize the grade and sum as 0, if sum is not
                      // initialized, there will be an error.
  for (int i = 0; i < 3; i++) {
    // for loop from 1 to 3 ,increment i by 1
    do { // dowhile loop
      cout << "Enter grade (1-5): " << endl;
      cin >> grade;
    } while (grade < 1 || grade > 5); // tricky part here
    sum += grade;
  }
  cout << "The sum of the grade is :" << sum << endl;
  cout << "The average of the grade is :" << float(sum) / 3.0 << endl;
}
```

Here we need to know why the code is : **while (grade < 1 || grade > 5)**

1. Here is the loop from 1 to 3, you just have 3 times for storing the grade.
2. If the grade is out of range, the code should not store the grade and ask the user to enter the grade again,so the range is grade < 1 OR grade > 5

### Nest loop: Multiplication table

<div align = "center">
<div style="width:500px">

![img](./img/MultiplyTable.jpg)

</div>
</div>

There is a normal version, now we can use do-while loop to make it more flexible.

```c++
#include <iostream>
using namespace std;

int main() {
  // Make a Multiplication Table
  // Double Loop?
  int a, b;
  do {
    cout << "Enter the first integer (0-50) :" << endl;
    cin >> a;
    cout << "Enter the second integer (0-50) :" << endl;
    cin >> b;
  } while (a >= 50 || a <= 0 || b >= 50 || b <= 0);

  cout << "Multiplaction Table for " << a << " * " << b << ":" << endl;

  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      cout << i << " * " << j << " = " << i * j << endl;
    }
    cout << endl;
  }
  cout << "END of Multiplaction Table for " << a << " * " << b << endl;
}
```

### Nest Loop Rectangle shape (still double loop)

Standard library header <iomanip>

- `iomanip` is a library for input and output manipulation.
- setw()

```c++
#include <iomanip>
#include <iostream> // import iomanip to use setw()

using namespace std;

int main() {
  int height, width;
  char symbol;
  cout << "Enter height: ";
  cin >> height;
  cout << "Enter width: ";
  cin >> width;
  cout << "Enter symbol: ";
  cin >> symbol;
  for (int h = 0; h < height; h++) {
    for (int w = 0; w < width; w++) {

      cout << setw(3) << symbol;
    }
    cout << endl;
  }
}
```

### Nest Loop Triangle shape

```c++
#include <iomanip>
#include <iostream> // import iomanip to use setw()

using namespace std;

int main() {
// make isolexic triangles
// set parameters.
int length;
cout << "Enter the length of the triangle: " << endl;
cin >> length;
char symbol;
cout << "Enter the symbol to use: " << endl;
cin >> symbol;

// nest the loop
// make the lower triangle
for (int i = 1; i <= length; i++) {
for (int j = 1; j <= i; j++) {
cout << setw(2) << symbol;
}
cout << endl;
}
cout << endl << endl;
// make the upper triangle
for (int i = length; i >= 1; i--) {
for (int j = 1; j <= i; j++) {
cout << setw(2) << symbol;
}
cout << endl;
}
}
```

# Chapter 5 Functions

## Function Introduction

### Difference between void main and int main

The main() function takes arguments, and returns some value like other functions.

- The program starts executing from this main() function, So the operating system calls this function. When some value is returned from main(), it is returned to operating system.

The void main() indicates that the main() function will NOT return any value, but the int main() indicates that the main() can return integer type data.

Try this code to find which function will show the result.

```c++
//Version 1
#include <iostream>
using namespace std;

void myFunction() { cout << "Hello World from myFunction." << endl; }

int main() { cout << "Hello World from main." << endl; }
```

We can see that there is only one code shows `Hello World from main.`

If we want to call the `myFunction` we need to call it in main:

```c++
#include <iostream>
using namespace std;

void myFunction() { cout << "Hello World from function." << endl; }

int main() {
  myFunction();

  cout << "Hello World from main." << endl;}
```

- Do not use the variable name as "`Function`" or "`main`" directly, the computer could not recognize them whether the build-in function or user-defined function.

### Decoration function

I like this function.

As for there are lots of functions in the project, we can use decoration function at first to name all the functions which make the code more readable:

```c++
#include <iostream>
using namespace std;

void myFunction_1(), myFunction_2(), myFunction_3(), myFunction_4(); // Decoration function, these functions are defined below:

int main() { // main function, call the functions
  cout << "Hello World from main" << endl;
  myFunction_1();
  myFunction_2();
  myFunction_3();
  myFunction_4();
  myFunction_4();// of course, we can call the function as many times as we want.
  myFunction_4();
}

void myFunction_1() { cout << "Hello World from myFunction_1" << endl; }

void myFunction_2() { cout << "This is the 2nd Function" << endl; }

void myFunction_3() { cout << "This is the 3rd Function" << endl; }

void myFunction_4() {
  cout << "This is the 4th Function, 4 is my lucky number." << endl;
}
```

## Function Parameters， Arguments

Yeah, \*args, \*\*kargs？ Perhaps.
Let's rock!

```c++
#include <iostream>
using namespace std;

void introduceMe(string name, string city, int age) // set the parameters here.

{
  // make void function with parameters
  cout << "My name is " << name << " and I am " << age << " years old." << endl;
}

int main() {
  // call function with two string parameters
  introduceMe("John", "New York", 30);
  introduceMe("Mary", "Paris", 25);
  introduceMe("Bob", "London", 35);
  introduceMe("Jane", "Berlin", 20);
}
```

### Default paremeters

Also, we can set default value for parameters, however,the default parameters must be placed at the **END of the parameter list**.

```c++
#include <iostream>
using namespace std;

void introduceMe(string name, int age, string city = "NJ") {
  // make void function with two string parameters
  cout << "My name is " << namœe << " , I am " << age << " years old."
       << " I'm from " << city << endl;
}

int main() {
  // call function with two string parameters
  introduceMe("John", 20, "New York");
  introduceMe("Mary", 25);
  introduceMe("Bob", 35);
  introduceMe("Jane", 20, "Berlin");
}
```





















Here is the input version:

```c++

#include <iostream>
using namespace std;

void introduceMe(string name, int age, string city = "NJ")
// not work
{
  // make void function with parameters and defalut parameter city
  cout << "My name is " << name << " , I am " << age << " years old." << endl;
  cout << " I'm from " << city << endl;
}

int main() {
  // call function with two string parameters
  string name_Input, city_Input;
  int age_input;
  cout << "Please enter your name: " << endl;
  cin >> name_Input;
  cout << "Please enter your age: " << endl;
  cin >> age_input;
  cout << "Please enter your city: " << endl;
  cin >> city_Input;
  introduceMe(name_Input, age_input, city_Input);
}
```









### 指针 pointer



### 引用 Reference

















```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```
