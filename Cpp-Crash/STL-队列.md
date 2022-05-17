# 队列

## 1. queue

**概念：**Queue 是一种**先进先出**(First In First Out,FIFO)的数据结构，它有两个出口

![说明: 2015-11-15_214429](assets/clip_image002-1547606475892.jpg)

队列容器允许从一端新增元素，从另一端移除元素

队列中只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为

队列中进数据称为 --- **入队** `push`

队列中出数据称为 --- **出队** `pop`

生活中的队列：

![1547606785041](assets/1547606785041.png)

## 2. 常用接口

功能描述：栈容器常用的对外接口

构造函数：

- `queue<T> que;` //queue 采用模板类实现，queue 对象的默认构造形式
- `queue(const queue &que);` //拷贝构造函数

赋值操作：

- `queue& operator=(const queue &que);` //重载等号操作符

数据存取：

- `push(elem);` //往队尾添加元素
- `pop();` //从队头移除第一个元素
- `back();` //返回最后一个元素
- `front(); ` //返回第一个元素

大小操作：

- `empty();` //判断堆栈是否为空
- `size(); ` //返回栈的大小

**示例：**

```C++
#include <queue>
#include <string>
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test01() {

	//创建队列
	queue<Person> q;

	//准备数据
	Person p1("唐僧", 30);
	Person p2("孙悟空", 1000);
	Person p3("猪八戒", 900);
	Person p4("沙僧", 800);

	//向队列中添加元素  入队操作
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//队列不提供迭代器，更不支持随机访问
	while (!q.empty()) {
		//输出队头元素
		cout << "队头元素-- 姓名： " << q.front().m_Name
              << " 年龄： "<< q.front().m_Age << endl;

		cout << "队尾元素-- 姓名： " << q.back().m_Name
              << " 年龄： " << q.back().m_Age << endl;

		cout << endl;
		//弹出队头元素
		q.pop();
	}

	cout << "队列大小为：" << q.size() << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：

- 入队 --- push
- 出队 --- pop
- 返回队头元素 --- front
- 返回队尾元素 --- back
- 判断队是否为空 --- empty
- 返回队列大小 --- size

## 3. deque

**功能：**

- 双端数组，可以对头端进行插入删除操作

**deque 与 vector 区别：**

- vector 对于头部的插入删除效率低，数据量越大，效率越低
- deque 相对而言，对头部的插入删除速度回比 vector 快
- vector 访问元素时的速度会比 deque 快,这和两者内部实现有关

![说明: 2015-11-19_204101](assets/clip_image002-1547547642923.jpg)

deque 内部工作原理:

deque 内部有个**中控器**，维护每段缓冲区中的内容，缓冲区中存放真实数据

中控器维护的是每个缓冲区的地址，使得使用 deque 时像一片连续的内存空间

![clip_image002-1547547896341](assets/clip_image002-1547547896341.jpg)

- deque 容器的迭代器也是支持随机访问的

### 3.1. deque 构造函数

**功能描述：**

- deque 容器构造

**函数原型：**

- `deque<T>` deqT; //默认构造形式
- `deque(beg, end);` //构造函数将[beg, end)区间中的元素拷贝给本身。
- `deque(n, elem);` //构造函数将 n 个 elem 拷贝给本身。
- `deque(const deque &deq);` //拷贝构造函数

**示例：**

```C++
#include <deque>

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}
//deque构造
void test01() {

	deque<int> d1; //无参构造函数
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);
	deque<int> d2(d1.begin(),d1.end());
	printDeque(d2);

	deque<int>d3(10,100);
	printDeque(d3);

	deque<int>d4 = d3;
	printDeque(d4);
}

int main() {

	test01();

	system("pause");

	return 0;
}
```

**总结：**deque 容器和 vector 容器的构造方式几乎一致，灵活使用即可

### 3.2. deque 赋值操作

**功能描述：**

- 给 deque 容器进行赋值

**函数原型：**

- `deque& operator=(const deque &deq); ` //重载等号操作符

- `assign(beg, end);` //将[beg, end)区间中的数据拷贝赋值给本身。
- `assign(n, elem);` //将 n 个 elem 拷贝赋值给本身。

**示例：**

```C++
#include <deque>

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}
//赋值操作
void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int>d2;
	d2 = d1;
	printDeque(d2);

	deque<int>d3;
	d3.assign(d1.begin(), d1.end());
	printDeque(d3);

	deque<int>d4;
	d4.assign(10, 100);
	printDeque(d4);

}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：deque 赋值操作也与 vector 相同，需熟练掌握

### 3.3. deque 大小操作

**功能描述：**

- 对 deque 容器的大小进行操作

**函数原型：**

- `deque.empty();` //判断容器是否为空

- `deque.size();` //返回容器中元素的个数

- `deque.resize(num);` //重新指定容器的长度为 num,若容器变长，则以默认值填充新位置。

  ​ //如果容器变短，则末尾超出容器长度的元素被删除。

- `deque.resize(num, elem);` //重新指定容器的长度为 num,若容器变长，则以 elem 值填充新位置。

  ​ //如果容器变短，则末尾超出容器长度的元素被删除。

  ​

**示例：**

