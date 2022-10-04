#include "Cube.h"
#include <iostream>

int main() {
  cs225::Cube c;
  std::cout << "Address storing `c`:" << &c << std::endl;

  cs225::Cube *ptr = &c;
  std::cout << "Addr. storing ptr: " << &ptr << std::endl;
  std::cout << "Contents of ptr: " << ptr << std::endl;

  return 0;
}
