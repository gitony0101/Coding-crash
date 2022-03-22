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
  printf("'*(luckynumbers)': %d\n", *luckyNumbers);   // deferencing
  printf("'*(luckynumbers+2)': %d\n",
         *(luckyNumbers +
           2)); // equivalent to luckyNumbers[2], which is
                // accessing the 3rd element of the array,deferencing.

  int numslist[5];
  for (int i = 0; i <= 4; i++) {
    printf("Please enter a number(5 in total) :");
    cin >> numslist[i];
  }
  for (int i = 0; i <= 4; i++) {
    printf("The number array is: %d\n", *(numslist + i)); // * get the value
                                                          // of the array
  }
}
