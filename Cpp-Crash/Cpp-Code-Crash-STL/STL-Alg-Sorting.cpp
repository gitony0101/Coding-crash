#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <experimental/algorithm> // random_shuffle 已经删除，这个用来调用shuffle
#include <functional>
#include <iostream>
#include <random> // 设定种子用
#include <string>
#include <vector>
using namespace std;

/*
常用排序算法

1. sort 排序 最常用
2. shuffle 洗牌，打乱顺序 random_shuffle 已经不用了

3. merge 合并，将两个有序序列的容器合并到目标容器中，目标容器必须有容量。
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
void exShuffle() {
  vector<int> v;
  for (int i = 0; i < 10; i++) {
    v.push_back(i);
  }

  printf("Original order: ");
  for_each(v.begin(), v.end(), myPrint());
  printf("After shuffle:\n");
  random_device rnd;      // 设定随机数
  mt19937_64 seed(rnd()); // 设定随机数

  shuffle(v.begin(), v.end(), seed);
  for_each(v.begin(), v.end(), myPrint());
}

// merge 合并，将两个有序序列的容器合并到目标容器中，目标容器必须有容量

int main() {
  // exSort();
  exShuffle(); // error: use of undeclared identifier 'random_shuffle'
}
