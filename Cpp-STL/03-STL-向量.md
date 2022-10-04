# Vector

## 1. 基本概念

**功能：**

- vector 数据结构和**数组非常相似**，也称为**单端数组**

**vector 与普通数组区别：**

- 不同之处在于数组是静态空间，而 vector 可以**动态扩展**

**动态扩展：**

- 并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间

- vector 容器的迭代器是支持随机访问的迭代器

## 2. 构造函数

**功能描述：**

- 创建 vector 容器

**函数原型：**

- `vector<T> v;` //采用模板实现类实现，默认构造函数
- `vector(v.begin(), v.end());` //将 v[begin(), end())区间中的元素拷贝给本身。
- `vector(n, elem);` //构造函数将 n 个 elem 拷贝给本身。
- `vector(const vector &vec);` //拷贝构造函数。

**示例：**

```C++
// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include <vector>

void printVector(vector<int> &v) {

  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    printf("%d ", *it);
  }
  printf("\n");
};

void printV1() {
  vector<int> v1; //无参构造
  for (int i = 0; i < 10; i++) {
    v1.push_back(i);
  }
  printVector(v1);
}

void printV2() {
  vector<int> v1; //无参构造
  for (int i = 0; i < 10; i++) {
    v1.push_back(i);
  }

  vector<int> v2(v1.begin(), v1.end());
  printVector(v2); //从头到尾传完
}

void printV3() {

  vector<int> v3(10, 100); // 10 个100
  printVector(v3);

  vector<int> v4(v3); //直接复制
  printVector(v4);
}

int main() {

  printV1();
  printV2();
  printV3();

  system("pause");

  return 0;
}

```

**总结：**vector 的多种构造方式没有可比性，灵活使用即可

## 3. 赋值操作

**功能描述：**

- 给 vector 容器进行赋值

**函数原型：**

- `vector& operator=(const vector &vec);`//重载等号操作符

- `assign(beg, end);` //将[beg, end)区间中的数据拷贝赋值给本身。
- `assign(n, elem);` //将 n 个 elem 拷贝赋值给本身。

**示例：**

```C++
#include <vector>

void printVector(vector<int>& v) {

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//赋值操作
void test01()
{
	vector<int> v1; //无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2;
	v2 = v1;
	printVector(v2);

	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	vector<int>v4;
	v4.assign(10, 100);
	printVector(v4);
}

int main() {

	test01();

	system("pause");

	return 0;
}

```

总结： vector 赋值方式比较简单，使用 operator=，或者 assign 都可以

## 4. 容量和大小

**功能描述：**

- 对 vector 容器的容量和大小操作

**函数原型：**

- `empty();` //判断容器是否为空

- `capacity();` //容器的容量

- `size();` //返回容器中元素的个数

- `resize(int num);` //重新指定容器的长度为 num，若容器变长，则以默认值填充新位置。

  ​ //如果容器变短，则末尾超出容器长度的元素被删除。

- `resize(int num, elem);` //重新指定容器的长度为 num，若容器变长，则以 elem 值填充新位置。

  ​ //如果容器变短，则末尾超出容器长度的元素被删除

**示例：**

```C++
#include <vector>

void printVector(vector<int>& v) {

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量 = " << v1.capacity() << endl;
		cout << "v1的大小 = " << v1.size() << endl;
	}

	//resize 重新指定大小 ，若指定的更大，默认用0填充新位置，可以利用重载版本替换默认填充
	v1.resize(15,10);
	printVector(v1);

	//resize 重新指定大小 ，若指定的更小，超出部分元素被删除
	v1.resize(5);
	printVector(v1);
}

int main() {

	test01();

	system("pause");

	return 0;
}

```

总结：

- 判断是否为空 --- empty
- 返回元素个数 --- size
- 返回容器容量 --- capacity
- 重新指定大小 --- resize

## 5. 插入和删除

**功能描述：**

- 对 vector 容器进行插入、删除操作

**函数原型：**

