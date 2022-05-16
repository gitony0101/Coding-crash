# C++ 编程笔记

### 教材视频参考:

- 视频
  - CodeBeauty 10-hours
- 教材
  - cpp Crash
  - cpp primer
- 参考网站
  - W3C School
  - G4G

# Chapter 1 简介 数据类型 变量

## 介绍

- 静态类型
  - 有利于工具做静态分析，有利于性能优化，有利于代码可读性。
  - 动态类型一时爽，代码重构火葬场
  - 各有所长，保持敬畏

### Cpp 主要任务

- 创建所有类型的编程语言
- 汇编：把人类语言编译成机器能理解的语言

## 数据类型

C++中常见的数据类型.

操作系统会根据变量的数据类型，来分配内存和决定在保留内存中存储什么，比如字符型、宽字符型、整型、浮点型、双浮点型、布尔型等

|        类型        | 位（字节数）  |                                范围                                 |
| :----------------: | :-----------: | :-----------------------------------------------------------------: |
|        bool        |       1       |                               0 和 1                                |
|        char        |       1       |                      -128 到 127 或者 0 到 255                      |
|   unsigned char    |       1       |                              0 到 255                               |
|    signed char     |       1       |                             -128 到 127                             |
|        int         |       4       |                      -2147483648 到 214748364                       |
|    unsigned int    |       4       |                           0 到 4294967295                           |
|     signed int     |       4       |                      -2147483648 到 2147483647                      |
|     short int      |       2       |                           32768 到 32767                            |
| unsigned short int |       2       |                             0 到 65,535                             |
|  signed short int  |       2       |                           -32768 到 32767                           |
|      long int      |       8       |       -9,223,372,036,854,775,808 到 9,223,372,036,854,775,807       |
|  signed long int   |       8       |       -9,223,372,036,854,775,808 到 9,223,372,036,854,775,807       |
| unsigned long int  |       8       |                   0 到 18,446,744,073,709,551,615                   |
|       float        |       4       |   精度型占 4 个字节（32 位）内存空间，+/- 3.4e +/- 38 (~7 个数字)   |
|       double       |       8       | 双精度型占 8 个字节（64 位）内存空间，+/- 1.7e +/- 308 (~15 个数字) |
|    long double     |      16       |  长双精度型 16 个字节（128 位）内存空间，可提供 18-19 位有效数字。  |
|      wchar_t       | 2 或 4 个字节 |                             1 个宽字符                              |

注意，各种类型的存储大小与系统位数有关，但目前通用的以 64 位系统为主。

### 计算结果超出数据类型元算所能表示的范围时产生溢出，溢出后像是过了半夜十二点从头开始

like:
The value of intMax is 2147483647
The value of intMax + 1 is -2147483648

## 带符号类型和无符号类型

有符号（signed）也就是该整型可以表示正数也可以表示负数，而无符号（unsigned）则表示该整数只能表示正数，不能表示负数。

- signed 存储符号是有代价的，代价就是存储空间中的一个比特位专门用来存储符号，这一位不能表示数值。

- 一般来说，同类型的 signed 能够存储的数的绝对值大小要小于 unsigned。

- 在我们定义变量时，如果没有显式声明是 signed 还是 unsigned，那么默认就是 signed。

## 数据类型的重要性

数据类型对程序非常重要，如果使用了错误的类型，程序可能会出错，或者程序可能会出现不可预料的结果。

所以在我们编程时，第一件事就是必须清楚，我们要使用的数据类型。

## 复合类型 指针 引用

指针\*是地址，引用&是别名

## 变量

变量就是存储整型、浮点、双精度、字符串、布尔值、指针、数组等数据的有上限的容器。

- 一个变量容器只能存储一类容器
- 一旦确定了数据类型，就不能再改变
- 大小写敏感
  - **myVariablel != myvariable**

### printf 格式化输出

printf 函数称为格式输出函数，其关键字最末一个字母 f 即为“格式”(format)之意。按照用户指定的格式（占位符），把指定的数据显示到屏幕上。

|        type        | examples | printf format specifiers |    etc     |
| :----------------: | :------: | :----------------------: | :--------: |
|       string       |          |            %s            | .to_cstr() |
|       short        |          |           %hd            |            |
|   unsigned short   |          |           %hu            |            |
|        int         |          |            %d            |            |
|    unsigned int    |          |            %u            |            |
|        long        |          |           %ld            |            |
|     long long      |          |           %lld           |            |
| unsigned long long |          |           %llu           |            |

