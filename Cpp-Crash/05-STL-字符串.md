# string 容器

## 1. 基本概念

**本质：**

- string 是 C++风格的字符串，而 string 本质上是一个类

**string 和 char \* 区别：**

- char \* 是一个指针
- string 是一个类，类内部封装了 char\*，管理这个字符串，是一个 char\*型的容器。

**特点：**

string 类内部封装了很多成员方法

例如：查找 find，拷贝 copy，删除 delete 替换 replace，插入 insert

string 管理 char\*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责

## 2. 构造函数

构造函数原型：

- `string();` //创建一个空的字符串 例如: string str;
  `string(const char* s);` //使用字符串 s 初始化
- `string(const string& str);` //使用一个 string 对象初始化另一个 string 对象
- `string(int n, char c);` //使用 n 个字符 c 初始化

**示例：**

```C++
#include <string>
//string构造
void test01()
{
	string s1; //创建空字符串，调用无参构造函数
	cout << "str1 = " << s1 << endl;

	const char* str = "hello world";
	string s2(str); //把c_string转换成了string

	cout << "str2 = " << s2 << endl;

	string s3(s2); //调用拷贝构造函数
	cout << "str3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "str3 = " << s3 << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：string 的多种构造方式没有可比性，灵活使用即可

## 3. 赋值操作

功能描述：

- 给 string 字符串进行赋值

赋值的函数原型：

- `string& operator=(const char* s);` //char\*类型字符串 赋值给当前的字符串
- `string& operator=(const string &s);` //把字符串 s 赋给当前的字符串
- `string& operator=(char c);` //字符赋值给当前的字符串
- `string& assign(const char *s);` //把字符串 s 赋给当前的字符串
- `string& assign(const char *s, int n);` //把字符串 s 的前 n 个字符赋给当前的字符串
- `string& assign(const string &s);` //把字符串 s 赋给当前字符串
- `string& assign(int n, char c);` //用 n 个字符 c 赋给当前字符串

**示例：**

```C++
//赋值
void test01()
{
	string str1;
	str1 = "hello world";
	cout << "str1 = " << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;

	string str4;
	str4.assign("hello c++");
	cout << "str4 = " << str4 << endl;

	string str5;
	str5.assign("hello c++",5);
	cout << "str5 = " << str5 << endl;


	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;

	string str7;
	str7.assign(5, 'x');
	cout << "str7 = " << str7 << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：

​ string 的赋值方式很多，`operator=` 这种方式是比较实用的

## 4. 字符串拼接

**功能描述：**

- 实现在字符串末尾拼接字符串

**函数原型：**

- `string& operator+=(const char* str);` //重载+=操作符
- `string& operator+=(const char c);` //重载+=操作符
- `string& operator+=(const string& str);` //重载+=操作符
- `string& append(const char *s); ` //把字符串 s 连接到当前字符串结尾
- `string& append(const char *s, int n);` //把字符串 s 的前 n 个字符连接到当前字符串结尾
- `string& append(const string &s);` //同 operator+=(const string& str)
- `string& append(const string &s, int pos, int n);`//字符串 s 中从 pos 开始的 n 个字符连接到字符串结尾

**示例：**

```C++
//字符串拼接
void test01()
{
	string str1 = "我";

	str1 += "爱玩游戏";

	cout << "str1 = " << str1 << endl;

	str1 += ':';

	cout << "str1 = " << str1 << endl;

	string str2 = "LOL DNF";

	str1 += str2;

	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	str3.append("game abcde", 4);
	//str3.append(str2);
	str3.append(str2, 4, 3); // 从下标4位置开始 ，截取3个字符，拼接到字符串末尾
	cout << "str3 = " << str3 << endl;
}
int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：字符串拼接的重载版本很多，初学阶段记住几种即可

## 5. 查找和替换

**功能描述：**

- 查找：查找指定字符串是否存在
- 替换：在指定的位置替换字符串

**函数原型：**

- `int find(const string& str, int pos = 0) const;` //查找 str 第一次出现位置,从 pos 开始查找
- `int find(const char* s, int pos = 0) const; ` //查找 s 第一次出现位置,从 pos 开始查找
- `int find(const char* s, int pos, int n) const; ` //从 pos 位置查找 s 的前 n 个字符第一次位置
- `int find(const char c, int pos = 0) const; ` //查找字符 c 第一次出现位置
- `int rfind(const string& str, int pos = npos) const;` //查找 str 最后一次位置,从 pos 开始查找
- `int rfind(const char* s, int pos = npos) const;` //查找 s 最后一次出现位置,从 pos 开始查找
- `int rfind(const char* s, int pos, int n) const;` //从 pos 查找 s 的前 n 个字符最后一次位置
- `int rfind(const char c, int pos = 0) const; ` //查找字符 c 最后一次出现位置
- `string& replace(int pos, int n, const string& str); ` //替换从 pos 开始 n 个字符为字符串 str
- `string& replace(int pos, int n,const char* s); ` //替换从 pos 开始的 n 个字符为字符串 s

**示例：**

```C++
//查找和替换
void test01()
{
	//查找
	string str1 = "abcdefgde";

	int pos = str1.find("de");

	if (pos == -1)
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "pos = " << pos << endl;
	}


	pos = str1.rfind("de");

	cout << "pos = " << pos << endl;

}

