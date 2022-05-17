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
  // Let's move on:
  float Var_1 = 5;
  float *ptr_1 = &Var_1;
  printf("The value of Var_1 is:%f\n,The address of Var_1 is%p\n", *ptr_1,
         ptr_1);

  double Var_2 = 4;
  double *ptr_2 = &Var_2;
  printf("The Value of Var_2 is %f\n,The address of Var_2 is %p\n", *ptr_2,
         ptr_2);
}
