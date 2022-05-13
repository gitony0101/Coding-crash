#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

/*
不要直接用 "function" 作为函数名字，真土
自我介绍，参数传递
*/
// 自我介绍，两个函数
void introducing(string name, int age, string city = "NJ") {
  printf("Hello, My name is %s,I'm %d years old, I'm from %s.\n", name.c_str(),
         age, city.c_str());
}

void printIntro() {
  string name_Input, city_Input;
  int age_input;
  printf("Please enter your name:\n");
  cin >> name_Input;
  printf("Please enter your age: \n");
  cin >> age_input;
  introducing(name_Input, age_input);
}
// 检验质数
bool isPrimeNumber(int number) {
  bool isPrimeFlag = true;
  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      isPrimeFlag = false;
      break;
    }
  }
  return isPrimeFlag;
}

int main() {
  introducing("Tony", 8);

  printIntro();
}
