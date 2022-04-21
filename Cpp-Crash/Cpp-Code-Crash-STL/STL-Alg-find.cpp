#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

/*
常用查找算法
find(iterator beg, iterator end, value);//查找元素
- `find_if`               //按条件查找元素
- `adjacent_find`    //查找相邻重复元素
- `binary_search`    //二分查找法
- `count`                   //统计元素个数
- `count_if`             //按条件统计元素个数
*/

void exFind() {
  vector<int> v;
  for (int i = 0; i < 10; i++) {
    v.push_back(i + 1);
  }
}

int main() {}
