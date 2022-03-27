#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
/* 构造 赋值
字符存取

    */

void test01() { // string 构造函数
  string s1;    // 创建空字符串，调用无参构造函数
  printf("str1 = %s\n", s1.c_str());
  const char *str = "Hello word";
  string s2(str); // 把c_string 转换成了string
  printf("str2 = %s\n", s2.c_str());
  string s3(s2); // 调用拷贝构造函数；
  printf("str3 = %s\n", s3.c_str());
  string s4(10, 'a');
  //   cout << "s4 = " << s4 << endl;
  printf("str4 = %s\n", s4.c_str());
}

void test02() { // string 赋值操作
  string str1;
  str1 = "Hello World";
  printf("str1 = %s\n", str1.c_str());

  string str2;
  str2 = str1;
  printf("str2 = %s\n", str2.c_str());

  string str3;
  str3 = 'a';
  printf("str3 = %s\n", str3.c_str());
}
int main() {
  //   test01();
  test02();
  return 0;
}
