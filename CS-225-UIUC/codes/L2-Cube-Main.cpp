#include "L2-Cube.h"
#include <iostream>
using namespace cs225;

int main() {
  Cube s1;
  Cube &r1 = s1;
  s1.setLength(3.14);
  printf("Volume: %f\n", s1.getVolume());
  return 0;
}
