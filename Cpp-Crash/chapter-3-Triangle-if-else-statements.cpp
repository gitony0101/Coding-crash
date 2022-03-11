#include <iostream>
using namespace std;

int main() {
  // User enters side lengths of a triangle (a,b,c)
  // Program should write out whether that triangle is equilateral,isosceles or
  // scalene
  float a, b, c;
  cout << "Enter the length of the triangle's each side a,b,c:";
  cin >> a >> b >> c;
  if (a == b && b == c)
    cout << "The triangle is equilateral.\n";
  else {
    if (a != b && b != c && a != c) {
      cout << "The triangle is scalene.\n";
    } else {
      cout << "The triangle is isosceles.\n";
    }
  }
}
