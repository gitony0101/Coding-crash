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
  string name_Input, city_Input;
  int age_input;
  cout << "Please enter your name: " << endl;
  cin >> name_Input;
  cout << "Please enter your age: " << endl;
  cin >> age_input;
  cout << "Please enter your city: " << endl;
  cin >> city_Input;
  introduceMe(name_Input, age_input, city_Input);
}
