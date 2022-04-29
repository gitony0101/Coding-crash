#include <climits>
#include <cstdio>
#include <iostream> // header file-"Library"
                    // input output stream
using namespace std;

void exHelloworldPrintf() {
  // Always hello world
  string msg = "Hello World!";
  printf("%s\n", msg.c_str()); // yeah c_str()
  printf("Welcome to the C++ world!\n");
}

void exIntA() { printf("(int) 'a' :%d\nint('a'): %d\n", (int)'a', int('a')); }

void variableDataTypesAndRanges() {
  // Datatype Range:
  printf("Int min value is %d\nInt max value is %d\nUINT max value is %d\n",
         INT_MIN, INT_MAX, UINT_MAX);
  // Sizeof() data datatype
  printf("Size of char is %zd\nSize of unsigned int is %zd\n", sizeof(char),
         sizeof(unsigned int));
  //   int yearOfBirth = 1995;
  //   char gender = 'm';
  //   bool isOlderThan18 = true;
  //   float averageGrade = 4.5;
  //   double balance = 452345234;
}

int main() {
  exHelloworldPrintf();
  exIntA();
  variableDataTypesAndRanges();
}

// void

//     int
//     main() {
//   float annualSalary;
//   cout << "Please enter your annual salary:\n";
//   cin >> annualSalary;
//   float monthlySallary = annualSalary / 12;
//   cout << "Annual salary: " << annualSalary << endl;
//   cout << "Your monthly salary is : " << monthlySallary << endl;

//   char character = 'a';
//   cout << "The character is: " << character << endl;
// }
