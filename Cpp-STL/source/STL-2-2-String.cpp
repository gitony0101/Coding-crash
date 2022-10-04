#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

//字符串 比较 存取
//
// 插入删除  起始下标都是从0开始

void test01() {
  //字符串比较主要是比较两个字符串是否相等，大小意义不大
  string s1 = "Hello";
  string s2 = "aello";
  int compValue = s1.compare(s2);

  if (compValue == 0) {
    printf("s1 is the same with s2.\n");
  } else {
    printf("s1 is different from s2.\n");
  }
}

void test02() {
  //字符的存取 [] 或者 at
  string str = "Hello World.";
  printf("by [] :\n");
  for (int i = 0; i < str.size(); i++) {
    printf("%c", str[i]); // writes a single character.
    //  %c :The argument is first converted to unsigned char.
  }

  printf("\nby at() :\n");
  for (int i = 0; i < str.size(); i++) {
    printf("%c", str.at(i));
  }
  printf("\nModify the string:\n");
  str[0] = 'x';
  str.at(3) = 'x';
  printf("%s\n", str.c_str());
}
void test03() { //插入和删除
  string str = "hello";
  str.insert(1, "111");

  printf("%s\n", str.c_str());
  str.erase(1, 3); // 从1号位置开始3个字符
  printf("%s\n", str.c_str());
}

// void4 隐式转换
void test04_work1(string str) {}
void test04_work2(const char *str) {}

void test04() { // string 和 c-style 字符串转换
  const char *str = "Hello";
  // const char * 转为 string
  string s(str);
  // string 转为 const char *
  const char *str2 = s.c_str();
  // work1 : const char * 可以隐式转换为 string
  test04_work1(str2);
  // string 不可以隐式转换为 const char*
  // test04_work2(s);
}

void test05() {
  string s = "abcdefg";
  char &a = s[2];
  char &b = s[3];
  a = '1';
  b = '2';
  printf("%s\n", s.c_str());
  printf("%p\n", (int *)s.c_str()); // pointer
}
void test06() { // 从字符串中获得想要的子串
  string str = "abcdefg";
  string subStr = str.substr(1, 36);
  printf("%s\n", subStr.c_str());
  string email = "poweroverwhelming@blizzard.com";
  int pos = email.find("@");
  string userName = email.substr(0, pos);
  printf("Ths username : %s\n", userName.c_str());
  //**总结：**灵活的运用求子串功能，可以在实际开发中获取有效的信息
}
int main() {
  //   test01();
  //   test02();
  //   test03();
  // test04();
  test05();
  test06();
}
