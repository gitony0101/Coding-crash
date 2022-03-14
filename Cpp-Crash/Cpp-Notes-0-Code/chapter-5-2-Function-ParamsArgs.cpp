#include <iostream>
using namespace std;

void introduceMe(string name, int age) {
  // make void function with two string parameters
  cout << "My name is " << name << " and I am " << age << " years old." << endl;
}

int main() {
  // call function with two string parameters
  introduceMe("John", 20);
  introduceMe("Mary", 30);
  introduceMe("Bob", 40);
}
