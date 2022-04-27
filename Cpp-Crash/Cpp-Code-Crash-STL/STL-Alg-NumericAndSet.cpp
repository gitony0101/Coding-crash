#include <algorithm>
#include <cstdio>
#include <iostream>
#include <numeric> //算术生成算法头文件
#include <vector>
using namespace std;

/*
常用的算数生成算法 和常用的有序序列集合的算法

算术生成算法属于小型算法，使用时包含的头文件为 `#include
<numeric>`，这个算法很实用

1. `accumulate(iterator beg, iterator end, value);`  // 计算容器元素累计总和
2. `fill(iterator beg, iterator end, value); `// 向容器中添加元素 指定的元素
*/

void myPrint(int val) { printf("%d", val); }; // 仿函数来一发

void exAccumulate() { // 求自然数前n项和
  vector<int> v;
  for (int i = 0; i < 10; i++) {
    v.push_back(i + 2); //没别的，就是想写个+2
  }
  int total = accumulate(v.begin(), v.end(), 0);
  printf("vetctor v:\n");
  for_each(v.begin(), v.end(), myPrint);
  printf("\nTotal = %d\n", total);
}

int main() { exAccumulate(); }
