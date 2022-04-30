#include <climits>
#include <cstdio>
#include <iostream> // header file-"Library"
                    // input output stream
using namespace std;

/*
print, datatype range ASCII and Hello World!
*/
void exHelloworldPrintf() {
  // Always hello world
  string msg = "Hello World!";
  printf("%s\n", msg.c_str()); // yeah c_str()
  printf("Welcome to the C++ world!\n");
}

void exIntChar() {
  printf("(int)'a':%d\nint('a'):%d\nint('A'):%d\nchar(65):%d\n", (int)'a',
         int('a'), int('A'), char(65));
}

void variableDataTypesAndRanges() {
  printf("Int min value is %d\nInt max value is %d\nUINT max value is %d\n",
         INT_MIN, INT_MAX, UINT_MAX);
  cout << "UINT max value is " << UINT_MAX << endl; // issue here.
  // Sizeof() data datatype
  printf("Size of char is %zd\nSize of unsigned int is %zd\nThe size of int is "
         "%zd\nThe size of float is %zd\nThe size of double is %zd\n",
         sizeof(char), sizeof(unsigned int), sizeof(int), sizeof(float),
         sizeof(double));
}

void exASCIITrans() {
  char c1, c2, c3, c4, c5;
  printf("Enter 5 letters:\n");
  cin >> c1 >> c2 >> c3 >> c4 >> c5;
  printf("ASCII Message:\n %d %d %d %d %d\n", int(c1), int(c2), int(c3),
         int(c4), int(c5));
}

int main() {
  exHelloworldPrintf();
  exIntChar();
  variableDataTypesAndRanges();
  // Codes below we need to input values:
  // exASCIITrans();
}

// int main()  {
// int yearOfBirth = 1995;
// char gender = 'm';
// bool isOlderThan18 = true;
// float averageGrade = 4.5;
// double balance = 452345234;
// Datatype Range:
//   //   float annualSalary;
//   //   cout << "Please enter your annual salary:\n";
//   //   cin >> annualSalary;
//   //   float monthlySallary = annualSalary / 12;
//   //   cout << "Annual salary: " << annualSalary << endl;
//   //   cout << "Your monthly salary is : " << monthlySallary << endl;

//   //   char character = 'a';
//   //   cout << "The character is: " << character << endl;
//   // }