void test02()
{
	//替换
	string str1 = "abcdefgde";
	str1.replace(1, 3, "1111");

	cout << "str1 = " << str1 << endl;
}

int main() {

	//test01();
	//test02();

	system("pause");

	return 0;
}
```

总结：

- find 查找是从左往后，rfind 从右往左
- find 找到字符串后返回查找的第一个字符位置，找不到返回-1
- replace 在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串

## 6. 字符串比较

**功能描述：**

- 字符串之间的比较

**比较方式：**

- 字符串比较是按字符的 ASCII 码进行对比

= 返回 0

\> 返回 1

< 返回 -1

**函数原型：**

- `int compare(const string &s) const; ` //与字符串 s 比较
- `int compare(const char *s) const;` //与字符串 s 比较

**示例：**

```C++
//字符串比较
void test01()
{

	string s1 = "hello";
	string s2 = "aello";

	int ret = s1.compare(s2);

	if (ret == 0) {
		cout << "s1 等于 s2" << endl;
	}
	else if (ret > 0)
	{
		cout << "s1 大于 s2" << endl;
	}
	else
	{
		cout << "s1 小于 s2" << endl;
	}

}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：字符串对比主要是用于比较两个字符串是否相等，判断谁大谁小的意义并不是很大

## 7. 字符存取

string 中单个字符存取方式有两种

- `char& operator[](int n); ` //通过[]方式取字符
- `char& at(int n); ` //通过 at 方法获取字符

**示例：**

```C++
void test01()
{
	string str = "hello world";

	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;


	//字符修改
	str[0] = 'x';
	str.at(1) = 'x';
	cout << str << endl;

}

int main() {

	test01();

	system("pause");

	return 0;
}
```

总结：string 字符串中单个字符存取有两种方式，利用 [ ] 或 at

## 8. 插入和删除

**功能描述：**

- 对 string 字符串进行插入和删除字符操作

**函数原型：**

- `string& insert(int pos, const char* s); ` //插入字符串
- `string& insert(int pos, const string& str); ` //插入字符串
- `string& insert(int pos, int n, char c);` //在指定位置插入 n 个字符 c
- `string& erase(int pos, int n = npos);` //删除从 Pos 开始的 n 个字符

**示例：**

```C++
//字符串插入和删除
void test01()
{
	string str = "hello";
	str.insert(1, "111");
	cout << str << endl;

	str.erase(1, 3);  //从1号位置开始3个字符
	cout << str << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}
```

**总结：**插入和删除的起始下标都是从 0 开始

## 9. 子串

**功能描述：**

- 从字符串中获取想要的子串

**函数原型：**

- `string substr(int pos = 0, int n = npos) const;` //返回由 pos 开始的 n 个字符组成的字符串

**示例：**

```C++
//子串
void test01()
{

	string str = "abcdefg";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;

	string email = "hello@sina.com";
	int pos = email.find("@");
	string username = email.substr(0, pos);
	cout << "username: " << username << endl;

}

int main() {

	test01();

	system("pause");

	return 0;
}
```

**总结：**灵活的运用求子串功能，可以在实际开发中获取有效的信息
