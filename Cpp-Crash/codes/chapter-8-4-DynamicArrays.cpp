#include <iostream>
using namespace std;

// new delete

int main() {
  int size;
  printf("Please enter the size of the Array:");
  cin >> size;
  // int myArray[size]
  int *myArray = new int[size];
  // new : allocate memory for us when we need it.
  // delete : deallocate memory for us when we do not need it.
  for (int i = 0; i < size; i++) {
    printf("Array %d\n", i);
    cin >> myArray[i];
  }
  printf("This is your array with %d elements by the dereferencing method "
         "'myArray[i]':\n",
         size);
  for (int i = 0; i < size; i++) {

    printf("%d\n", myArray[i]);
  }
  printf("This is your array with %d elements by the dereferencing method "
         "'*(myArray + i)':\n",
         size);
  for (int i = 0; i < size; i++) {

    printf("%d\n", *(myArray + i));
  }
  delete[] myArray;
  myArray = NULL;
}
