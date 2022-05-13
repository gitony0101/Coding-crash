#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

/*
不要直接用 "function" 作为函数名字，真土
自我介绍，参数传递
检验质数
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

void printIsPrimeNum() {
  int number;
  printf("Please eneter a number:\n");
  cin >> number;
  if (isPrimeNumber(number)) {
    printf("The number %d is a prime number.\n", number);

  } else {
    printf("The number %d is not a prime number.\n", number);
  }
}

int main() {
  //   introducing("Tony", 8);
  //   printIntro();
  printIsPrimeNum();
}

// prime：
/*
  int number;
  cout << " Please enter a number : ";
  cin >> number;

  // key loop here:
  // bool isPrimeFlag = true; // Presumption of prime number(true)

  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      cout << "The number is NOT a prime number" << endl;
      break;

    } else {
      cout << "The number is a prime number" << endl;
      break;
    }*/
