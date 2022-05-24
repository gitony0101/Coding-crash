#include <cstdio>
#include <iostream>

using namespace std;

/*全局区
全局变量 静态变量 常量
*/

//全局变量
int g_a = 10;
int g_b = 10;
int g_c;
// const修饰的全局变量，即全局常量
const int c_g_a = 10;
const int c_g_b = 10;
// static 静态全局变量
static int s_g_a = 10;
static int s_g_b = 10;
static int s_g_c;

int main() {
  //进入main函数以后，就是局部变量、常量以及静态变量
  //局部变量
  int a = 10;
  int b = 10;
  //打印 全局和局部变量地址：
  printf("注意：所有数值变量取值都是10\n全局变量地址打印：\n");
  /// 真难找，注意这里的表示方法:(int)(size_t)&g_a)
  printf("全局变量g_a 原始地址为 %p，十进制地址%d\n", &g_a, (int)(size_t)&g_a);
  printf("全局变量g_b 原始地址为 %p，十进制地址%d\n", &g_b, (int)(size_t)&g_b);
  printf("未定义的全局变量g_c 原始地址为 %p，十进制地址%d\n", &g_c,
         (int)(size_t)&g_c);
  printf("局部变量地址打印：\n");
  printf("局部变量a 原始地址为 %p，十进制地址%d\n", &a, (int)(size_t)&a);
  printf("局部变量b 原始地址为 %p，十进制地址%d\n", &b, (int)(size_t)&b);
  //打印静态变量
  static int s_a = 10;
  static int s_b = 10;
  printf("静态变量地址打印：\n");
  printf("静态变量s_a 原始地址为 %p，十进制地址%d\n", &s_a, (int)(size_t)&s_a);
  printf("静态变量s_b 原始地址为 %p，十进制地址%d\n", &s_b, (int)(size_t)&s_b);
  //打印全局常量
  printf("全局常量地址打印：\n");
  printf("全局常量c_g_a 原始地址为 %p，十进制地址%d\n", &c_g_a,
         (int)(size_t)&c_g_a);
  printf("全局常量c_g_b 原始地址为 %p，十进制地址%d\n", &c_g_b,
         (int)(size_t)&c_g_b);
  // 打印局部常量
  const int c_l_a = 10;
  const int c_l_b = 10;
  printf("局部常量地址打印：\n");
  printf("局部常量c_l_a 原始地址为 %p，十进制地址%d\n", &c_l_a,
         (int)(size_t)&c_l_a);
  printf("局部常量c_l_b 原始地址为 %p，十进制地址%d\n", &c_l_b,
         (int)(size_t)&c_l_b);
  //打印静态全局变量
  printf("静态全局变量地址打印：\n");
  printf("静态全局变量s_g_a 原始地址为 %p，十进制地址%d\n", &s_g_a,
         (int)(size_t)&s_g_a);
  printf("静态全局变量s_g_b 原始地址为 %p，十进制地址%d\n", &s_g_b,
         (int)(size_t)&s_g_b);
  printf("未定义的静态全局变量s_g_c 原始地址为 %p，十进制地址%d\n", &s_g_c,
         (int)(size_t)&s_g_c);
  //打印字符串常量
  printf("打印字符串常量\n字符串常量hello world 原始地址为 %p，十进制地址%d\n",
         &"hello world", (int)(size_t) & "hello world");
}

/*以下是之前的尝试：
尝试使用仿函数打印这些地址，但是在提取变量名称的时候卡住了
怎么搞？
#include <stdio.h>
#define VariableName(name) #name
//
#include <typeinfo>
#define getName(var) #var

// 仿函数 实现实现打印功能
class myPrint {
public:
  void operator()(int val) {
    printf("%d 的 原始地址为 %p,十进制内存地址为%d\n", val, &val,
           (int)(size_t)&val);
  }
};
*/
// myPrint()(a);
