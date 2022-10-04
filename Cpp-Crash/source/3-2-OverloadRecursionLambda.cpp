#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

/*函数重载和递归，一般都不要用先
Lambda 推荐

函数重载
功能相似 函数名相同 参数不同
减少命名空间污染，提高代码可读性

函数递归 调用自身的函数称为递归函数。并且，这种技术称为递归
*/
//重载函数， 名称都相同，为了增加代码的可读性
void exSum(int a, int b) { printf("%d + %d = %d\n", a, b, a + b); }
void exSum(double a, double b) { printf("%lf + %lf = %lf\n", a, b, a + b); }
void exSum(float a, float b, float c) {
  printf("%f + %f + %f = %f\n", a, b, c, a + b + c);
}
// 与此同时，参数类型，数量不同。
// 函数递归 阶乘
int recursive_factorial(int m) { //此处直接用了int 你return的时候也只能是int
  if (m == 1)
    return m;
  else if (m == 0)
    return 1;
  return m *
         recursive_factorial(
             m -
             1); //这一步诠释了递归函数怎么recall自己的，函数recall了，但是里面的参数在变化。
}
// 函数递归 两数相加
int recursive_sum(int a, int b) {
  if (a == b)
    return a;
  return a + recursive_sum(a + 1, b);
}
//
int main() {
  // //函数重载
  // exSum(1, 2);
  // exSum(1.2, 2.1);
  // exSum(3.4, 3.3, 1.2);
  // 函数递归 recursive_factorial
  int m = 0;
  printf("%d 的阶乘是：%d\n", m, recursive_factorial(m));
  //函数递归recursive_sum
  int a = 3, b = 10;
  printf("%d 加到 %d的和是%d\n", a, b, recursive_sum(a, b));
}
