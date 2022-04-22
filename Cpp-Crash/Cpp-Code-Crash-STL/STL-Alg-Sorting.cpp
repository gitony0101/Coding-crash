#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
常用排序算法
1. merge 合并，将两个有序序列的容器合并到目标容器中，目标容器必须有容量。
1. sort 排序 最常用
2. random_shuffle 洗牌，打乱顺序
4. reverse 逆序
*/

class myPrint { //打印仿函数 全局调用
public:
  void operator()(int val) { printf("%d\n", val); }
};

// sort最常用
// sort(beg,end,predicate)

void exSort() {
  vector<int> v;
  v.push_back(10);
  v.push_back(30);
  v.push_back(50);
  v.push_back(20);
  v.push_back(40);
  // sort 从小到大排序
  sort(v.begin(), v.end());                // 默认排序
  for_each(v.begin(), v.end(), myPrint()); //遍历vector，使用MyPrint()打印
  cout << endl;
  //从大到小 使用内置函数greater
  sort(v.begin(), v.end(), greater<int>()); // 使用内置函数greater< >
  for_each(v.begin(), v.end(), myPrint()); //遍历vector，使用MyPrint()打印
}

// merge 容器内元素合并 并存储到另外一个容器中
// 注意：合并容器内序列必须有序，新容器内必须有容量
// random shuffle (beg end)洗牌   指定范围内的元素随机调整次序

int main() { exSort(); }
