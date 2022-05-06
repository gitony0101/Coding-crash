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
