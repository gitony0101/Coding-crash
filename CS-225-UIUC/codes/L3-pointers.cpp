#include "L2-Cube.h"
#include <cstdio>
#include <iostream>
using namespace std;
using namespace cs225;

int main() {
  Cube c;
  printf("存储c的地址为:%p\n", &c);
  Cube *ptr = &c;
  printf("存储 ptr 的地址为:%p\n", &ptr);
  printf("ptr的内容是 :%p\n", ptr);
  //   printf("(*ptr).getVolume(): %f\n", (*ptr).getVolume());
  return 0;
}

/* 注意这里的报错
Undefined symbols for architecture x86_64:
  "cs225::Cube::getVolume()", referenced from:
      _main in L3-pointers-9d0b60.o
  "cs225::Cube::Cube()", referenced from:
      _main in L3-pointers-9d0b60.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
*/
