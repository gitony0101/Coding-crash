#include <iostream>
using namespace std;

void myFunction_1(), myFunction_2(), myFunction_3(), myFunction_4();

int main() {
  cout << "Hello World from main" << endl;
  myFunction_1();
  myFunction_2();
  myFunction_3();
  myFunction_4();
  myFunction_4();
  myFunction_4();
}

void myFunction_1() { cout << "Hello World from myFunction_1" << endl; }

void myFunction_2() { cout << "This is the 2nd Function" << endl; }

void myFunction_3() { cout << "This is the 3rd Function" << endl; }

void myFunction_4() {
  cout << "This is the 4th Function, 4 is my lucky number." << endl;
}
