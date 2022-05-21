# 操作符

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

# 语句

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

# 函数

## 基础

三要素：函数名、参数、返回值

函数是一个命名了的代码块，通过调用函数执行相应的代码。典型的函数包括：

- 返回类型 `return type`
- 函数名 `function name`
- 参数列表 `(parameter list)`
  - 实参 `actual parameter` ：型参的初始值，默认值，类型必须匹配
  - 型参 `type parameter`：不能同名
- 函数体 `{ code block }`

### void main 和 int main 的区别 就是有无返回值

- void main 函数不需要返回值，返回值类型为 void
- int main 函数需要返回值，返回值类型为 int

## 参数传递

赋值参数的方式：

1. function(type1 parameter1, type2 parameter2);
2. function(type1 parameter1 , type2 parameter2 = default value);
   - 注意默认参数要放在定义参数的最后面

### 返回值 Return

- 函数返回值：
  - 函数返回值类型：`return type`
  - 函数返回值：`return value`

### 函数重载

**Function overloading** is a feature of object oriented programming where two or more functions can have the same name but different parameters.

```c++
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

```c++
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

# Generic and Template

Philosophy of programming.

- Generic : 范型
- Template : 模板

Generic programming is writing code once that works with different types rather than having to repeat the same code multiple times by copying and pasting each type you want to support. In C++, you use templates to produce generic code. Templates are a special kind of parameter that tells the compiler to represent a wide range of possible types.

In this chapter we just introduce these concepts，since Generic and Template is more than this.

```c++
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

# Object-Oriented Programming - OOP

**OOP** stands for **Object-Oriented Programming**.

**Procedural programming** is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions.

Object-oriented programming has several advantages over procedural programming:

- OOP is faster and easier to execute
- OOP provides a clear structure for the programs
- OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
- OOP makes it possible to create full reusable applications with less code and shorter development time

## 类和对象

类像一个容器，装载着变量和方法，所以定义一个类，就是在定义变量和方法。

`.h` 文件用于函数和变量的声明，而 `.cpp` 文件则用于定义。

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

## 封装

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

```c++
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

```c++
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

```c++
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
```

Using inheritance, we have to write the functions only one time instead of three times as we have inherited rest of the three classes from base class.

Implementing inheritance in C++: For creating a sub-class which is inherited from the base class we have to follow the below syntax.

```c++
class subclass_name : access_mode base_class_name
{
// body of subclass
};
```

Here,**subclass_name** is the name of the sub class, access_mode is the mode in which you want to inherit this sub class for example: **public, private ,protected**. and **base_class_name** is the name of the base class from which you want to inherit the sub class.

Note: A derived class doesn’t inherit access to private data members. However, it does inherit a full parent object, which contains any private members which that class declares.

```c++
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

```c++
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

Now we continue the youtube channel tutorial.

```c++
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

# 收集

## Namespaces 命名空间

## #include<> 和 include"" 区别

- 使用#include<> 程序会直接到标准函数库中找文件

- 使用#include"" 程序会会先从当前目录中找文件，**如果找不到会再到标准函数库中找文件**，保底，自己写的头文件用它

## 封装 Encapsulation
