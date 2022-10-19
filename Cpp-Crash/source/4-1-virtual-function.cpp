// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//虚函数：用virtual修饰的函数
/*
1、虚函数对内存的影响： 32位系统只增加4个字节，64位8个字节
    虚指针的力量 应用在多态里面
2、纯虚函数 没有函数体的函数
    构造函数没有虚函数，析构函数有虚函数
    抽象类： 具有纯虚函数的类
    抽象类的特性：不能创建对象，但是可以创建对象指针
    ADT 我猜就是Abstract Data Type 抽象数据类型
3、虚析构函数（析构函数可以（往往）是虚函数）
    父类指针，被子类初始化，会出现内存泄漏问题
*/

//// 1、虚函数对内存影响
class emptyClass00 {
  //对于一个空的类，占用1个内存字节；用来内存标记，告诉程序这个类是一个自定义类型
};
class Boy {
public:
  int age;
};

class Girl { //
public:
  //指针能实现这种不占字节的操作，这些虚函数都存在虚函数表中，随意注释掉一些虚函数看一下占用内存字节数
  virtual void print01() { printf("虚函数 1\n"); }
  virtual void print02() { printf("虚函数 2\n"); }
  //   virtual void print00() { printf("虚函数 0,age 的数值为 %d\n", age); }
  //   int age;// 赋值int也要占用8个字节
  virtual void print04() { printf("虚函数 4\n"); }
};

//// 2、 纯虚函数 有种写有文件h的感觉
// stack  栈
class stack {
public:
  //抽象一个父类,已经知道栈的基本操作,把所有函数声明为抽象数据类型,父类中所有的属性描述好
  virtual void push(int data) = 0; //重点在写法：没有函数体
  virtual void pop() = 0;
  virtual int top() const = 0;
  virtual bool empty() const = 0;
  virtual int size() const = 0;
};
// // ADT（抽象数据类型）写两个子类：数组栈、链式栈
// //过程：子类想要创建对象，必须要重写纯虚函数中的过程
class arrayStack : public stack //数组栈---用数组实现一个栈
{
public:
  void push(int data) //入栈---入一个整数
  {}
  void pop() //出栈
  {}
  int top() const //获取栈最上面的元素
  {
    return 1;
  }
  bool empty() const //判断是否为空
  {
    return true;
  }
  int size() const //获取大小
  {
    return 1;
  }
  //可以增加别的函数---但是纯虚函数必须要重写
  //可以增加别的数据成员
protected:
  int *array; //数组栈---准备数组的指针
};
struct Node //节点---用链表实现,需要结构体
{
  int data;
  Node *next;
};
//不管做什么栈,重写抽象类即可
class listStack : public stack //链式栈---用链表实现一个栈
{
public:
  void push(int data) {}
  void pop() {}
  int top() const { return 1; }
  bool empty() const { return true; }
  int size() const { return 1; }

protected:
  Node *headNode; //表头
};
// 测试栈函数
void testStack(stack *pStack) //测试代码---传入抽象类的指针
{
  pStack->push(1);         //入栈,入1
  while (!pStack->empty()) //判断栈是否为空
  {
    cout << pStack->top(); //如果栈不为空,获取栈顶元素,不断出栈
    pStack->pop();
  }
}

//// 3、虚析构函数（析构函数可以（往往）是虚函数）用法
//父类指针，被子类初始化，会出现内存泄漏问题
class A {
public:
  ~A() { // 父类析构
    printf("父类析构函数\n");
  }
};
class B : public A { //创建A的子类B
public:
  ~B() { //同样创建子类析构
    printf("子类析构函数\n");
  }
};
//解决方案：将父类的析构函数，加上virtual成为：
//“虚析构函数”
class C {
public:
  virtual ~C() {
    //创建父类虚析构函数
    printf("父类C，虚析构函数\n");
  };
};
class D : public C {
public:
  ~D() { printf("D子类析构函数\n"); }
};

int main() {
  // 1、虚函数对内存影响
  {
    printf("空类：emptyClass00占用了 %lu 个字节\n", sizeof(emptyClass00));
    printf("Boy类(非空)占用了 %lu 个字节\n", sizeof(Boy));
    printf("Girl类(非空)占用了 %lu 个字节\n", sizeof(Girl));
  }
  printf("\n");
  // 2、 纯虚函数
  {
    // stack myStack; //抽象类不能创建对象，看一下报错

    //无论什么方式实现,都可以调用这个测试代码
    //用数组|链表调用,测试代码是一样的,统一接口
    testStack(new arrayStack);
    testStack(new listStack);
  }
  printf("\n");
  // 3、虚析构函数（析构函数可以（往往）是虚函数）
  {
    A *pA = new B; //父类指针，被子类初始化，会出现内存泄漏问题
    delete pA;     //删除pA后注意看出来的事哪个析构函数
                   //解决方案：创建父类虚析构函数
    C *pC = new D;
    delete pC; // 注意调用顺序，洋葱结构
  }
  printf("\n");
  printf("\n");
  printf("\n");

  return 0;
}
/*
不能出现的：菱形继承，要避免
    A
  /    \
B       C
  \   /
    D
D 里面有两个A，会产生二义性问题：
可以用virtual 虚继承
*/

/*
为什么引入虚函数

1.因为当你顶级基类A有一虚函数play();，而A的子类B也有play();，A的子类C也有play();，这就说明如果顶级基类A中的play();若定义怎么玩是不合理的。因为B有B的玩法C有C的玩法。所以这种情况下定义为纯虚函数目的在于使子类仅仅只是继承函数的接口，告诉子类的设计者“你必须在子类中提供一个纯虚函数的实现，但我不知道你会怎么样实现它”
2.引入纯虚函数，则编译器要求在子类中必须予以重写以实现多态性
https://blog.csdn.net/weixin_60569662/article/details/121757187

*/
