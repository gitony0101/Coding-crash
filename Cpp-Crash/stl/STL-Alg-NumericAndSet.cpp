#include <algorithm>
#include <cstdio>
#include <iostream>
#include <numeric> //算术生成算法头文件
#include <vector>
using namespace std;

/*
#常用的算数生成算法
算术生成算法属于小型算法，使用时包含的头文件为 `#include
<numeric>`，这个算法很实用
1. `accumulate(iterator beg, iterator end, value);`  // 计算容器元素累计总和
2. `fill(iterator beg, iterator end, value); `// 向容器中添加元素 指定的元素

#常用集合算法 常用的有序序列集合的算法 有序序列集合的交并差
返回值既是交集中最后一个元素的位置
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
//创建一个公共可调用的vector容器类 以供后面集合运算使用
class vectorV12 {
public:
  vectorV12(vector<int> &v1, vector<int> &v2) {
    for (int i = 0; i < 10; i++) {
      v1.push_back(i);
      v2.push_back(i + 5);
    }
  }
};

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

void exIntersection() { //求交集
  vector<int> v1;
  vector<int> v2;
  vectorV12(v1, v2);

  vector<int> vTarget;
  //取两个容器里面较小的值给目标容器开辟空间
  vTarget.resize(min(v1.size(), v2.size()));
  //返回目标容器的最后一个元素的迭代器地址：
  auto itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(),
                                vTarget.begin());
  for_each(vTarget.begin(), itEnd,
           myPrint); // 这里写的是最后一个元素迭代器的地址 itEnd
  // 迭代器其实起始位置调整，都会发生很不一样的变化
  printf("\n");
}

void exUnion() { //求并集
  vector<int> v1;
  vector<int> v2;
  vectorV12(v1, v2);
  vector<int> vTarget;
  //取两个目标容器的和给目标容器开辟空间
  vTarget.resize(v1.size() + v2.size());
  //返回目标容器的最后一个元素的迭代器地址
  auto itEnd =
      set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
  for_each(vTarget.begin(), itEnd, myPrint);
  printf("\n");
}

void exSetDifference() { //求差集 a与b的差集和b与a的差集不一样
  vector<int> v1;
  vector<int> v2;
  vectorV12(v1, v2);
  printf("v1容器为：\n");
  for_each(v1.begin(), v1.end(), myPrint);
  printf("\nv2容器为：\n");
  for_each(v2.begin(), v2.end(), myPrint);
  printf("\n");
  vector<int> vTarget;
  //取两个容器大小较大的值给目标容器开辟空间
  vTarget.resize(max(v1.size(), v2.size()));
  // 求v1与v2的差集,v1独有的
  printf("v1与v2的差集为:\n");
  auto itEnd12 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(),
                                vTarget.begin());
  for_each(vTarget.begin(), itEnd12, myPrint);
  // 求v2与v1的差集，v2独有的
  printf("\nv2与v1的差集为:\n");
  auto itEnd21 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(),
                                vTarget.begin());
  for_each(vTarget.begin(), itEnd21, myPrint);
  printf("\n");
}

int main() {
  //   exAccumulate();
  //   exFill();
  // exIntersection();
  // exUnion();
  exSetDifference();
}
