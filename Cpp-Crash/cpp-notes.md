# C++ Notes 0

# Code-10hours

## Chap 0

### Intro C++

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

#### What is C++?

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

### Chap 2 Variables, Datatypes

#### Variales

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

#### Datatypes

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

#### Datatype overflow

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

#### ASCII Program

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

### Chap 3 If-else statements

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
