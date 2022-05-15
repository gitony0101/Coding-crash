#include <iostream>
#include <string>
using namespace std;

void exClasses01() {
  int myFavoriteInt = 4;
  string ss = "ss";
  char grade = 'A';
  double gamma = 0.653;
  printf("The location in memory of grade is %p\n", &grade);
}

int main() { exClasses01(); }
