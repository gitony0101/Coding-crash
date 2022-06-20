#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//引入定义好的头文件
#include "DynamicArray.h"
using namespace std;
#include <cstring>

void myMemCpy(void *dest, void *src, size_t n) {
  // Typecast src and dest addresses to (char *)
  char *csrc = (char *)src;
  char *cdest = (char *)dest;

  // Copy contents of src[] to dest[]
  for (int i = 0; i < n; i++)
    cdest[i] = csrc[i];
}

int main() {
  char csrc[] = "GeeksforGeeks";
  char cdest[100];
  myMemCpy(cdest, csrc, strlen(csrc) + 1);
  printf("Copied string is %s", cdest);

  int isrc[] = {10, 20, 30, 40, 50};
  int n = sizeof(isrc) / sizeof(isrc[0]);
  int idest[n], i;
  myMemCpy(idest, isrc, sizeof(isrc));
  printf("\nCopied array is ");
  for (i = 0; i < n; i++)
    printf("%d ", idest[i]);
  return 0;
}
