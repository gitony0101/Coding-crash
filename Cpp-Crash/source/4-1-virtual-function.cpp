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
 是因为父类指针被子类对象初始化的析构会出现问题
*/

// 1、虚函数对内存影响
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

// 2、 纯虚函数 有种写有文件h的感觉
class stack {
public:
  //纯虚函数:
  virtual void push(int element) = 0; //重点在写法：没有函数体
  virtual void pop();                 //不写=0好像也行
  virtual int top() const = 0;
  virtual int size() = 0;
  virtual bool empty() const = 0; // const也能写
};
// ADT（抽象数据类型）写两个子类：数组栈、链式栈
//过程：子类想要创建对象，必须要重写纯虚函数中的过程
struct Node { //实现数组栈 结点结构体
  int data;
  Node *next; //下面链接
};
class arrayStack : public stack { //创建数组栈子类，
public:                           // 开辟括号，有种写h的感觉
  void push(int element){};       //入栈，入一个整数，全都是模拟
  void pop();                     //出栈
  int top() { return 1; };        //获取站定元素
  int size();                     //获取大小
  bool empty() { return true; };  //             //判断是否为空
protected:
  int *array; //数组栈 准备数组的指针
};
class listStack : public stack { //创建链栈子类
public:                          // 开辟括号，有种写h的感觉
  void push(int element){};      //入栈，入一个整数，全都是模拟
  void pop();                    //出栈
  int top() { return 1; };       //获取站定元素
  int size();                    //获取大小
  bool empty() { return true; }; //             //判断是否为空
protected:
  Node *headnode; //表头
};

// 测试栈函数
void testStack(stack *pStack) { //测试代码：传入抽象类的指针
  pStack->push(1);              //
  while (!pStack->empty()) {
    printf("%d\n", pStack->top());
    pStack->pop(); // 弹出栈顶元素
  }
}

// 3、虚析构函数

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
    arrayStack *pArrStack = new arrayStack;
    testStack(pArrStack);

    testStack(new listStack);
  }
  printf("\n");
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

*/
