// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

// 1. 继承的写法
// 子类：继承方式父类
// 继承方式：public 公有继承，private 私有继承 ，protect保护继承
// 2. 继承的构造函数写法
//子类的构造函数必须要调用父类的构造函数
// 3. 权限问题 用继承方式去看权限问题//
// 父类当中的**属性**在子类当中的最低**呈现**
// //同时子类中继承方式会 **升级**原来父类的public到protected
//父类中的私有属性子类不可访问
class Person { //先定义一个Person类作为父类
public:
  //   Person(string name, int age) {
  //     this->name = name;
  //     this->age = age;
  //   } //先初始化以后再赋值
  Person(string name, int age)
      : name(name), age(age) { //初始化参数列表，初始化时即该值
    printf("父类带参的构造函数。\n");
  };
  Person() { printf("无参构造父类函数Person，可以不写.\n"); } //无参构造
  void print() { printf("Name: %s, Age: %d\n", name.c_str(), age); }

protected:
  string name;
  int age;
  //   const int a = 42;//声明一个const变量会让第一个this初始化方法报错
private:
  int idNUM;
};

//继承子类写法
// 公有继承public
class son_Public : public Person {
public:
protected:
};

//保护继承
class son_Protected : protected Person {
  //保护继承,因此，父类当中的最低权限public在子类中升级成为protected
  //如void打印函数
public:
  //子类构造函数必须调用父类的函数：习惯于在父类中加入：  Person() {} //无参构造
  son_Protected() { printf("子类无参构造函数。\n"); }
  //复杂版：子类带参构造函数
  son_Protected(string name, int age) : Person(name, age) {
    printf("子类带参构造函数\n");
  }
  void printBoy() { //直接调用了父类的name和age
    printf("Name: %s, Age: %d\n", name.c_str(), age);
  }

protected:
  //这里已经包含了 name age print，因为是保护性继承Person
};

// 4、单继承中的构造顺序和析构顺序
/*
普通对象来说，构造顺序和析构顺序相反的
 */
class A {
public:
  A() { // A的无参构造函数
    printf("构造函数A。");
  }
  A(int a) : a(a) {} //类继承遗传性用，有参构造
  int a;
  ~A() { // A的析构函数
    printf("A的析构函数。");
  }
};

class B : public A {
public:
  B() { // B的无参构造函数
    printf("构造函数B。");
  }
  B(int a, int b) : b(b), A(a) {} // B的有参构造，但是要把A也引进来
  int b;
  ~B() { // B的析构函数,对象死亡的时候会调用析构函数
    printf("B的析构函数。");
  }
};

// 5、类的继承的特殊情况 接上文的 A B 有参构造
/*
类的继承的遗传性：继承下来的东西一直存在，类似派生的概念
也就是套娃，只是一种性质，一般不会拓展的很深，因为子类需要承接的不仅仅是特性，还有繁复的构造函数
子类在有参构造时候，只需要定义上一级父函数即可，不用全都调用，但是参数要全都写出来继承
*/
class C : public B {
public:
  C(int a, int b, int c) : B(a, b), c(c) {} // C作为B的子函数，只调用B就行
  //但是上级参数int a, int b 和本级int c一个都不能少
  int c;
};

class D : public C { //到此你要明白，D作为子类，已经继承了ABC的属性
  //也就是：int a, int b, int c
public:
  D(int a, int b, int c, int d) : C(a, b, c), d(c) {} //一级级套娃
  int d;
  void dPrint() { printf("%d %d %d %d", a, b, c, d); }; //打印函数
};

// 6、继承中的同名问题
// 就近原则 优先调用本级 一般不这么用，体会原则
// 方法、指针以此类推，都是就近原则
/*
数据成员同名
成员函数同名
- 访问子类同名成员   直接访问即可
- 访问父类同名成员   需要加作用域
*/
class Base {
public:
  Base(int idBase) : idBase(idBase) {}
  void print() { printf("%d ", idBase); }

protected:
  int idBase;
};

