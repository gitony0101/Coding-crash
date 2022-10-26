#include "4-1-Person.h" //文件名照搬

int main(void) {
  Person p("AAA", 20);
  p.Show();
}

// clang++ 4-1-personTest-hfile.cpp 4-1-headerfile-person.cpp -o main
