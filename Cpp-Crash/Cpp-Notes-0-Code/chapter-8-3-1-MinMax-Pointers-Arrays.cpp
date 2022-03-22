#include <iostream>
using namespace std;
int getMin(int numbers[], int size) {
  int min = numbers[0];
  for (int i = 1; i < size; i++) {
    if (numbers[i] < min)
      min = numbers[i];
  }
  return min;
}

int getMax(int numbers[], int size) {
  int max = numbers[0];
  for (int i = 1; i < size; i++) {
    if (numbers[i] > max)
      max = numbers[i];
  }
  return max;
}

int main() {

  int numArr[5] = {1, 3, -4, 5, 7};
  printf("The min number is: %d\n", getMin(numArr, 5));
  printf("The max numbers is: %d\n", getMax(numArr, 5));
}
