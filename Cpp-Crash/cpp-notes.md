# C++ Notes 0

# Code-10hours

## Chap 0

### Intro C++

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
