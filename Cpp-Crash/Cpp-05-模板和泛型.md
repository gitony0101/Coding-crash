## 模板和泛型 

Template  and Generic

# 模板

## 模板的概念

> C++另一种编程思想称为泛型编程 ，主要利用的技术就是模板，模板就是建立**通用的模具**，大大**提高复用性**

模板的特点：

- 模板不可以直接使用，它只是一个框架
- 用什么类型-函数模板自动匹配函数的类型，自动变成相应类型
- 模板的通用并不是万能的

C++提供两种模板机制:
- ### **函数模板** 编译器根据传值可以自动类型推导
- ### **类模板**

## 1 函数模板

> 函数模板作用：建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个**虚拟的类型**来代表。

比如：

- 顺序队列 内部是数组--类模板
- 链式队列 内部是链表--类模板

**语法：**

```C++
template<typename T>
// 函数声明或定义 或者
template<class T> //关键字不同但是意思相同
```

> 习惯建议用`typename`避免与下面的类模板`class`混淆

**解释：**

template --- 声明创建模板

typename --- 表面其后面的符号是一种数据类型，可以用 class 代替

T --- 通用的数据类型，名称可以替换，通常为大写字母，它就是个行参

- `template<typename/class T>`只对它后面第一个函数生效

- `template<class T1,class T2,class T3>`可以这样命名下去

总结：

- 函数模板利用关键字 template
- 使用函数模板有两种方式：自动类型推导、显示指定类型
- 模板的目的是为了提高复用性，将类型参数化

> 注意:
> 
> 自动类型推导，必须推导出一致的数据类型 T,才可以使用
> 
> 模板必须要确定出 T 的数据类型，才可以使用
> 
- 使用模板时必须确定出通用数据类型 T，并且能够推导出一致的类型
  - 遇上循环了怎么办，  `printf`用`u`：
```c++
template <typename T>
void printArray(T arr[], int len) {
  for (int i = 0; i < len; i++) {
    printf("%u", arr[i]);//直接用的T来指代
  }
```







### 函数模板可以像普通函数那样被重载

### 函数模板与普通函数的区别

- 是否允许**自动类型转**化：普通函数**不允许**，行参定义了啥就是啥，函数模板**允许**，灵活
> #### 本质是模板可以根据实际的使用场景自动编译
- 总结：既然提供了函数模板，最好就不要提供普通函数，否则容易出现二义性

- 利用具体化的模板，可以解决自定义类型的通用化
- 学习模板并不是为了写模板，而是在 STL 能够运用系统提供的模板

## 2 类模板

## 10. 类模板语法

类模板作用：

- 建立一个通用类，类中的成员 数据类型可以不具体制定，用一个**虚拟的类型**来代表。

**语法：**

```c++
template<typename T>
类
```

**示例：**

```C++
#include <string>
//类模板
template<class NameType, class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->mName = name;
		this->mAge = age;
	}
	void showPerson()
	{
		cout << "name: " << this->mName << " age: " << this->mAge << endl;
	}
public:
	NameType mName;
	AgeType mAge;
};

void test01()
{
	// 指定NameType 为string类型，AgeType 为 int类型
	Person<string, int>P1("孙悟空", 999);
	P1.showPerson();
}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：类模板和函数模板语法相似，在声明模板 template 后面加类，此类称为类模板

## 11. 类模板与函数模板区别

类模板与函数模板区别主要有两点：

1. 类模板没有自动类型推导的使用方式
2. 类模板在模板参数列表中可以有默认参数

**示例：**

```C++
#include <string>
//类模板
template<class NameType, class AgeType = int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->mName = name;
		this->mAge = age;
	}
	void showPerson()
	{
		cout << "name: " << this->mName << " age: " << this->mAge << endl;
	}
public:
	NameType mName;
	AgeType mAge;
};

//1、类模板没有自动类型推导的使用方式
void test01()
{
	// Person p("孙悟空", 1000); // 错误 类模板使用时候，不可以用自动类型推导
	Person <string ,int>p("孙悟空", 1000); //必须使用显示指定类型的方式，使用类模板
	p.showPerson();
}

//2、类模板在模板参数列表中可以有默认参数
void test02()
{
	Person <string> p("猪八戒", 999); //类模板中的模板参数列表 可以指定默认参数
	p.showPerson();
}

int main() {

	test01();

	test02();

	system("pause");

	return 0;
}
```

总结：

- 类模板使用只能用显示指定类型方式
- 类模板中的模板参数列表可以有默认参数

## 12. 类模板中成员函数创建时机

类模板中成员函数和普通类中成员函数创建时机是有区别的：

- 普通类中的成员函数一开始就可以创建
- 类模板中的成员函数在调用时才创建

**示例：**

```C++
class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

template<class T>
class MyClass
{
public:
	T obj;

	//类模板中的成员函数，并不是一开始就创建的，而是在模板调用时再生成

