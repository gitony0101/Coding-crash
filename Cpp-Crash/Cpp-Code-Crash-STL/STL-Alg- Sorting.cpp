#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
常用排序算法
1. merge 合并，将两个有序序列的容器合并到目标容器中，目标容器必须有容量。
2. sort 排序 最常用
3. random_shuffle 洗牌，打乱顺序
4. reverse 逆序
*/

// sort最常用
// sort(beg,end,predicate)
class MyPrint { // 定义打印int值仿函数
public:
  void operator()(int val) { printf("%d\n", val); }
};

void exSort() {
  vector<int> v;
  v.push_back(10);
  v.push_back(30);
  v.push_back(50);
  v.push_back(20);
  v.push_back(40);
  // sort 从小到大排序
  sort(v.begin(), v.end());                // 默认排序
  for_each(v.begin(), v.end(), MyPrint()); //遍历vector，使用MyPrint()打印
  cout << endl;
}

// merge 容器内元素合并 并存储到另外一个容器中
// 注意：合并容器内序列必须有序，新容器内必须有容量

int main() { exSort(); }
