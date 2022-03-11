#include <iostream>
using namespace std;

int main() { //most common datatypes we use in C++
  int yearOfBirth = 1995;
  char gender = 'm';
  bool isOlderThan18 = true;
  float averageGrade = 4.5;
  double balance = 452345234;

  
  cout << "Int min value is " << INT_MIN << endl;
  cout << "Int max value is " << INT_MAX << endl;
  cout << "Uint max value is " << UINT_MAX << endl;

  cout << "Size of char is " << sizeof(char) << "bytes\n";
  cout << "Size of unsinged int is " << sizeof(unsigned int) << " bytes\n";
  cout << "Size of int is " << sizeof(int) << " bytes\n";
  cout << "Size of float is " << sizeof(float) << " bytes\n";
  cout << "Size of double is " << sizeof(double) << " bytes\n";

}