	void fun1() { obj.showPerson1(); }
	void fun2() { obj.showPerson2(); }

};

void test01()
{
	MyClass<Person1> m;

	m.fun1();

	//m.fun2();//编译会出错，说明函数调用才会去创建成员函数
}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：类模板中的成员函数并不是一开始就创建的，在调用时才去创建

## 13. 类模板对象做函数参数

学习目标：

- 类模板实例化出的对象，向函数传参的方式

一共有三种传入方式：

1. 指定传入的类型 --- 直接显示对象的数据类型
2. 参数模板化 --- 将对象中的参数变为模板进行传递
3. 整个类模板化 --- 将这个对象类型 模板化进行传递

**示例：**

```C++
#include <string>
//类模板
template<class NameType, class AgeType = int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->mName = name;
		this->mAge = age;
	}
	void showPerson()
	{
		cout << "name: " << this->mName << " age: " << this->mAge << endl;
	}
public:
	NameType mName;
	AgeType mAge;
};

//1、指定传入的类型
void printPerson1(Person<string, int> &p)
{
	p.showPerson();
}
void test01()
{
	Person <string, int >p("孙悟空", 100);
	printPerson1(p);
}

//2、参数模板化
template <class T1, class T2>
void printPerson2(Person<T1, T2>&p)
{
	p.showPerson();
	cout << "T1的类型为： " << typeid(T1).name() << endl;
	cout << "T2的类型为： " << typeid(T2).name() << endl;
}
void test02()
{
	Person <string, int >p("猪八戒", 90);
	printPerson2(p);
}

//3、整个类模板化
template<class T>
void printPerson3(T & p)
{
	cout << "T的类型为： " << typeid(T).name() << endl;
	p.showPerson();

}
void test03()
{
	Person <string, int >p("唐僧", 30);
	printPerson3(p);
}

int main() {

	test01();
	test02();
	test03();

	system("pause");

	return 0;
}
```

总结：

- 通过类模板创建的对象，可以有三种方式向函数中进行传参
- 使用比较广泛是第一种：指定传入的类型

## 14. 类模板与继承

当类模板碰到继承时，需要注意一下几点：

- 当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中 T 的类型
- 如果不指定，编译器无法给子类分配内存
- 如果想灵活指定出父类中 T 的类型，子类也需变为类模板

**示例：**

```C++
template<class T>
class Base
{
	T m;
};

//class Son:public Base  //错误，c++编译需要给子类分配内存，必须知道父类中T的类型才可以向下继承
class Son :public Base<int> //必须指定一个类型
{
};
void test01()
{
	Son c;
}

//类模板继承类模板 ,可以用T2指定父类中的T类型
template<class T1, class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}
};

void test02()
{
	Son2<int, char> child1;
}


int main() {

	test01();

	test02();

	system("pause");

	return 0;
}
```

总结：如果父类是类模板，子类需要指定出父类中 T 的数据类型

## 15. 类模板成员函数类外实现

学习目标：能够掌握类模板中的成员函数类外实现

**示例：**

```C++
#include <string>

//类模板中成员函数类外实现
template<class T1, class T2>
class Person {
public:
	//成员函数类内声明
	Person(T1 name, T2 age);
	void showPerson();

public:
	T1 m_Name;
	T2 m_Age;
};

//构造函数 类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
	this->m_Name = name;
	this->m_Age = age;
}

//成员函数 类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson() {
	cout << "姓名: " << this->m_Name << " 年龄:" << this->m_Age << endl;
}

void test01()
{
	Person<string, int> p("Tom", 20);
	p.showPerson();
}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：类模板中成员函数类外实现时，需要加上模板参数列表

## 16. 类模板分文件编写

学习目标：

- 掌握类模板成员函数分文件编写产生的问题以及解决方式

问题：

- 类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到

解决：

- 解决方式 1：直接包含.cpp 源文件
- 解决方式 2：将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp 是约定的名称，并不是强制

**示例：**

person.hpp 中代码：

```C++
#pragma once
#include <iostream>
using namespace std;
#include <string>

template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age);
	void showPerson();
public:
	T1 m_Name;
	T2 m_Age;
};

//构造函数 类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
	this->m_Name = name;
	this->m_Age = age;
}

//成员函数 类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson() {
	cout << "姓名: " << this->m_Name << " 年龄:" << this->m_Age << endl;
}
```

类模板分文件编写.cpp 中代码

```C++
#include<iostream>
using namespace std;

//#include "person.h"
#include "person.cpp" //解决方式1，包含cpp源文件

//解决方式2，将声明和实现写到一起，文件后缀名改为.hpp
#include "person.hpp"
void test01()
{
	Person<string, int> p("Tom", 10);
	p.showPerson();
}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：主流的解决方式是第二种，将类模板成员函数写到一起，并将后缀名改为.hpp

## 17. 类模板与友元

学习目标：

- 掌握类模板配合友元函数的类内和类外实现