class Child : public Base {
public:
  Child(int idChild, int idBase) : idChild(idChild), Base(idBase){};
  void print() { printf("%d ", idChild); } //就近原则，优先调用本级
protected:
  int idChild;
};

// 7、 多继承：存在两个或者两个以上的父类，称之为多继承
/*
权限和单继承一样
构造函数写法和单继承也是一样的
*/

class Lady {
public:
  Lady(string Fname, string Lname) : Fname(Fname), Lname(Lname){};

protected:
  string Fname; // Lady名 first name
  string Lname; // Lady姓 last name
};

class Mister {
public:
  Mister(string MrFname, string MrLname) : MrFname(MrFname), MrLname(MrLname) {}

protected:
  string MrFname; // Mr名
  string MrLname; // Mr姓
};
//多继承 是Lady和Mister的子类 使用上官司马这样的复姓
class Son : public Lady, public Mister { //首先父母两个继承
public:
  Son(string Fname, string Lname, string MrLname, string MrFname,
      string sonFname) //父母姓名、孩子的名
      : Mister(MrLname, MrFname), Lady(Fname, Lname), sonFname(sonFname),
        sonLname(MrLname + Lname) {} //孩子用的复姓，string直接相加
  //仔细看这里面的继承参数，把父母的都继承下来，对于子类，进行了自己的定义sonLname(MrLname
  //+ Lname)
  void print() {
    printf("母亲姓名：%s %s,父亲姓名： %s %s，孩子姓名%s %s。\n", Lname.c_str(),
           Fname.c_str(), MrLname.c_str(), MrFname.c_str(), sonLname.c_str(),
           sonFname.c_str());
  } //一定要和初始化的参数顺序吻合

protected:
  string sonLname; // last name
  string sonFname; // first name
};

int main() {
  //   Lec-1 继承的写法
  {
    Person p1("Jhon", 32);
    p1.print();
    son_Protected boy; //构造子类，调用的是无参构造函数
                       // 调用的时候必定调用父类构造函数
    son_Protected boy2("mike", 5); //调用的是子类带参构造函数
                                   // 要和该类构造函数的参数对应起来
    boy2.printBoy();
  }
  printf("\n");
  // Lec-2 单继承中的构造顺序和析构顺序
  {
    //通常情况如下：
    A aObject;   // A
    B bObject01; // AB
    // //构造顺序A-AB ，然后是析构顺序BA-A,连起来AABBAA
    //以上不考虑delete
    ////下面引入类和对象，构造函数对象的释放 new delete组合最高，先释放
    B *p = new B; // AB
    B bObject02; // AB 但是优先级没有 new delete组合高，最后释放，BA
    delete p; //先释放 BA，优先级最高，可以打破普通对象的析构顺序
    //// 可以理解new delete不是通常情况了已经，随用随调
  }
  printf("\n");
  // Lec-3 类的继承的特殊情况
  {
    D dObject(1, 2, 3, 4);
    dObject.dPrint();
  }
  printf("\n");
  // Lec-4 继承中的同名问题 理解就好，不要这样做
  {
    Child boy(10, 20);                  // child 10 base 20
    boy.print();                        //优先调用本级
    boy.Base::print();                  //强制调用父类
    Child *pNewBoy = new Child(14, 42); //指针以此类推相同方法
    pNewBoy->print();
    pNewBoy->Base::print(); //强制调用一样的 (覆盖--->多态)
                            //非正常情况
                            // 1、 父类指针被子类对象初始化，还是就近原则
    Base *pBase = new Child(15, 40);
    pBase->print(); //先调用子类 child,但是很危险
  }
  printf("\n");
  // lecture-5 多继承：存在两个或者两个以上的父类，称之为多继承
  Son *pSon = new Son("英台", "祝", "梁", "山伯", "家辉");
  pSon->print();

  printf("\n");
  printf("\n");
  return 0;
}
