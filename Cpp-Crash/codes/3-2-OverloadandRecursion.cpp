#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

/*函数重载
功能相似 函数名相同 参数不同
减少命名空间污染，提高代码可读性
*/
//重载函数， 名称都相同，为了增加代码的可读性
void exSum(int a, int b) { printf("%d + %d = %d\n", a, b, a + b); }
void exSum(double a, double b) { printf("%lf + %lf = %lf\n", a, b, a + b); }
void exSum(float a, float b, float c) {
  printf("%f + %f + %f = %f\n", a, b, c, a + b + c);
}
// 与此同时，参数类型，数量不同。

int main() {
  exSum(1, 2);
  exSum(1.2, 2.1);
  exSum(3.4, 3.3, 1.2);
}

/*

Sum of the numebrs between m to n.

```c++
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
```

Calculate the factorial

```
#include <iostream>
using namespace std;

// Calculate the factorial of the number by recursion

int recursive_factorial(int m) {
  if (m == 1)
    return m; // base case to stop the recursion
  return m * recursive_factorial(m - 1); // how it recurrs
}

int main() {
  int a = 5;
  cout << recursive_factorial(5) << endl;
}

```



Example 1: Factorial of a Number Using Recursion

// Factorial of n = 1*2*3*...*n

#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}
*/
