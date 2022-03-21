#include <cstdio>
#include <iostream>
using namespace std;
int main() {
  // A normal integer variable
  int Var = 10;

  // A pointer variable that holds address of var.
  int *ptr = &Var;

  // This line prints value at address stored in ptr.
  // Value stored is value of variable "var"
  printf("Value of Var = %d\n", *ptr);

  // The output of this line may be different in different
  // runs even on same machine.
  printf("Adress of Var : = %p\n", ptr);
  // p	writes an implementation defined character sequence defining a pointer.

  // We can also use ptr as lvalue (Left hand
  // side of assignment)
  *ptr = 20; // Value of Var is now 20
  printf("After do *ptr = 20,Value of Var = %d,Adress of Var : = %p\n", *ptr,
         ptr);
}
