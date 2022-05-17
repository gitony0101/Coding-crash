#include <cstdio>
#include <deque>
#include <iostream>
using namespace std;

void printDeque(const deque<int> &d) {
  for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
    printf("%d\n", *it);
  }
  cout << endl;
}

bool myCompare(int v1, int v2) { // 重载版本，指定排列规则的回调函数
  return v1 < v2;
}

void compareContainer() { // 容器排序
  deque<int> d;
  d.push_back(10);
  d.push_back(20);
  d.push_back(30);
  d.push_front(100);
  d.push_front(200);
  d.push_front(300);

  // 300 200 100 10 20 30
  printDeque(d);
  //排序  默认排序规则  从小到大 升序
  //对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
  // vector容器也可以利用 sort进行排序
  sort(d.begin(), d.end(), myCompare);
  printf("排序后： \n");
  printDeque(d);
}

int main() { compareContainer(); }