![img](./img/formatSpecifiers.png)
![img](./img/formatSpecifiers2.png)
![img](./img/formatSpecifiers3.png)

The format specifier for a byte is %zd.
The format specifier %f displays a float with decimal digits, whereas %e displays the same number in scientific notation.

### 未完待续

[关于输出函数详解](http://c.biancheng.net/cpp/html/33.html)

# Chapter 2 操作符

主要用六种运算符

- 算术运算符
- 关系运算符
- 逻辑运算符
- 位运算符
- 赋值运算符
- 其他运算符

### 算数运算符

加减乘除取余数：

- +, -, \*, /, % (求余数)

### 逻辑和关系运算符

- <, >, <=, >=, ==, !=

- &&(且), ||(或), !(非)

- 运算符优先级

算数运算符 >> 关系运算符 >> 逻辑运算符

- 更多可以看:([**cpp Operator Precedence Table**](https://en.cppreference.com/w/cpp/language/operator_precedence) )

### 赋值运算符

`=, +=, -=, \*=, /=, %=, <<=, >>=, &=, |=, ^=`

- 自增减运算符： `++ --`

# Chapter 3 语句

## If-else 条件语句

codes: ex,BMI,Integer,Lunar year

## 判断语句

- If-else 语句
  - 嵌套 if ： else if
- Switch case 语句
  - 嵌套 switch 语句
- 条件运算符 `Exp1 ? Exp2 : Exp3;`
  - 其中，Exp1、Exp2 和 Exp3 是表达式。请注意冒号的使用和位置。`? :` 表达式的值取决于 Exp1 的计算结果。
    - 如果 Exp1 为真，则计算 Exp2 的值，且 Exp2 的计算结果则为整个 `? :` 表达式的值。
    - 如果 Exp1 为假，则计算 Exp3 的值，且 Exp3 的计算结果则为整个 `? :` 表达式的值。`
      - ? 被称为三元运算符，因为它需要三个操作数，可以用来代替`if-else`语句。

```c++
if(condition){
   var = X;
}else{
   var = Y;
}
```

等价于：

```c++
(condition) ? var = X : var = Y;
```

### 流程图

- 判定奇数偶数流程

<div align = "center">
<div style="width:700px">

![img](./img/chapter-3-ifelseDIagram.png)

</div>
</div>

- 判定三角形类型流程

<div align = "center">
<div style="width:700px">

![img](img/chapter-3--Tri-ifelseDIagram.png)

</div>
</div>

- 体脂率计算器流程
  - 三个阈值：<18.5 低体脂率，>25 高体脂率，在 18.5-25 之间正常体脂率

<div align = "center">
<div style="width:700px">

![img](./img/BMI.jpg)

</div>
</div>

### 从 if-else 到 swich case 语句

对比两个计算器代码，在条件较多的时候，可以用 switch case 代码替代 if-else 代码，更清晰明了：提供了一条便捷路径，让我们在固定选项中做出选择。

请参考附属代码`chapter-3-1-exSwitchCase.cpp`

## 迭代语句——iteration——循环

迭代，知道重复执行操作到满足某个条件，或者超出某个范围。

- for 循环
  - `for (statement 1; statement 2; statement 3) { // code block to be executed }`
- while 循环
  - `while (condition) { statements; }`
- do-while 循环
  - `do { // code block to be executed } while (condition);`
    - 后面还跟 if 条件：可以理解为：while 是前后两个代码块的一个约束，在这个约束循环里面，哪个条件满足，就执行哪个条件，直到执行完 while
- 嵌套循环
  - 一个循环内可以嵌套另一个循环，最好别这样做，因为这样会导致循环无限循环。

## 跳转语句

- `break`
- `continue`
- `goto`
- `return`

# Chapter 4 函数

## 基础

三要素：函数名、参数、返回值

函数是一个命名了的代码块，通过调用函数执行相应的代码。典型的函数包括：

- 返回类型 `return type`
- 函数名 `function name`
- 参数列表 `(parameter list)`
  - 实参 `actual parameter` ：型参的初始值，默认值，类型必须匹配
  - 型参 `type parameter`：不能同名
- 函数体 `{ code block }`

## 参数传递

### void main 和 int main

The main() function takes arguments, and returns some value like other functions.

- The program starts executing from this main() function, So the operating system calls this function. When some value is returned from main(), it is returned to operating system.

The void main() indicates that the main() function will NOT return any value, but the int main() indicates that the main() can return integer type data.

Try this code to find which function will show the result.

```cpp
//Version 1
#include <iostream>
using namespace std;

void myFunction() { cout << "Hello World from myFunction." << endl; }

int main() { cout << "Hello World from main." << endl; }
```

We can see that there is only one code shows `Hello World from main.`

If we want to call the `myFunction` we need to call it in main:

```cpp
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

```cpp
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

```
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

```
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

### The return

Determine whether a number is a Prime number.

```
#include <iostream>
using namespace std;

bool isPrimeNumber(int number) {
  bool isPrimeFlag = true; // initialize the flag prime number is true

  // key loop
  for (int i = 2; i < number; i++) {
    if (number % i == 0) { //  check the  number if it is divisible by i, which
                           //  ranged from 2 to the number itself.
      isPrimeFlag = false; // if it is divisible, then the flag is false
      break;               // Once the case happened, break the loop
    }
  }
  return isPrimeFlag;
}

int main() {
  int number;
  cout << " Please enter a number : ";
  cin >> number;

  bool isPrimeFlag = isPrimeNumber(number);
  if (isPrimeFlag) {
    cout << " The number " << number << " is a prime number." << endl;
  } else {
    cout << " The number " << number << " is not a prime number." << endl;
  }
}

```

### 函数重载

**Function overloading** is a feature of object oriented programming where two or more functions can have the same name but different parameters.

```cpp
#include <iostream>
using namespace std;

// Function Overloading

int sum(int a, int b); // functions declaration
double sum(double a, double b); // functions declaration
float sum(float a, float b, float c);// functions declaration

int main() {
  cout << "Sum of two integers: " << sum(10, 20) << endl;
  cout << "Sum of two doubles: " << sum(10.5, 20.5) << endl;
  cout << "Sum of three floats: " << sum(10.5, 20.5, 30.5) << endl;
}

int sum(int a, int b) { return a + b; }
double sum(double a, double b) { return a + b; }
float sum(float a, float b, float c) { return a + b + c; }

```

## Recursion

A function that calls itself is known as a recursive function. And, this technique is known as recursion.

[Check here for Recursion.](https://www.programiz.com/cpp-programming/recursion)

Sum of the numebrs between m to n.

```cpp
#include <iostream>
using namespace std;

// Recursion version of the sum

int recursive_sum(int m, int n) {
  if (m == n)
    return m;                         // base case to stop the recursion
  return m + recursive_sum(m + 1, n); // how it recurrs
}

int main() {
  int m = 2, n = 4;
  cout << "Sum: " << recursive_sum(m, n) << endl;
}
```

Calculate the factorial

```
#include <iostream>
using namespace std;

// Calculate the factorial of the number by recursion

int recursive_factorial(int m) {
  if (m == 1)
    return m; // base case to stop the recursion
  return m * recursive_factorial(m - 1); // how it recurrs
}

int main() {
  int a = 5;
  cout << recursive_factorial(5) << endl;
}

```

As we see the code above there are always a base case to stop the recursion and a return statement to show us how it recurrs.

# Chapter 6 Generic and Template

Philosophy of programming.

- Generic : 范型
- Template : 模板

Generic programming is writing code once that works with different types rather than having to repeat the same code multiple times by copying and pasting each type you want to support. In C++, you use templates to produce generic code. Templates are a special kind of parameter that tells the compiler to represent a wide range of possible types.

In this chapter we just introduce these concepts，since Generic and Template is more than this.

```
#include <iostream>
using namespace std;

template <typename T> // declare the template "args" as T,  typename is the
                      // kyeword you can use class (ANOTHER TYPTE) etc.

                      void Swap(T &a, T &b) { // & as reference, we will go
                                              // througt it later.
  T temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 5, b = 7;
  cout << "Initially, a = " << a << "and b = " << b << endl;
  Swap(a, b);
  cout << "Now, a = " << a << "and b = " << b << endl;

  char c = 'c', d = 'd';
  cout << "Initially, c = " << c << "and d = " << d << endl;
  Swap(c, d);
  cout << "Now, c = " << c << "and d = " << d << endl;
}

```

# Chapter 7 Object-Oriented Programming - OOP

**OOP** stands for **Object-Oriented Programming**.

**Procedural programming** is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions.

Object-oriented programming has several advantages over procedural programming:

- OOP is faster and easier to execute
- OOP provides a clear structure for the programs
- OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
- OOP makes it possible to create full reusable applications with less code and shorter development time

## Class and Objects

Classes and objects are the two main aspects of object-oriented programming.

<div align = "center">
<div style="width:700px">

![img](./img/cls-obj.jpg)

</div>
</div>

#### Youtube channel class

```
#include <cstdio>
#include <iostream>
#include <list> // use the list C++ Standard Template Library (STL)
using namespace std;

class YoutubeChannel {
public: // corresponding to private, the variables below can be used publicly
  string Name;
  string OwnerName;
  int SubscribersCount;
  list<string> PublishedVideoTitles;
};

int main() {
  YoutubeChannel yt;
  yt.Name = "CodeBeauty";
  yt.OwnerName = "Saldina";
  yt.SubscribersCount = 18000;
  // use push_back() to add a new element to the list
  yt.PublishedVideoTitles.push_back("C++ Crash Course");
  yt.PublishedVideoTitles.push_back("C++ Crash Course Part 2");
  yt.PublishedVideoTitles.push_back("C++ Crash Course Part 3");

  // print the variables with printf()
  printf("Name: %s\n", yt.Name.c_str());
  printf("Owner name : %s\n", yt.OwnerName.c_str());
  printf("Number of subscribers : %d\n", yt.SubscribersCount);
  printf("Published videos : \n");
  for (auto &videoTitle : yt.PublishedVideoTitles) {
    printf("%s\n", videoTitle.c_str());
  }
```

#### printf()

- printf() is a function that prints the string to the screen.
- printf Format Specifiers:The first argument to printf is always a format string. The format string provides a template for the string to be printed, and it contains any number of special format specifiers. Format specifiers tell printf how to interpret and format the arguments following the format string. All format specifiers begin with %.

Note:

`%d\n` is the format specifier for an integer, `\n` is `endl;`, DO NOT remember this, you can make it when coding.

## Constructors and Class methods

### Constructor

A constructor is **a special type of member function** of** a class which initializes objects of a class**. In C++, Constructor is automatically called when object(instance of class) is created. It is special member function of the class because it does NOT have any RETURN type.

Difference with a normal member function:

- Constructor MUST HAVE the SAME name as the class itself
- Constructors don’t have input argument ，neither return type
- A constructor is automatically called when an object is created
- It must be placed in public section of class
- If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body)

Here is the example of constructor and class method

- constructor to collect the information of the object-`YouTubeChannel`
- calss method to print the information of the object- `getInfo()`

```
#include <cstdio>
#include <iostream>
#include <list> // use the list C++ Standard Template Library (STL)
#include <string>
using namespace std;

class YoutubeChannel {
public: // corresponding to private, the variables below can be used publicly
  string Name;
  string OwnerName;
  int SubscribersCount;
  list<string> PublishedVideoTitles;
  // Build the constructor inside the class
  YoutubeChannel(string name, string ownerName) { // two key parameters here
    Name = name;
    OwnerName = ownerName;
    SubscribersCount = 0;
  }
  // use class method to get the info we entered.
  void getInfo() {

    printf("Name : %s\n", Name.c_str()); // print name,just  Name.c_str()
    printf("Owner Name: %s\n", OwnerName.c_str()); // Similarily
    printf("Number of subscribers : %d\n", SubscribersCount);
    for (auto &videoTitle : PublishedVideoTitles) {
      printf("The %s has %s\n", Name.c_str(), videoTitle.c_str());
    }
  }
};

int main() {
  YoutubeChannel yt_1("CodeBeauty", "Saldina");
  yt_1.PublishedVideoTitles.push_back("C++ for beginners");
  yt_1.PublishedVideoTitles.push_back("HTML & CSS for beginners");
  yt_1.PublishedVideoTitles.push_back("C++ OOP for beginners");

  YoutubeChannel yt_2("Sigur Ros", "Jonsi and his bands.");
  yt_2.PublishedVideoTitles.push_back("Hopipolla");
  yt_2.PublishedVideoTitles.push_back("Heima");

  yt_1.getInfo(); // call the class method to get the info we entered.
  yt_2.getInfo(); // call the class method to get the info we entered.
}
```

## Encapsulation

Encapsulation is one of the key features of object-oriented programming. It involves the bundling of data members and functions inside a single class.

Bundling similar data members and functions inside a class together also helps in data hiding.

The process of implementing encapsulation can be sub-divided into two steps:

- The data members should be labeled as private using the private access specifiers
- The member function which manipulates the data members should be labeled as public using the public access specifier

That is:

- **Features inside (private), Funcions outside(public), Encapuslate them ALL.**

```
#include <iostream>
#include <list> // use the list C++ Standard Template Library (STL)
// #include <string>
using namespace std;

class YoutubeChannel {
private: // The data members should be labeled as private using the private
         // access specifiers
  string Name;
  string OwnerName;
  int SubscribersCount;
  list<string> PublishedVideoTitles;

public: // The member function which manipulates the data members should be
        // labeled as public using the public access specifier
  YoutubeChannel(string name, string ownerName) { // two key parameters here
    Name = name;
    OwnerName = ownerName;
    SubscribersCount = 0;
  }

  // use class method to get the info we entered.
  void getInfo() {

    printf("Name : %s\n", Name.c_str()); // print name,just  Name.c_str()
    printf("Owner Name: %s\n", OwnerName.c_str()); // Similarily
    printf("Number of subscribers : %d\n", SubscribersCount);
    for (auto &videoTitle : PublishedVideoTitles) {
      printf("The %s has %s\n", Name.c_str(), videoTitle.c_str());
    }
  };

  void Subscribe() { SubscribersCount++; } // + 1 subscriber
  void Unsubscribe() {
    if (SubscribersCount > 0) {
      SubscribersCount--;
    } else {
      SubscribersCount = 0;
    }
  }
  // - 1 subscriber with condition
  void PublishVideo(string title) { PublishedVideoTitles.push_back(title); }

}; // this ; MUST HAVE

int main() {
  YoutubeChannel yt_1("CodeBeauty", "Saldina");
  yt_1.Subscribe();
  yt_1.Subscribe();
  yt_1.Subscribe();
  yt_1.Unsubscribe();
  yt_1.PublishVideo("C++ for beginners");
  yt_1.PublishVideo("HTML & CSS for beginners");
  yt_1.PublishVideo("C++ OOP beginners");
  yt_1.getInfo();
}
```

## Inheritance

The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important feature of Object Oriented Programming.

**Sub Class:** The class that inherits properties from another class is called Sub class or Derived Class.
**Super Class:** The class whose properties are inherited by sub class is called Base Class or Super class.

- Why and when to use inheritance?

Here we go on with our youtube channel and dive in a more specific area:
Cooking channel, which shows us how inheritance works.

````

#include <cstdio>
#include <iostream>
#include <list> // use the list C++ Standard Template Library (STL)
using namespace std;

class YoutubeChannel { // Now YoutubeChannel is the base class
private:
string Name;
string OwnerName;
int SubscribersCount;
list<string> PublishedVideoTitles;

public:
YoutubeChannel(string name, string ownerName) { // two key parameters here
Name = name;
OwnerName = ownerName;
SubscribersCount = 0;
}

// use class method to get the info we entered.
void getInfo() {

    printf("Name : %s\n", Name.c_str()); // print name,just  Name.c_str()
    printf("Owner Name: %s\n", OwnerName.c_str()); // Similarily
    printf("Number of subscribers : %d\n", SubscribersCount);
    for (auto &videoTitle : PublishedVideoTitles) {
      printf("The %s has %s\n", Name.c_str(), videoTitle.c_str());
    }

};

void Subscribe() { SubscribersCount++; } // + 1 subscriber
void Unsubscribe() {
if (SubscribersCount > 0) {
SubscribersCount--;
} else {
SubscribersCount = 0;
}
}
// - 1 subscriber with condition
void PublishVideo(string title) { PublishedVideoTitles.push_back(title); }
}; // upload video

class CookingYoutubeChannel
: public YoutubeChannel // ## Inherit YoutubeChannel above ## // Derived
// Class, really?
{
protected: // protected inheritance, can be accessed outside.
string ownerName;

public:
CookingYoutubeChannel(string name,
string ownerName) // Inherit the constructors
: YoutubeChannel(name, ownerName) {}
void Practice(string fans, string course) {
printf("%s has just practiced the %s in the channel %s.\n", fans.c_str(),
course.c_str(), ownerName.c_str()); // the ownerName can be visited
// by protected inheritance
}; // the unique feature that the CookinnYoutbeChannel has.
};

int main() {
CookingYoutubeChannel cyt_1("CodeBeauty Kitchen", "Saldina");
cyt_1.PublishVideo("Apple Pie");
cyt_1.PublishVideo("Chocolate Cake");
cyt_1.Subscribe();
cyt_1.Subscribe();
cyt_1.getInfo();
cyt_1.Practice("Amy", "pizza");

}

```markdown
Using inheritance, we have to write the functions only one time instead of three times as we have inherited rest of the three classes from base class.

Implementing inheritance in C++: For creating a sub-class which is inherited from the base class we have to follow the below syntax.
```

class subclass_name : access_mode base_class_name
{
// body of subclass
};

```markdown
Here,**subclass_name** is the name of the sub class, access_mode is the mode in which you want to inherit this sub class for example: **public, private ,protected**. and **base_class_name** is the name of the base class from which you want to inherit the sub class.

Note: A derived class doesn’t inherit access to private data members. However, it does inherit a full parent object, which contains any private members which that class declares.
```

// C++ program to demonstrate implementation
// of Inheritance

#include <bits/stdc++.h>
using namespace std;

// Base class
class Parent
{
public:
int id_p;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
public:
int id_c;
};

// main function
int main()
{
Child obj1;

    // An object of class child has all data members
    // and member functions of class parent
    obj1.id_c = 7;
    obj1.id_p = 91;
    cout << "Child id is: " <<  obj1.id_c << '\n';
    cout << "Parent id is: " <<  obj1.id_p << '\n';

    return 0;

}

```

In the above program the ‘Child’ class is publicly inherited from the ‘Parent’ class so the public data members of the class ‘Parent’ will also be inherited by the class ‘Child’.

#### Modes of Inheritance

- Public mode: If we derive a sub class from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in derived class.
- Protected mode: If we derive a sub class from a Protected base class. Then both public member and protected members of the base class will become protected in derived class.
- Private mode: If we derive a sub class from a Private base class. Then both public member and protected members of the base class will become Private in derived class.

#### Types of Inheritance

- Single inheritance

- Multi-level inheritance

- Multiple inheritance

- Hybrid inheritance

- Hierarchical inheritance

- Multipath inheritance

Note: The private members in the base class cannot be directly accessed in the derived class, while protected members can be directly accessed. For example, Classes B, C and D all contain the variables x, y and z in below example. It is just question of access.

```

// C++ Implementation to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object.
class A
{
public:
int x;
protected:
int y;
private:
int z;
};

class B : public A
{
// x is public
// y is protected
// z is not accessible from B
};

class C : protected A
{
// x is protected
// y is protected
// z is not accessible from C
};

class D : private A // 'private' is default for classes
{
// x is private
// y is private
// z is not accessible from D
};

```

## Polymorphism

The word polymorphism means **having many forms** : The ability of a message to be displayed in more than one form.

A real-life example of polymorphism, a person at the same time can have different characteristics. **Like a man at the same time is a father, a husband, an employee**.

So the same person posses different behavior in different situations. This is called polymorphism. Polymorphism is considered as one of the important features of Object Oriented Programming.

In C++ polymorphism is mainly divided into two types:

- Compile time Polymorphism
- Runtime Polymorphism

#### Difference between Inheritance and Polymorphism

<div align = "center">
<div style="width:700px">

| Inheritance                                                                                     | Polymorphism                                                                                                                        |
| :---------------------------------------------------------------------------------------------- | :---------------------------------------------------------------------------------------------------------------------------------- |
| Created (derived class) that inherits the features from the already existing class(Base class). | Can be defined in multiple forms                                                                                                    |
| Basically applied to classes                                                                    | Basically applied to functions or methods.                                                                                          |
| Supports the concept of reusability and reduces code length in object-oriented programming      | Allows the object to decide which form of the function to implement at compile-time (overloading) as well as run-time (overriding). |
| Can be single, hybrid, multiple, hierarchical and multilevel inheritance                        | Can be compiled-time polymorphism (overload) as well as run-time polymorphism (overriding).                                         |
| Used in pattern designing                                                                       | Used in pattern designing.                                                                                                          |

</div>
</div>

Now we continue the youtube channel tutorial.

```

#include <iostream>
#include <list>
using namespace std;

// Polymorphism with pointers
class YoutubeChannel {
private:
string Name;
string OwnerName;
int SubscribersCount;
list<string> PublishedVideoTitles;

protected: // protected inheritance, can be accessed outside.
string ownerName;
int ContentQuality;

public:
YoutubeChannel(string name, string ownerName) {
Name = name;
OwnerName = ownerName;
SubscribersCount = 0;
ContentQuality = 0;
}

void getInfo() {

    printf("Name : %s\n", Name.c_str()); // print name,just  Name.c_str()
    printf("Owner Name: %s\n", OwnerName.c_str()); // Similarily
    printf("Number of subscribers : %d\n", SubscribersCount);
    for (auto &videoTitle : PublishedVideoTitles) {
      printf("The %s has %s\n", Name.c_str(), videoTitle.c_str());
    }

};

void Subscribe() { SubscribersCount++; } // + 1 subscriber
void Unsubscribe() {
if (SubscribersCount > 0) {
SubscribersCount--;
} else {
SubscribersCount = 0;
}
}
// - 1 subscriber with condition
void PublishVideo(string title) {
PublishedVideoTitles.push_back(title);
} // upload video
void CheckAnalytics() {
if (ContentQuality < 5)
printf("%s has bad quality content.\n", Name.c_str());
else if (ContentQuality > 8)
printf("%s has good quality content.\n", Name.c_str());
else
printf("%s's content is normal.\n", Name.c_str());
;
}
};
// As example of morphism, we would like to creat another class like cooking
// channel

class CookingYoutubeChannel : public YoutubeChannel {

public:
CookingYoutubeChannel(string name,
string ownerName) // Inherit the constructors
: YoutubeChannel(name, ownerName) {}
void Practice() {
printf("%s has just practiced how to make delicious food the in the "
"channel.\n",
ownerName.c_str()); // the ownerName can be visited
// by protected inheritance
ContentQuality++;
}; // the unique feature that the CookinnYoutbeChannel has.
};

// Morph a new class: SingerYoutubeChannel:

class SingerYoutubeChannel : public YoutubeChannel {
protected: // protected inheritance, can be accessed outside.
string ownerName;

public:
SingerYoutubeChannel(string name,
string ownerName) // Inherit the constructors
: YoutubeChannel(name, ownerName) {}
void Practice() {
printf("%s has just practiced singing ,dancing the in the channel.\n",
ownerName.c_str()); // the ownerName can be visited
// by protected inheritance
ContentQuality++;
};
};

int main() {
// cooking channel
CookingYoutubeChannel cytch_1("CodeBeauty Kitchen", "Saldina");
cytch_1.PublishVideo("Apple Pie");
cytch_1.PublishVideo("Chocolate Cake");
cytch_1.Subscribe();
cytch_1.Subscribe();
cytch_1.getInfo();
cytch_1.Practice();
cytch_1.Practice();
cytch_1.Practice();
cytch_1.Practice();
cytch_1.Practice();
cytch_1.Practice();
cytch_1.Practice();
cytch_1.Practice();
cytch_1.Practice();
cytch_1.CheckAnalytics();
// singer channel
SingerYoutubeChannel sytch_1("Elton's Voice", "Elton John");
sytch_1.Practice();
sytch_1.Practice();
sytch_1.Practice();
sytch_1.Practice();
sytch_1.Practice();
sytch_1.CheckAnalytics();
}

```

```

```

```

```

# Chapter 8 Pointers

Variable contains certain value,while Pointers store address of variables or a memory location. (Pointes not only store value but also the address of the value.)

```

// General syntax
datatype \*var_name;

// An example pointer "ptr" that holds
// address of an integer variable or holds
// address of a memory whose value(s) can
// be accessed as integer values through "ptr"
int \*ptr;

```

## Some concepts of pointers

### Memory Address

### Pointer Expressions and Pointer Arithmetic

A limited set of arithmetic operations can be performed on pointers. A pointer may be:

- incremented ( ++ )
- decremented ( -\- )
- an integer may be added to a pointer ( + or += )
- an integer may be subtracted from a pointer ( – or -= )

Pointer arithmetic is meaningless **unless performed on an array.**

Note : Pointers contain addresses.

Adding two addresses makes no sense, because there is no idea what it would point to. Subtracting two addresses lets you compute the offset between these two addresses.

## Void pointers

How void pointer are used.

- `int` is not a function, it is a data type,a declaration.

```

#include <iostream>
using namespace std;

void print(void _ptr, char type) {
switch (type) {
case 'i':
printf("The value is :%d\n", _(int _)ptr);
break;
case 'c': // c for char
printf("The letter is : %c\n", _(char \*)ptr);
}
}

// try
int main() {
int number = 5;
char letter = 'a';
print(&number, 'i');
print(&letter, 'c');
}

```

## Pointers and arrays

```

#include <iostream>
using namespace std;

int luckyNumbers[5] = {2, 3, 4, 5, 6};

int main() {
printf("%p\n", luckyNumbers); // cout << luckyNumbers << endl; memory addres
// of luckyNumbers
printf("'&luckynumbers[0]': %p\n",
&luckyNumbers[0]); // memory address of luckyNumbers[0]
printf("'&luckynumbers[1]': %p\n",
&luckyNumbers[1]); // memory address of luckyNumbers[1]
printf("'luckynumbers[2]': %d\n", luckyNumbers[2]); // deferencing
printf("'*(luckynumbers)': %d\n", *luckyNumbers); // deferencing
printf("'_(luckynumbers+2)': %d\n",
_(luckyNumbers +
2)); // equivalent to luckyNumbers[2], which is
// accessing the 3rd element of the array,deferencing.

int numslist[5];
for (int i = 0; i <= 4; i++) {
printf("Please enter a number(5 in total) :");
cin >> numslist[i];
}
for (int i = 0; i <= 4; i++) {
printf("The number array is: %d\n", _(numslist + i)); // _ get the value
// of the array
}
}

```

## Use pointers to return multiple values of a function

Use pointers to return min and max value of array.

```

#include <iostream>
using namespace std;
// int getMin(int numbers[], int size) {
// int min = numbers[0];
// for (int i = 1; i < size; i++) {
// if (numbers[i] < min)
// min = numbers[i];
// }
// return min;
// }

// int getMax(int numbers[], int size) {
// int max = numbers[0];
// for (int i = 1; i < size; i++) {
// if (numbers[i] > max)
// max = numbers[i];
// }
// return max;
// }
//

void getMinandMax(int numbers[], int size, int *min, int *max) {
for (int i = 1; i <= size; i++) {
if (numbers[i] > *max)
*max = numbers[i];
if (numbers[i] < *min)
*min = numbers[i];
}
}

int main() {

int numArr[5] = {1, 3, -4, 5, 7};
int max = numArr[0];
int min = numArr[0];

// if I use _min, _ max:
// // Indirection requires pointer operand ('int' invalid)
// if I use min ,max directly:
// No matching function for call to 'getMinandMax' (fix available)
getMinandMax(numArr, 5, &min, &max); // reference

printf("The min number is: %d\n", min);
printf("The max numbers is: %d\n",
max); // passing parameter using reference: pass an address of the
// variale to the function rahter than passing the variable
// itself, which can sync with the changing of function.
}

```

There are 2 things we need to make clear:

- `void getMinandMax(int numbers[], int size, int *min, int *max)` where we need to use parameter *min, *max pointers.
- When to use the function `getMinandMax(numArr, 5, &min, &max)`, passing parameter **using reference**: pass an address of the variale to the function rahter than passing the variable itself, which can **sync with the changing of function**, this is where you need to know the relationship between address and variable.

## Dynamic Arrays

Arrys is a type of collection which stores elements is contiguous memory locations, which stored one after the other.

if I definite a fuction:

```

int myArray[5];

```

It means I created a container of 5 locations which can store elements.

**Dynamic arrays** are arrays with **dynamic storage duration**. You create dynamic arrays with array new expressions. Array new expressions have the following form:

```

new MyType[n_elements] { init-list }

```

### `new` and `delete` ?

- new : allocate memory for us when we need it.
- delete : deallocate memory for us when we do not need it.

```

#include <iostream>
using namespace std;

int main() {
int size;
printf("Please enter the size of the Array:");
cin >> size;
// int myArray[size]
int \*myArray = new int[size];
for (int i = 0; i < size; i++) {
printf("Array %d\n", i);
cin >> myArray[i];
}
printf("This is your array with %d elements by the dereferencing method "
"'myArray[i]':\n",
size);
for (int i = 0; i < size; i++) {

    printf("%d\n", myArray[i]);

}
printf("This is your array with %d elements by the dereferencing method "
"'\*(myArray + i)':\n",
size);
for (int i = 0; i < size; i++) {

    printf("%d\n", *(myArray + i));

}
delete[] myArray;
myArray = NULL;
}

```markdown
## Multi-Dimensional Dynamic Arrays

<div align = "center">
<div style="width:600px">

![img](./img/Multi-Dimensional-Dynamic-Arrays.jpg)

table and its' arrays

</div>
</div>

### \*\* - Pointer to Pointer
```

#include <cstdio>
#include <iostream>
using namespace std;

// new delete

```c++
int main() {
  int rows, cols;
  printf("Please enter the number of rows");
  cin >> rows;
  printf("Please enter the number of columns");
  cin >> cols;
```

```c++
  int **table =
      new int *[rows]; // porinter to pointers,the rows are arrays themselvs.
  for (int i = 0; i < rows; i++) {
    table[i] = new int[cols];
  }
  table[1][2] = 88; // row 00000BB the 3rd(loacation 2) element is 88
  //   cout << **table << endl;
  // delete the table:
  //   for (int i = 0; i < rows; i++) {
  //     delete[] table[i];
  //     table = NULL;
}
```


````

# 收集

## 头文件 和 Cpp 文件
