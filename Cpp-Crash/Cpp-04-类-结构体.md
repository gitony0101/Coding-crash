# C++ 编程笔记 04

# 面向对象编程 Object-Oriented Programming - OOP
py 和 cpp都是

## 面向对象和面向过程

面向对象和面向过程，字面意思的区别，核心是对编程的认知：

要把大象装冰箱：
- 面向对象：人类，大象类，冰箱类，人类的实例，人类的方法，人类的属性，冰箱类的实例，冰箱类的方法，冰箱类的属性
- 面向过程：把冰箱门打开，把大象放进冰箱，冰箱门关上

# 类和对象
类像一个容器，装载着变量和方法，所以定义一个类，就是在定义变量和方法。
`.h` 文件用于函数和变量的声明，而 `.cpp` 文件则用于定义。

## 特性

面向对象编程具有封装、继承、多态等特性以及class、interface、private、public等特性

- 封装
  - 封装，就是把客观事物封装成抽象的类，并且类可以把自己的数据和方法只让可信的类或者对象操作，对不可信的进行信息隐藏。一个类就是一个封装了数据以及操作这些数据的代码的逻辑实体。在一个对象内部，某些代码或某些数据可以是私有的，不能被外界访问。通过这种方式，对象对内部数据提供了不同级别的保护，以防止程序中无关的部分意外的改变或错误的使用了对象的私有部分。


- 继承
  - 继承，指可以让某个类型的对象获得另一个类型的对象的属性的方法。它支持按级分类的概念。继承是指这样一种能力：它可以使用现有类的所有功能，并在无需重新编写原来的类的情况下对这些功能进行扩展。 通过继承创建的新类称为“子类”或“派生类”，被继承的类称为“基类”、“父类”或“超类”。继承的过程，就是从一般到特殊的过程。要实现继承，可以通过 “继承”（Inheritance）和“组合”（Composition）来实现。继承概念的实现方式有二类：实现继承与接口继承。实现继承是指直接使用父类的属性和方法而无需额外编码的能力；接口继承是指仅使用属性和方法的名称、但是子类必须提供实现的能力。
- 多态
  - 多态，是指一个类实例的相同方法在不同情形有不同表现形式。多态机制使具有不同内部结构的对象可以共享相同的外部接口。这意味着，虽然针对不同对象的具体操作不同，但通过一个公共的类，它们（那些操作）可以通过相同的方式予以调用。



## 构造函数Consturctor和析构函数Destrctor

构造函数Consturctor和析构函数Destrctor:

- 对象的初始化和清理,编译器自动调用，你不写，也会调用**空实现**

### 构造函数：初始化主要作用在于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用，无须手动调用。

 - 没有返回值，不用void
    - 函数名称和类名一样
    - 可以有参数，能重载
    - 创建对象的时候，构造函数会且只会自动调用一次，类比手机初始化一次就好
    - 两种分类方式：
      - 按参数分类：有参构造和无参构造
      - 按照类型分类：普通和拷贝构造（需要const &引用） 以后还要讲
    - 三种调用方式：
      - 括号法 `person p1(10);person p2(p1);`
      - 显示法 `person p3 = person（10);`
      - 隐式转换法 `person p5 = p4;`
    - 方法归类只是归类，掌握规律， 说明这里使用很灵活就是了
    - 注意`person(10)`是匿名对象，执行结束后系统会立回收

### 析构函数：清理，主要作用在于对象销毁前系统自动调用，执行一些清理工作。

  - 函数名和类名相同，但是要在名称前加`波浪号~`
  - 没有返回值不用void
  - 不可以有参数，不能重载（销毁用的，搞这些没意思）
  - 对象在销毁前，会且只会自动调用析构函数一次，类比重置手机一次就好

小结：

  - 为什么要同名？因为你要知道你的对象从哪里来，到哪里去，很清晰。
  - 为什么没有返回值，一个初始化，一个销毁，没有必要上来就返回数值活着销毁了还要再来返回什么，啰嗦







```c++

```



# 结构体

```c++

```

结构体属于用户**自定义的数据类型**，允许用户存储不同的数据类型

