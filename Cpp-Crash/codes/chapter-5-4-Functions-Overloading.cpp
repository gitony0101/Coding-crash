#include <iostream>
using namespace std;

// Function Overloading

int main() {
  int sum(int a, int b);
  double sum(double a, double b);
  float sum(float a, float b, float c);
  cout << "Sum of two integers: " << sum(10, 20) << endl;
  cout << "Sum of two doubles: " << sum(10.5, 20.5) << endl;
  cout << "Sum of three floats: " << sum(10.5, 20.5, 30.5) << endl;
}
