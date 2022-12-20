// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

#define CAPACITY 50000 // Size of the Hash Table

unsigned long hash_function(char *str) {
  unsigned long i = 0;
  for (int j = 0; str[j]; j++)
    i += str[j];
  return i % CAPACITY;
}

int main() {
  string str01 = "GLE";

  printf("\n");
  return 0;
}