**一些内置的数据类型的集合**

像不像字典？








**语法：**`struct 结构体名 { 结构体成员列表 }；`

通过结构体创建变量的方式有三种：前两种使用较多

- struct 结构体名 变量名
- struct 结构体名 变量名 = { 成员 1 值 ， 成员 2 值...}
- 定义结构体时顺便创建变量 使用较少

注意：

- 定义结构体时，struct不可省略，使用时可以直接调用结构体名
- 结构体做函数参数，const可以冻结防止误操作
  - 值传递
  - 地址传递（引用减少内存使用）

## 结构体数组： 

**语法：**` struct 结构体名 数组名[元素个数] = { {} , {} , ... {} }`

## 结构体指针

**作用：**通过指针访问结构体中的成员,- 利用操作符 `-> `可以通过结构体指针访问结构体属性

## 结构体嵌套结构体和结构体数组

语法： 

```cpp
struct teacher {
  //第一前提是之前已经创建好了结构体 此处是之前创建的student
  //成员列表
  int id;            // 职工编号
  string name;       //教师姓名
  int age;           //教师年龄
  student stu;       // 嵌套的子结构体
  student sArray[5]; // 结构体嵌套结构体数组
};

```





















</div>
</div>

# Encapsulation

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

# Inheritance

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
: public YoutubeChannel // # Inherit YoutubeChannel above # // Derived
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

## Modes of Inheritance

- Public mode: If we derive a sub class from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in derived class.
- Protected mode: If we derive a sub class from a Protected base class. Then both public member and protected members of the base class will become protected in derived class.
- Private mode: If we derive a sub class from a Private base class. Then both public member and protected members of the base class will become Private in derived class.

## Types of Inheritance

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

# Polymorphism

The word polymorphism means **having many forms** : The ability of a message to be displayed in more than one form.

A real-life example of polymorphism, a person at the same time can have different characteristics. **Like a man at the same time is a father, a husband, an employee**.

So the same person posses different behavior in different situations. This is called polymorphism. Polymorphism is considered as one of the important features of Object Oriented Programming.

In C++ polymorphism is mainly divided into two types:

- Compile time Polymorphism
- Runtime Polymorphism

## Difference between Inheritance and Polymorphism

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

五大基本原则：SPR, OCP, LSP, DIP, ISP
单一职责原则SRP(Single Responsibility Principle)
是指一个类的功能要单一，不能包罗万象。如同一个人一样，分配的工作不能太多，否则一天到晚虽然忙忙碌碌的，但效率却高不起来。
开放封闭原则OCP(Open－Close Principle)
一个模块在扩展性方面应该是开放的而在更改性方面应该是封闭的。比如：一个网络模块，原来只服务端功能，而现在要加入客户端功能，那么应当在不用修改服务端功能代码的前提下，就能够增加客户端功能的实现代码，这要求在设计之初，就应当将服务端和客户端分开，公共部分抽象出来。
里式替换原则LSP(the Liskov Substitution Principle LSP)
子类应当可以替换父类并出现在父类能够出现的任何地方。比如：公司搞年度晚会，所有员工可以参加抽奖，那么不管是老员工还是新员工，也不管是总部员工还是外派员工，都应当可以参加抽奖，否则这公司就不和谐了。
依赖倒置原则DIP(the Dependency Inversion Principle DIP)
具体依赖抽象，上层依赖下层。假设B是较A低的模块，但B需要使用到A的功能，这个时候，B不应当直接使用A中的具体类： 而应当由B定义一个抽象接口，并由A来实现这个抽象接口，B只使用这个抽象接口：这样就达到了依赖倒置的目的，B也解除了对A的依赖，反过来是A依赖于B定义的抽象接口。通过上层模块难以避免依赖下层模块，假如B也直接依赖A的实现，那么就可能造成循环依赖。一个常见的问题就是编译A模块时需要直接包含到B模块的cpp文件，而编译B时同样要直接包含到A的cpp文件。
接口分离原则ISP(the Interface Segregation Principle ISP)
模块间要通过抽象接口隔离开，而不是通过具体的类强耦合起来
