# C++ 编程笔记 04

# 面向对象编程 Object-Oriented Programming - OOP

py 和 cpp 都是

## 面向对象和面向过程

面向对象和面向过程，字面意思的区别，核心是对编程的认知：

要把大象装冰箱：

- 面向对象：人类，大象类，冰箱类，人类的实例，人类的方法，人类的属性，冰箱类的实例，冰箱类的方法，冰箱类的属性
- 面向过程：把冰箱门打开，把大象放进冰箱，冰箱门关上

## 类

类像一个容器，装载着变量和方法，所以定义一个类，就是在定义变量和方法。
`.h` 文件用于函数和变量的声明，而 `.cpp` 文件则用于定义。

```c++
#include <cstdio>
#include <iostream>
#include <list> // STL 链表
using namespace std;

/*
class 类方法
*/

class YoutubeChannel {               //定义油管频道类
public:                              // 公共变量，外部可访问
  string Name;                       // 设定up主名称
  string OwnerName;                  // Up主所有人账户名
  int SubscribersCount;              // 订阅量
  list<string> PublishedVideoTitles; //初始化链表
};

void yt01() {
  YoutubeChannel yt01;
  yt01.Name = "Avengers";
  yt01.OwnerName = "Tony";
  yt01.SubscribersCount = 10000;
  //   list<string> names{"A", "B", "C", "D", "E"}; 为什么这样会报错？
  yt01.PublishedVideoTitles.push_back("Avengers: Endgame"); //添加节目
  yt01.PublishedVideoTitles.push_back("Avengers: Infinity War");
  yt01.PublishedVideoTitles.push_back("Avengers: Age of Ultron");
  yt01.PublishedVideoTitles.push_back("Avengers: The Initiative");
  //打印yt01的信息
  printf("Up主所有人姓名：%s\nUp主名称：%s\n订阅量：%d\n频道下节目:\n",
         yt01.Name.c_str(), yt01.OwnerName.c_str(), yt01.SubscribersCount);
  // 打印节目名称
  for (auto title = yt01.PublishedVideoTitles.begin();
       title != yt01.PublishedVideoTitles.end(); title++) // 循环起来啊，别忘了
    printf("%s\n", title->c_str());
}

//构造函数方法

int main() {
  yt01(); // class 类方法 打印
}


```

## 结构体

结构体属于用户**自定义的数据类型**，允许用户存储不同的数据类型

**一些内置的数据类型的集合**

像不像字典？

**语法：**`struct 结构体名 { 结构体成员列表 }；`

通过结构体创建变量的方式有三种：前两种使用较多

- struct 结构体名 变量名
- struct 结构体名 变量名 = { 成员 1 值 ， 成员 2 值...}
- 定义结构体时顺便创建变量 使用较少

注意：

- 定义结构体时，struct 不可省略，使用时可以直接调用结构体名
- 结构体做函数参数，const 可以冻结防止误操作
  - 值传递
  - 地址传递（引用减少内存使用）

# 构造函数 Consturctor 和析构函数 Destrctor

构造函数 Consturctor 和析构函数 Destrctor:

- 对象的初始化和清理,编译器自动调用，你不写，也会调用**空实现**

## 构造函数：初始化主要作用在于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用，无须手动调用。

- 没有返回值，不用 void
  - 函数名称和类名一样
  - 可以有参数，能重载
  - 创建对象的时候，构造函数会且只会自动调用一次，类比手机初始化一次就好
  - 两种分类方式：
    - 按参数分类：有参构造和无参构造
    - 按照类型分类：普通和拷贝构造（需要 const &引用） 以后还要讲
  - 三种调用方式：
    - 括号法 `person p1(10);person p2(p1);`
    - 显示法 `person p3 = person（10);`
    - 隐式转换法 `person p5 = p4;`
  - 方法归类只是归类，掌握规律， 说明这里使用很灵活就是了
  - 注意`person(10)`是匿名对象，执行结束后系统会立回收

## 析构函数：清理，主要作用在于对象销毁前系统自动调用，执行一些清理工作。

- 函数名和类名相同，但是要在名称前加`波浪号~`
- 没有返回值不用 void
- 不可以有参数，不能重载（销毁用的，搞这些没意思）
- 对象在销毁前，会且只会自动调用析构函数一次，类比重置手机一次就好

小结：

- 为什么要同名？因为你要知道你的对象从哪里来，到哪里去，很清晰。
- 为什么没有返回值，一个初始化，一个销毁，没有必要上来就返回数值活着销毁了还要再来返回什么，啰嗦

# 特性

面向对象编程具有继承、多态、封装等特性以及 class、interface、private、public 等特性

> 继承：复用前人的代码,多态：复用后人的代码

## 继承

1. 继承的写法
2. 集成的构造函数写法
3. 权限问题

### 继承方式权限 private >> protected >> public

- ### 父类当中的**属性**在子类当中的最低**呈现**

> 同时子类中继承方式会**升级**原来父类的 public 到 protected

继承，指可以让某个类型的对象获得另一个类型的对象的属性的方法。它支持按级分类的概念。继承是指这样一种能力：它可以使用现有类的所有功能，并在无需重新编写原来的类的情况下对这些功能进行扩展。 通过继承创建的新类称为“子类”或“派生类”，被继承的类称为“基类”、“父类”或“超类”。继承的过程，就是从一般到特殊的过程。要实现继承，可以通过 “继承”（Inheritance）和“组合”（Composition）来实现。继承概念的实现方式有二类：实现继承与接口继承。实现继承是指直接使用父类的属性和方法而无需额外编码的能力；接口继承是指仅使用属性和方法的名称、但是子类必须提供实现的能力。

## 多态

多态按字面的意思就是多种形态。当类之间存在层次结构，并且类之间是通过继承关联时，就会用到多态。

C++ 多态意味着调用成员函数时，会根据调用函数的对象的类型来执行不同的函数。

不确定的定义、数值，让用户去处理

- 打印函数
- 回调函数

## 封装

封装，就是把客观事物封装成抽象的类，并且类可以把自己的数据和方法只让可信的类或者对象操作，对不可信的进行信息隐藏。一个类就是一个封装了数据以及操作这些数据的代码的逻辑实体。在一个对象内部，某些代码或某些数据可以是私有的，不能被外界访问。通过这种方式，对象对内部数据提供了不同级别的保护，以防止程序中无关的部分意外的改变或错误的使用了对象的私有部分。

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

//   YoutubeChannel yt_2("Sigur Ros", "Jonsi and his bands.");
//   yt_2.PublishedVideoTitles.push_back("Hopipolla");
//   yt_2.PublishedVideoTitles.push_back("Heima");

//   // call the class method to get the info we entered.
//   yt_2.getInfo(); // call the class method to get the info we entered.


```
