#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
/*
常用的拷贝和替换方法
copy(iterator beg, iterator end, iterator dest); //
容器内指定范围的元素拷贝到另一容器中，目标容器记得提前开辟空间
replace(iterator beg, iterator end, oldvalue, newvalue); //
将容器内指定范围的所有旧元素修改为新元素
replace_if(iterator beg, iterator end, _pred, newvalue)//
容器内指定范围满足条件的元素替换为新元素，注意有谓词，仿函数上线
- `swap`                     // 互换两个容器的元素
*/
class myPrint {
public:
  void operator()(int val) { printf("%d\n", val); }
};
void exCopy() {
  vector<int> v1;                //创建vector容器
  for (int i = 0; i < 10; i++) { //向量赋值
    v1.push_back(i + 1);
  }
  vector<int> v2;
  v2.resize(v1.size());
  copy(v1.begin(), v1.end(), v2.begin());
  for_each(v2.begin(), v2.end(), myPrint());
  cout << endl;
}

void exReplace() {
  vector<int> v;
  v.push_back(20);
  v.push_back(30);
  v.push_back(20);
  v.push_back(40);
  v.push_back(50);
  v.push_back(10);
  v.push_back(20);
  printf("替换前：\n");
  for_each(v.begin(), v.end(), myPrint());
  printf("替换后；\n");
  replace(v.begin(), v.end(), 20, 2000);
  for_each(v.begin(), v.end(), myPrint());
}

class ReplaceGreater30 { //创造replace_if 里面的使用的仿函数
public:
  bool operator()(int val) { return val >= 30; }
};
class vecV1 { //试着来一个公共的vector容器全局可用
public:
  vector<int> v0;
};
void exReplace_if() {}

int main() {
  //   exCopy();
  exReplace();
}
