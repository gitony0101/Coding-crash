#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

/*
写一个函数，函数内部讲string字符串中所有的小写字母都变为大写字母。 toupper
“不区分大小写“
*/

void test11() {
  string str = "abcdEFg";
  for (int i = 0; i < str.size(); i++) {
    str[i] = toupper(str[i]);
  }
  printf("%s\n", str.c_str());
}

// 反过来，大写字母转小写字母 tolower

void test12() {
  string str = "abcdEFg";
  for (int i = 0; i < str.size(); i++) {
    str[i] = tolower(str[i]);
  }
  printf("%s\n", str.c_str());
}

int main() {
  test11();
  test12();
}
