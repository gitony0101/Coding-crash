# Pointers and arrays

```cpp
#include <iostream>
using namespace std;

int luckyNumbers[5] = {2, 3, 4, 5, 6};

int main() {
printf("%p\n", luckyNumbers); // cout << luckyNumbers << endl; memory addres
// of luckyNumbers
printf("'&luckynumbers[0]': %p\n",
&luckyNumbers[0]); // memory address of luckyNumbers[0]
printf("'&luckynumbers[1]': %p\n",
&luckyNumbers[1]); // memory address of luckyNumbers[1]
printf("'luckynumbers[2]': %d\n", luckyNumbers[2]); // deferencing
printf("'*(luckynumbers)': %d\n", *luckyNumbers); // deferencing
printf("'_(luckynumbers+2)': %d\n",
_(luckyNumbers +
2)); // equivalent to luckyNumbers[2], which is
// accessing the 3rd element of the array,deferencing.

int numslist[5];
for (int i = 0; i <= 4; i++) {
printf("Please enter a number(5 in total) :");
cin >> numslist[i];
}
for (int i = 0; i <= 4; i++) {
printf("The number array is: %d\n", _(numslist + i)); // _ get the value
// of the array
}
}

```

# Use pointers to return multiple values of a function

Use pointers to return min and max value of array.

```cpp

#include <iostream>
using namespace std;
// int getMin(int numbers[], int size) {
// int min = numbers[0];
// for (int i = 1; i < size; i++) {
// if (numbers[i] < min)
// min = numbers[i];
// }
// return min;
// }

// int getMax(int numbers[], int size) {
// int max = numbers[0];
// for (int i = 1; i < size; i++) {
// if (numbers[i] > max)
// max = numbers[i];
// }
// return max;
// }
//

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

// if I use _min, _ max:
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

```

There are 2 things we need to make clear:

- `void getMinandMax(int numbers[], int size, int *min, int *max)` where we need to use parameter *min, *max pointers.
- When to use the function `getMinandMax(numArr, 5, &min, &max)`, passing parameter **using reference**: pass an address of the variale to the function rahter than passing the variable itself, which can **sync with the changing of function**, this is where you need to know the relationship between address and variable.

# Dynamic Arrays

Arrys is a type of collection which stores elements is contiguous memory locations, which stored one after the other.

if I definite a fuction:

```cpp

int myArray[5];

```

It means I created a container of 5 locations which can store elements.

**Dynamic arrays** are arrays with **dynamic storage duration**. You create dynamic arrays with array new expressions. Array new expressions have the following form:

```cpp

new MyType[n_elements] { init-list }

```

## `new` and `delete` ?

- new : allocate memory for us when we need it.
- delete : deallocate memory for us when we do not need it.

````cpp

#include <iostream>
using namespace std;

int main() {
int size;
printf("Please enter the size of the Array:");
cin >> size;
// int myArray[size]
int \*myArray = new int[size];
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
"'\*(myArray + i)':\n",
size);
for (int i = 0; i < size; i++) {

    printf("%d\n", *(myArray + i));

}
delete[] myArray;
myArray = NULL;
}


# Multi-Dimensional Dynamic Arrays

<div align = "center">
<div style="width:600px">

![img](./img/Multi-Dimensional-Dynamic-Arrays.jpg)

table and its' arrays

</div>
</div>

## \*\* - Pointer to Pointer

```cpp

#include <cstdio>
#include <iostream>
using namespace std;


int main() {
  int rows, cols;
  printf("Please enter the number of rows");
  cin >> rows;
  printf("Please enter the number of columns");
  cin >> cols;
```

```cpp
  int **table =
      new int *[rows]; // porinter to pointers,the rows are arrays themselvs.
  for (int i = 0; i < rows; i++) {
    table[i] = new int[cols];
  }
  table[1][2] = 88; // row 00000BB the 3rd(loacation 2) element is 88
  //   cout << **table << endl;
  // delete the table:
  //   for (int i = 0; i < rows; i++) {
  //     delete[] table[i];
  //     table = NULL;
}

    ```
````
