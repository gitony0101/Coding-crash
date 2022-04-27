#include <algorithm>
#include <cstdio>
#include <iostream>
#include <numeric> //算术生成算法头文件
#include <vector>
using namespace std;

/*
常用的算数生成算法
常用的有序序列集合的算法 有序序列集合的交并差 返回值既是交集中最后一个元素的位置

算术生成算法属于小型算法，使用时包含的头文件为 `#include
<numeric>`，这个算法很实用

1. `accumulate(iterator beg, iterator end, value);`  // 计算容器元素累计总和
2. `fill(iterator beg, iterator end, value); `// 向容器中添加元素 指定的元素

常用集合算法

- `set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2,
iterator dest);`// 取**有序序列**的交集
  - 目标容器开辟空间需要从**两个容器中取小值**
- `set_union(iterator beg1, iterator end1, iterator beg2, iterator end2,
iterator dest);  `//取并集
  - 目标容器开辟空间需要**两个容器相加**
- `set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2,
iterator dest);  `取差集
  - 求差集的两个集合必须的有序序列
  - 目标容器开辟空间需要从**两个容器取较大值**
*/

void myPrint(int val) { printf(" %d ", val); }; // 仿函数来一发

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
void exFill() {
  vector<int> v;
  v.resize(10);
  fill(v.begin(), v.end(), 100);
  for_each(v.begin(), v.end(), myPrint);
  printf("\n");
}

void exIntersection() {}

int main() {
  exAccumulate();
  exFill();
}