- `push_back(ele);` //尾部插入元素 ele
- `pop_back();` //删除最后一个元素
- `insert(const_iterator pos, ele);` //迭代器指向位置 pos 插入元素 ele
- `insert(const_iterator pos, int count,ele);`//迭代器指向位置 pos 插入 count 个元素 ele
- `erase(const_iterator pos);` //删除迭代器指向的元素
- `erase(const_iterator start, const_iterator end);`//删除迭代器从 start 到 end 之间的元素
- `clear();` //删除容器中所有元素

**示例：**

```C++

#include <vector>

void printVector(vector<int>& v) {

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//插入和删除
void test01()
{
	vector<int> v1;
	//尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printVector(v1);
	//尾删
	v1.pop_back();
	printVector(v1);
	//插入
	v1.insert(v1.begin(), 100);
	printVector(v1);

	v1.insert(v1.begin(), 2, 1000);
	printVector(v1);

	//删除
	v1.erase(v1.begin());
	printVector(v1);

	//清空
	v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVector(v1);
}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：

- 尾插 --- push_back
- 尾删 --- pop_back
- 插入 --- insert (位置迭代器)
- 删除 --- erase （位置迭代器）
- 清空 --- clear

## 6. 数据存取

**功能描述：**

- 对 vector 中的数据的存取操作

**函数原型：**

- `at(int idx);` //返回索引 idx 所指的数据
- `operator[];` //返回索引 idx 所指的数据
- `front();` //返回容器中第一个数据元素
- `back();` //返回容器中最后一个数据元素

**示例：**

```C++
#include <vector>

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "v1的第一个元素为： " << v1.front() << endl;
	cout << "v1的最后一个元素为： " << v1.back() << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：

- 除了用迭代器获取 vector 容器中元素，[ ]和 at 也可以
- front 返回容器第一个元素
- back 返回容器最后一个元素

## 7. 互换容器

**功能描述：**

- 实现两个容器内元素进行互换

**函数原型：**

- `swap(vec);` // 将 vec 与本身的元素互换

**示例：**

```C++
#include <vector>

void printVector(vector<int>& v) {

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);

	//互换容器
	cout << "互换后" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}

void test02()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
	}

	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	v.resize(3);

	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	//收缩内存
	vector<int>(v).swap(v); //匿名对象

	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;
}

int main() {

	test01();

	test02();

	system("pause");

	return 0;
}

```

总结：swap 可以使两个容器互换，可以达到实用的收缩内存效果

## 8. 预留空间

**功能描述：**

- 减少 vector 在动态扩展容量时的扩展次数

**函数原型：**

- `reserve(int len);`//容器预留 len 个元素长度，预留位置不初始化，元素不可访问。

  ​

**示例：**

```C++
#include <vector>

void test01()
{
	vector<int> v;

	//预留空间
	v.reserve(100000);

	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}

	cout << "num:" << num << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：如果数据量较大，可以一开始利用 reserve 预留空间

## 9.引用传递和指针传递

c++中常用的vector容器作为参数时，有[三种传参方式](https://www.cnblogs.com/xiaoxi666/p/6843211.html)：

> function1(std::vector<std::vector<int> > vec)，值传递
> 
> function2(std::vector<std::vector<int> >& vec)，引用传递
> 
> function3(std::vector<std::vector<int> >* vec)，指针传递

**注意，三种方式分别有对应的const形式，不在此讨论。**

三种方式对应的调用形式分别为：

> function1(vec)，传入值
> function2(vec)，传入引用
> function3(&vec),传入地址


**三种方式的效果**分别为：

> 值传递会发生拷贝构造
> 
> 引用传递不会发生拷贝构造
> 
> 指针传递不会发生拷贝构造

- 引用传递

```c++

void func1(vector<int> &q){
 
...
 
}
int main(){
vector<int> q;
q.push_back(2);
q.push_back(3);
q.push_back(1);
func1(q);


```

- 指针传递

```c++
void func1(vector<int> *q){
 
...
 
}
int main(){
vector<int> q;
q.push_back(2);
q.push_back(3);
q.push_back(1);
func1(&q);
}

```

