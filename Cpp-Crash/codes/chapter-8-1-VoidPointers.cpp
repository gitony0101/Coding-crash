#include <iostream>
using namespace std;

void print(void *ptr, char type) {
  switch (type) {
  case 'i':
    printf("The value is :%d\n", (*(int *)ptr));
    break;
  case 'c': // c for char
    printf("The letter is : %c\n", *(char *)ptr);
  }
}

// try
int main() {
  int number = 5;
  char letter = 'a';
  print(&number, 'i');
  print(&letter, 'c');
}
