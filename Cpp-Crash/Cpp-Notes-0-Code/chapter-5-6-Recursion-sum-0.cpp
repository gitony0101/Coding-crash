#include <iostream>
using namespace std;

// Recursion version of the sum

int recursive_sum(int m, int n) {
  if (m == n)
    return m;                         // base case to stop the recursion
  return m + recursive_sum(m + 1, n); // how it recurrs
}

int main() {
  int m = 2, n = 4;
  cout << "Sum: " << recursive_sum(m, n) << endl;
}
// This is the for-loop version
// int main() {
//   int m = 2, n = 4;

//   int sum = 0;
//   for (int i = m; i <= n; i++) {
//     sum += i;
//   }
//   cout << sum << endl;
// }
