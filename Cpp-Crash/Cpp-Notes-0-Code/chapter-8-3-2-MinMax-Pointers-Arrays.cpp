#include <iostream>
using namespace std;
// int getMin(int numbers[], int size) {
//   int min = numbers[0];
//   for (int i = 1; i < size; i++) {
//     if (numbers[i] < min)
//       min = numbers[i];
//   }
//   return min;
// }

// int getMax(int numbers[], int size) {
//   int max = numbers[0];
//   for (int i = 1; i < size; i++) {
//     if (numbers[i] > max)
//       max = numbers[i];
//   }
//   return max;
// }
//
// use pointers to return min and max value of array.
void getMinandMax(int numbers[], int size, int *min, int *max) {
  for (int i = 1; i <= size; i++) {
    if (numbers[i] > *max)
      *max = numbers[i];
    if (numbers[i] < *min)
      *min = numbers[i];
  }
}

int main() {

  int numArr[5] = {1, 3, -4, 5, 7};
  int max = numArr[0];
  int min = numArr[0];

  // if I use *min, * max:
  // // Indirection requires pointer operand ('int' invalid)
  // if I use min ,max directly:
  // No matching function for call to 'getMinandMax' (fix available)
  getMinandMax(numArr, 5, &min, &max); // reference

  printf("The min number is: %d\n", min);
  printf("The max numbers is: %d\n",
         max); // passing parameter using reference: pass an address of the
               // variale to the function rahter than passing the variable
               // itself, which can sync with the changing of function.
}
