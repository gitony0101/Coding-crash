#include <cstdio>
#include <iostream>
using namespace std;

/*divisible by 3 and 5*/

void exDivisible3and5() {
  // Write out all the numbers between 100-500 that are divisible by 3 and 5
  int counter = 100;
  while (counter <= 500) {
    if (counter % 3 == 0 && counter % 5 == 0)
      printf("%d is divisible by 3 and 5\n", counter);
    counter++;
    // ++counter; // same as above
  }
}

int main() { exDivisible3and5(); }
