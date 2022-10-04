#include <climits>
#include <cstdio>
#include <iostream> // header file-"Library"
                    // input output stream
using namespace std;

/*
变量 类型 打印
全局变量一般不要用
*/

//全局变量
int RandNum = 2;
const double PI = 3.141592653;

void exHelloworldPrintf() {
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
  // Sizeof() 函数
  printf("Size of char is %zd\nSize of unsigned int is %zd\nThe size of int is "
         "%zd\nThe size of float is %zd\nThe size of double is %zd\n",
         sizeof(char), sizeof(unsigned int), sizeof(int), sizeof(float),
         sizeof(double));
  // sizeof() 显示指针和引用的空间大小：
  printf("Size of Bool* is %ld\nSize of Float* is %ld\nSize of Double* is "
         "%ld\nSize of Long is %ld\n",
         sizeof(bool *), sizeof(float *), sizeof(double *), sizeof(long *));
  // auto自动推断
  auto value01 = 11;
  auto value02 = 2;
  auto value03 = 1.4f;  // float
  auto value04 = 123ul; // unsienged long
  // auto value05 = 1.4l;
  printf("Size of value01 ld\nSize of value02 %ld\nSize of value03 %ld\nSize "
         "of value04 %ld\n",
         sizeof(value01), sizeof(value02), sizeof(value03), sizeof(value04));
}

void exDataTypeOverFlow() { // It actually works like the clock when it is over
                            // INT_MAX, then it goes to the INT_MIN.

  int inxMax = INT_MAX;
  printf("The value of intMax is %d\nThe value of intMax + 1 is %d\n", inxMax,
         inxMax + 1);
}

void exASCIITrans() {
  char c1, c2, c3, c4, c5;
  printf("Enter 5 letters:\n");
  cin >> c1 >> c2 >> c3 >> c4 >> c5;
  printf("ASCII Message:\n %d %d %d %d %d\n", int(c1), int(c2), int(c3),
         int(c4), int(c5));
}

int main() {
  // exHelloworldPrintf();
  // exIntChar();
  variableDataTypesAndRanges();
  // exDataTypeOverFlow();
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
