#include "L2-Cube.h"
#include <iostream>
using namespace std;
using namespace cs225;

int main() {
  Cube c;
  printf("存储c的地址为:%p\n", &c);
  Cube *ptr = &c;
  printf("存储 ptr 的地址为:%p\n", &ptr);
  printf("ptr的内容是 :%p\n", ptr);
  return 0;
}
