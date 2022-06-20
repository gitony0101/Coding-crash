/**
 * Simple C++ program using variables.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
#include <iostream>

int main() {
  Cube c;
  c.setLength(4);

  std::cout << "Volume: " << c.getVolume() << std::endl;

  return 0;
}