全局函数类内实现 - 直接在类内声明友元即可

全局函数类外实现 - 需要提前让编译器知道全局函数的存在

**示例：**

```C++
#include <string>

//2、全局函数配合友元  类外实现 - 先做函数模板声明，下方在做函数模板定义，在做友元
template<class T1, class T2> class Person;

//如果声明了函数模板，可以将实现写到后面，否则需要将实现体写到类的前面让编译器提前看到
//template<class T1, class T2> void printPerson2(Person<T1, T2> & p);

template<class T1, class T2>
void printPerson2(Person<T1, T2> & p)
{
	cout << "类外实现 ---- 姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
}

template<class T1, class T2>
class Person
{
	//1、全局函数配合友元   类内实现
	friend void printPerson(Person<T1, T2> & p)
	{
		cout << "姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
	}


	//全局函数配合友元  类外实现
	friend void printPerson2<>(Person<T1, T2> & p);

public:

	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}


private:
	T1 m_Name;
	T2 m_Age;

};

//1、全局函数在类内实现
void test01()
{
	Person <string, int >p("Tom", 20);
	printPerson(p);
}


//2、全局函数在类外实现
void test02()
{
	Person <string, int >p("Jerry", 30);
	printPerson2(p);
}

int main() {

	//test01();

	test02();

	system("pause");

	return 0;
}
```

总结：建议全局函数做类内实现，用法简单，而且编译器可以直接识别

## 18. 类模板案例

案例描述: 实现一个通用的数组类，要求如下：

- 可以对内置数据类型以及自定义数据类型的数据进行存储
- 将数组中的数据存储到堆区
- 构造函数中可以传入数组的容量
- 提供对应的拷贝构造函数以及 operator=防止浅拷贝问题
- 提供尾插法和尾删法对数组中的数据进行增加和删除
- 可以通过下标的方式访问数组中的元素
- 可以获取数组中当前元素个数和数组的容量

**示例：**

myArray.hpp 中代码

```C++
#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray
{
public:

	//构造函数
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		pAddress = new T[this->m_Capacity];
	}

	//拷贝构造
	MyArray(const MyArray & arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			//如果T为对象，而且还包含指针，必须需要重载 = 操作符，因为这个等号不是 构造 而是赋值，
			// 普通类型可以直接= 但是指针类型需要深拷贝
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//重载= 操作符  防止浅拷贝问题
	MyArray& operator=(const MyArray& myarray) {

		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		this->m_Capacity = myarray.m_Capacity;
		this->m_Size = myarray.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = myarray[i];
		}
		return *this;
	}

	//重载[] 操作符  arr[0]
	T& operator [](int index)
	{
		return this->pAddress[index]; //不考虑越界，用户自己去处理
	}

	//尾插法
	void Push_back(const T & val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//尾删法
	void Pop_back()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//获取数组容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//获取数组大小
	int	getSize()
	{
		return this->m_Size;
	}


	//析构
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
	}

private:
	T * pAddress;  //指向一个堆空间，这个空间存储真正的数据
	int m_Capacity; //容量
	int m_Size;   // 大小
};
```

类模板案例—数组类封装.cpp 中

```C++
#include "myArray.hpp"
#include <string>

void printIntArray(MyArray<int>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

//测试内置数据类型
void test01()
{
	MyArray<int> array1(10);
	for (int i = 0; i < 10; i++)
	{
		array1.Push_back(i);
	}
	cout << "array1打印输出：" << endl;
	printIntArray(array1);
	cout << "array1的大小：" << array1.getSize() << endl;
	cout << "array1的容量：" << array1.getCapacity() << endl;

	cout << "--------------------------" << endl;

	MyArray<int> array2(array1);
	array2.Pop_back();
	cout << "array2打印输出：" << endl;
	printIntArray(array2);
	cout << "array2的大小：" << array2.getSize() << endl;
	cout << "array2的容量：" << array2.getCapacity() << endl;
}

//测试自定义数据类型
class Person {
public:
	Person() {}
		Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& personArr)
{
	for (int i = 0; i < personArr.getSize(); i++) {
		cout << "姓名：" << personArr[i].m_Name << " 年龄： " << personArr[i].m_Age << endl;
	}

}

void test02()
{
	//创建数组
	MyArray<Person> pArray(10);
	Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);

	//插入数据
	pArray.Push_back(p1);
	pArray.Push_back(p2);
	pArray.Push_back(p3);
	pArray.Push_back(p4);
	pArray.Push_back(p5);

	printPersonArray(pArray);

	cout << "pArray的大小：" << pArray.getSize() << endl;
	cout << "pArray的容量：" << pArray.getCapacity() << endl;

}

int main() {

	//test01();

	test02();

	system("pause");

	return 0;
}
```

总结：

能够利用所学知识点实现通用的数组

```plaintext

```

### 范型编程

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

代码先放这里

```c++
//
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
