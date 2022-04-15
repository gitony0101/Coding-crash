#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

/*
 * 返回bool类型的仿函数称为**谓词**
 * 如果operator()接受一个参数，那么叫做一元谓词
 * 如果operator()接受两个参数，那么叫做二元谓词
 */

// 1、一元谓词

struct greaterFive { // struct 结构体
  bool operator()(int val) { return val > 5; }
};
void findGreaterGive() {
  vector<int> v;
  for (int i = 0; i < 10; i++) {
    v.push_back(i);
  }
  auto it = find_if(v.begin(), v.end(), greaterFive());
  if (it == v.end()) {
    printf("没找到。\n");
  } else {
    printf("找到 %d\n", *it);
  }
}
// 为什么只找到6？？
// 2、二元谓词

class MyCompare {
public:
  bool operator()(int num1, int num2) { return num1 > num2; }
};

void sortTest() {
  vector<int> v;
  v.push_back(10);
  v.push_back(40);
  v.push_back(20);
  v.push_back(30);
  v.push_back(50);
  //默认从小到大
  sort(v.begin(), v.end());
  for (auto it = v.begin(); it != v.end(); it++) {
    printf("%d\n", *it);
  }
  printf("-------------------\n");
  //使用函数对象改变算法策略，排序从大到小
  sort(v.begin(), v.end(), MyCompare());
  for (auto it = v.begin(); it != v.end(); it++) {
    printf("%d\n", *it);
  }
  printf("-------------------\n");
}

int main() {
  findGreaterGive();
  sortTest();
}
