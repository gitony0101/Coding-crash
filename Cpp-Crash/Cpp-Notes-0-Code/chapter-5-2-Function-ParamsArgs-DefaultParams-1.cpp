#include <iostream>
using namespace std;

void introduceMe(string name, int age, string city = "NJ")
// not work
{
  // make void function with parameters and defalut parameter city
  cout << "My name is " << name << " , I am " << age << " years old." << endl;
  cout << " I'm from " << city << endl;
}

int main() {
  // call function with two string parameters
  string name, city;
  int age;
  cout << "Please enter your name: " << endl;
  cin >> name;
  cout << "Please enter your age: " << endl;
  cin >> age;
  cout << "Please enter your city: " << endl;
  cin >> city;
  introduceMe(name, age, city);
}