```C++
#include <deque>

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}

//大小操作
void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	//判断容器是否为空
	if (d1.empty()) {
		cout << "d1为空!" << endl;
	}
	else {
		cout << "d1不为空!" << endl;
		//统计大小
		cout << "d1的大小为：" << d1.size() << endl;
	}

	//重新指定大小
	d1.resize(15, 1);
	printDeque(d1);

	d1.resize(5);
	printDeque(d1);
}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：

- deque 没有容量的概念
- 判断是否为空 --- empty
- 返回元素个数 --- size
- 重新指定个数 --- resize

### 3.4. deque 插入和删除

**功能描述：**

- 向 deque 容器中插入和删除数据

**函数原型：**

两端插入操作：

- `push_back(elem);` //在容器尾部添加一个数据
- `push_front(elem);` //在容器头部插入一个数据
- `pop_back();` //删除容器最后一个数据
- `pop_front();` //删除容器第一个数据

指定位置操作：

- `insert(pos,elem);` //在 pos 位置插入一个 elem 元素的拷贝，返回新数据的位置。

- `insert(pos,n,elem);` //在 pos 位置插入 n 个 elem 数据，无返回值。

- `insert(pos,beg,end);` //在 pos 位置插入[beg,end)区间的数据，无返回值。

- `clear();` //清空容器的所有数据

- `erase(beg,end);` //删除[beg,end)区间的数据，返回下一个数据的位置。

- `erase(pos);` //删除 pos 位置的数据，返回下一个数据的位置。

  ​

  ​

**示例：**

```C++
#include <deque>

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}
//两端操作
void test01()
{
	deque<int> d;
	//尾插
	d.push_back(10);
	d.push_back(20);
	//头插
	d.push_front(100);
	d.push_front(200);

	printDeque(d);

	//尾删
	d.pop_back();
	//头删
	d.pop_front();
	printDeque(d);
}

//插入
void test02()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	d.insert(d.begin(), 1000);
	printDeque(d);

	d.insert(d.begin(), 2,10000);
	printDeque(d);

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d.insert(d.begin(), d2.begin(), d2.end());
	printDeque(d);

}

//删除
void test03()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	d.erase(d.begin());
	printDeque(d);

	d.erase(d.begin(), d.end());
	d.clear();
	printDeque(d);
}

int main() {

	//test01();

	//test02();

    test03();

	system("pause");

	return 0;
}

```

总结：

- 插入和删除提供的位置是迭代器！
- 尾插 --- push_back
- 尾删 --- pop_back
- 头插 --- push_front
- 头删 --- pop_front

### 3.5. deque 数据存取

**功能描述：**

- 对 deque 中的数据的存取操作

**函数原型：**

- `at(int idx); ` //返回索引 idx 所指的数据
- `operator[]; ` //返回索引 idx 所指的数据
- `front(); ` //返回容器中第一个数据元素
- `back();` //返回容器中最后一个数据元素

**示例：**

```C++
#include <deque>

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}

//数据存取
void test01()
{

	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}
	cout << endl;


	for (int i = 0; i < d.size(); i++) {
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "front:" << d.front() << endl;

	cout << "back:" << d.back() << endl;

}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：

- 除了用迭代器获取 deque 容器中元素，[ ]和 at 也可以
- front 返回容器第一个元素
- back 返回容器最后一个元素

### 3.6. deque 排序

**功能描述：**

- 利用算法实现对 deque 容器进行排序

**算法：**

- `sort(iterator beg, iterator end)` //对 beg 和 end 区间内元素进行排序

**示例：**

```C++
#include <deque>
#include <algorithm>

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}

void test01()
{

	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	printDeque(d);
	sort(d.begin(), d.end());
	printDeque(d);

}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：sort 算法非常实用，使用时包含头文件 algorithm 即可

## 4. 案例-评委打分

### 4.1. 案例描述

有 5 名选手：选手 ABCDE，10 个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。

### 4.2. 实现步骤

1. 创建五名选手，放到 vector 中
2. 遍历 vector 容器，取出来每一个选手，执行 for 循环，可以把 10 个评分打分存到 deque 容器中
3. sort 算法对 deque 容器中分数排序，去除最高和最低分
4. deque 容器遍历一遍，累加总分
5. 获取平均分

**示例代码：**

```C++
//选手类
class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name; //姓名
	int m_Score;  //平均分
};

void createPerson(vector<Person>&v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		//将创建的person对象 放入到容器中
		v.push_back(p);
	}
}

//打分
void setScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的分数 放入到deque容器中
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;  // 60 ~ 100
			d.push_back(score);
		}

		//cout << "选手： " << it->m_Name << " 打分： " << endl;
		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		//{
		//	cout << *dit << " ";
		//}
		//cout << endl;

		//排序
		sort(d.begin(), d.end());

		//去除最高和最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit; //累加每个评委的分数
		}

		int avg = sum / d.size();

		//将平均分 赋值给选手身上
		it->m_Score = avg;
	}

}

void showScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名： " << it->m_Name << " 平均分： " << it->m_Score << endl;
	}
}

int main() {

	//随机数种子
	srand((unsigned int)time(NULL));

	//1、创建5名选手
	vector<Person>v;  //存放选手容器
	createPerson(v);

	//测试
	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "姓名： " << (*it).m_Name << " 分数： " << (*it).m_Score << endl;
	//}

	//2、给5名选手打分
	setScore(v);

	//3、显示最后得分
	showScore(v);

	system("pause");

	return 0;
}
```

**总结：** 选取不同的容器操作数据，可以提升代码的效率
