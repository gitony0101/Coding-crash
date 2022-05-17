#include <iostream>
using namespace std;

// find the factorial of the number by recursion

int recursive_factorial(int m) {
  if (m == 1)
    return m;
  return m * recursive_factorial(m - 1);
}

int main() {
  int a = 5;
  cout << recursive_factorial(5) << endl;
}
