#include <cstdio>
#include <iostream>
using namespace std;

/*全局区
全局变量 静态变量 常量
*/

//全局变量
int g_a = 10;
int g_b = 10;
//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main() {
  //进入main函数以后，就是局部变量、常量以及静态变量
  //局部变量
  int a = 10;
  int b = 10;
  //打印 全局和局部变量地址：
  printf("全局变量g_a 原始地址为 %p，十进制地址%d\n", &g_a,
         (int)(size_t)&g_a); // 真难找，注意这里的表示方法
}
