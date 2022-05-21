#include "L2-Cube.h"
#include <iostream>
using namespace std;

int main() {
  Cube c;
  c.setLength(3.14);
  printf("Volume: %f\n", c.getVolume());
  return 0;
}
