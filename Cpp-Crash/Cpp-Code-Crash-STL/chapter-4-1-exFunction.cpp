#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

/*
不要直接用 "function" 作为函数名字，真土

*/

void introducing(string name, int age, string city = "NJ") {
  printf("Hello, My name is %s,I'm %d years old, I'm from %s.\n", name.c_str(),
         age, city.c_str());
}

void printIntro() {
  string name_Input, city_Input;
  int age_input;
  cout << "Please enter your name: " << endl;
  cin >> name_Input;
  cout << "Please enter your age: " << endl;
  cin >> age_input;
  introducing(name_Input, age_input);
}
int main() { printIntro(); }
