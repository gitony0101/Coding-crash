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
  void operator()(int val) { printf("%d", val); }
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

// merge 容器内元素合并 并存储到另外一个容器中 (反转一起)
// 注意：合并容器内序列必须有序，新容器内必须有容量
// random shuffle (beg end)洗牌   指定范围内的元素随机调整次序
void exShuffle() {
  vector<int> v;
  for (int i = 0; i < 10; i++) {
    v.push_back(i);
  }

  printf("Original order: \n");
  for_each(v.begin(), v.end(), myPrint());
  printf("After shuffle:\n");
  random_device rnd;      // 设定随机数
  mt19937_64 seed(rnd()); // 设定随机数

  shuffle(v.begin(), v.end(), seed);
  for_each(v.begin(), v.end(), myPrint());
}

// merge 合并，将两个有序序列的容器合并到目标容器中，目标容器必须有容量
// merge(beg1,end1,beg2,end2, iterator target )
void exMergeRev() {
  vector<int> v1;                // 创建原vector v1
  vector<int> v2;                // v2
  for (int i = 0; i < 10; i++) { // 遍历赋值
    v1.push_back(i);
    v2.push_back(i + 2);
  }
  vector<int> vtarget;                   // 创建目标容器
  vtarget.resize(v1.size() + v2.size()); //提前开辟好空间
  //下面开始合并
  merge(v1.begin(), v1.end(), v2.begin(), v2.end(),
        vtarget.begin()); //这样定义的非常清楚，从哪里来，到哪里去，一目了然
  for_each(vtarget.begin(), vtarget.end(), myPrint());
  printf("下面开始反转\n");
  reverse(vtarget.begin(), vtarget.end());
  for_each(vtarget.begin(), vtarget.end(), myPrint());
}

int main() {
  // exSort();
  // exShuffle();
  exMergeRev();
}
