# C++ Notes 0 Code 10 hours

# Chap 0

## Intro C++

- Part 1
  What is C++
  What is it used for
  What kind of
  Compiler
  applications can we
  build with C++
  Why it was created
  Source code
  Object code
  Algorithm

- Part 2
  - Cpp console app

## What is C++?

General purpose

- Create all types of programs:
  games,
  operating systems,
  browsers,compilers,
  embedded systems,
  all other general purpose software.
- Compiled
  - Converting code that you understand into code that your computer understands
  - Building code
  - Compile-time errors
- Case sensitive
  - C++distinguishes between uppercase and lowercase letters
  - **myVariablel != myvariable**

```cpp
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

```cpp
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

```cpp
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

# Chap 1 Variables, Datatypes

## Variales

Variales: store int float double char string bool with maxium limit container.

- Can NOT store different datatypes in one varialble
- Can NOT change the datatype once you created

Create a variale "annualsalary" with the datatype "float", put the value "50000.99" into the variable.

```cpp
#include <iostream>
using namespace std;

int main(){
    float annualSalary = 50000.99;
    float monthlySallary = annualSalary / 12;
    cout << "Annual salary: " << annualSalary << endl;
    cout << "Your monthly salary is : " << monthlySallary << endl;
}
```

```cpp
#include <iostream>
using namespace std;

int main(){
    float annualSalary = 500000;
    float monthlySallary = annualSalary / 12;
    cout << "Annual salary: " << annualSalary << endl;
    cout << "Your monthly salary is : " << monthlySallary << endl;
}
```

cin

```cpp
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

```cpp
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

Most common datatypes we use in C++

```cpp
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

```cpp
#include <iostream>
using namespace std;

int main() { // max amount of INT
  int intMax = INT_MAX;
  cout << intMax << endl;
  cout << intMax + 1 << endl;

}
```

It actually works like the clock when it is over INT_MAX, then it goes to the INT_MIN.

# Chapter 2 ASCII Program

```cpp
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

```cpp

```

So， you can build an app to cipher or decipher words and ASCII codes.

```cpp
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

```cpp
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

# Chap 3 If-else statements

## Operators

Operators in C++ can be classified into 6 types:

Arithmetic Operators
Assignment Operators
Relational Operators
Logical Operators
Bitwise Operators // not in in note ver 0.1
Other Operators // not in in note ver 0.1

### Arithematic operators: +, -, \*, /, % (modulus)

```cpp

#include <iostream>
using namespace std;

int main() {
  cout << 5 + 2 << endl;
  cout << 5 /2 << endl;
  cout << 5.0 / 2 << endl;
  cout << 5 /2.0 << endl;
  cout << 5 % 2 << endl; // modulus operator
}
```

Here we notice that 5 / 2 =2 since C++ return the integer value of the division.If you want to get the decimal value, you need to change the type of the divisor or dividend to float.

- Increment/decrement operators ++ --
  Increment/decrement operators increment or decrement the value of the object.

  Pre-increment `++a` and pre-decrement `--a` operators increments or decrements the value of the object and returns a reference to the result.

Post-increment `a++` and post-decrement `a--` creates a copy of the object, increments or decrements the value of the object and returns the copy from before the increment or decrement.

```cpp
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

```cpp
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

```cpp
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

```cpp
#include <iostream>
using namespace std;

int main()
{
int x = 6, y = 8;
cout << (x ==6 && y == 5 +3) << endl; // calculates 5+3 first, then checks  whether x==6 , y== 8 seperately, at last, make sure they are BOTH true, shows 1 for true.

}
```

### Assignment operators: =, +=, -=, \*=, /=, %=, <<=, >>=, &=, |=, ^=

```cpp
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

```cpp
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

```cpp
#include <iostream>
using namespace std;

// User enters integer number
// Program write out if that number is even or odd

int main() { cout << 10 % 3 << endl; }

```

with the modulo operator,we can make the function with the flowchart:

![img](./img/chapter-3-ifelseDIagram.png)

```cpp
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

```cpp
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

```cpp
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

```cpp

```

### Codidtional Operators (0 ? 1 : 2) : short version of if-else statement

IN C++ :

```cpp
Exp1 ? Exp2 : Exp3;
```

Exp1, Exp2, and Exp3 are expressions. Notice the use and placement of the **colon**.

The **value of a ? expression** is determined like this: Exp1 is evaluated. If it is true, then Exp2 is evaluated and becomes the value of the entire ? expression. If Exp1 is false, then Exp3 is evaluated and its value becomes the value of the expression.

The **? is called a ternary operator** because it requires three operands and can be used to replace if-else statements.

```cpp
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

```cpp
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

```cpp
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

```cpp
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

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```

```cpp

```
