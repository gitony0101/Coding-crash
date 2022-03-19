#include <cstdio>
#include <iostream>
using namespace std;

class construct_01 {
public:
  int a, b;
  // Default constructor
  construct_01() { // must have the same name with class
    a = 10;
    b = 20;
  } // NO RETURN
};

int main() {
  // Default constructor called automatically
  // when the object is created
  construct_01 c;
  printf("a :%d\n", c.a);
  printf("b : %d\n", c.b);
}
