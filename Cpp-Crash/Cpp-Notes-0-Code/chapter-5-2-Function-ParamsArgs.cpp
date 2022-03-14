#include <iostream>
using namespace std;

void introduceMe(string name, string city, int age) {
  // make void function with parameters
  cout << "My name is " << name << " and I am " << age << " years old." << endl;
}

int main() {
  // call function with two string parameters
  introduceMe("John", "New York", 30);
  introduceMe("Mary", "Paris", 25);
  introduceMe("Bob", "London", 35);
  introduceMe("Jane", "Berlin", 20);
}
