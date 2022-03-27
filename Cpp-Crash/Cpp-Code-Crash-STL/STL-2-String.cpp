#include <cstdio>
#include <iostream>
#include <string> //头文件
using namespace std;
/* 字符串操作
构造 赋值 拼接
查找和替换
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
  // operator=
  string str1;
  str1 = "Hello World";
  printf("str1 = %s\n", str1.c_str());

  string str2;
  str2 = str1;
  printf("str2 = %s\n", str2.c_str());

  string str3;
  str3 = 'a';
  printf("str3 = %s\n", str3.c_str());
  string str4;
  // assign
  str4.assign("Hello C++");
  printf("str4 = %s\n", str4.c_str());
  string str5;
  str5.assign("Hello C++", 4); // str5 = Hell
  printf("str5 = %s\n", str5.c_str());
  string str6;
  str6.assign(str5);
  printf("str6 = %s\n", str6.c_str());
  string str7;
  str7.assign(3, 'x');
  printf("str7 = %s\n", str7.c_str());
}

void test03() {
  // operator +=
  string str1 = "I ";
  printf("str1 = %s\n", str1.c_str());
  str1 += "Love Coding ";
  printf("str1 = %s\n", str1.c_str());
  str1 += ':';
  printf("str1 = %s\n", str1.c_str());
  string str2;
  str2 = " C++ Python";
  str1 += str2;
  printf("str1 = %s\n", str1.c_str());
  // append
  string str3 = "I ";
  str3.append("Love ");
  str3.append("Code ABCDE", 4);
  printf("str3 = %s\n", str3.c_str());
  //   str3.append(str2);
  //   printf("str3 = %s\n", str3.c_str());
  str3.append(str2, 4, 3); // 从下标4位置开始 ，截取3个字符，拼接到字符串末尾
  // C++ Python
  // 1234
  //    123
  printf("str3 = %s\n", str3.c_str());
}

// 查找替换
// *查找：查找指定字符串是否存在
// *替换：在指定的位置替换字符串
void test04() { //查找
  string str1 = "abcdefgde";
  int pos = str1.find("de");
  if (pos == -1) {
    printf("没找到");
  } else {
    printf("pos = %d\n", pos);
  }
}

void test05() { // 替换
  string str1 = "abcdefgde";
  str1.replace(1, 3, "11111");
  printf("str1 = %s\n", str1.c_str());
}
// 执行
int main() {
  //   test01();
  //   test02();
  //   test03();
  //   test04();
  test05();
  return 0;
}
