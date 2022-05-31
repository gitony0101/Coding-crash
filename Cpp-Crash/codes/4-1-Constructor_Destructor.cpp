#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

/*
对象的初始化和清理
1、构造函数 Constrctor 进行初始化操作
没有返回值，不用void
函数名称和类名一样
可以有参数，能重载
创建对象的时候，构造函数会自动调用一次，类比手机初始化一次好


2、析构函数 Destructor 破坏机，进行清理的操作

函数名和类名相同，但是要在名称前加`波浪号~`
没有返回值不用void
不可以有参数，不能重载（销毁用的，搞这些没意思）
对象在销毁前，会且只会自动调用析构函数一次，类比重置手机一次就好

构造和析构都是必须有的实现，如果没有，编译器会自己提供一个空实现

3、 构造函数的分类及调用
*/
//构造函数和析构函数
class Person01 {
public: // 一定要写出作用域
  // 1、构造函数
  Person01() { printf("Person 构造函数调用\n"); }
  // 2、析构函数
  ~Person01() { printf("Person 析构函数调用\n"); }
};

void test01() {
  Person01 p1; // 在栈上的数据，test01执行完毕后，就会释放这个对象。
}
//构造函数的分类及调用
class Person02 {
public: // 一定要写出作用域
  // 1、构造函数 按照参数分类：有参构造，无参构造（默认构造）
  Person02() { printf("Person 无参(默认)构造函数调用\n"); }
  Person02(int age) {
    age = 10;
    printf("Person 有参构造函数调用(int a)\n");
  }
  // 2、 构造函数按照类型分类 普通构造和拷贝构造函数
  //拷贝构造
  Person02(const Person02 &p) { //注意用const 冻结拷贝过来的对象，否则会一起改变
    age = p.age;

    printf("Person 拷贝构造函数调用\n");
    // int age = p.age;}
  }

public:
  int age; // 拷贝构造的时候这里必须声明age在外部可访问
};
int main() {
  test01();
  Person01 p2; // 这里一般在任意键继续后执行，将来再讲，这里运行不出来
               //构造函数的分类及调用
               //拷贝构造函数使用
  Person02 p3(20);
  Person02 p4(p3); //拷贝构造,这个其实是括号法

  return 0;
}
