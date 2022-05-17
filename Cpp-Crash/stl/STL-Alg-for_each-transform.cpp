#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

/*
常用遍历算法
for_each //遍历容器
transform //搬运容器到另一个容器中
注意：目标容器需要提升开辟空间
*/

// 定义普通函数
void print01(int val) { printf("%d", val); }
//函数对象
class print02 {
public:
  void operator()(int val) { printf("%d", val); }
};

// for_each 用法
void ex4each() {
  vector<int> v;
  for (int i = 0; i < 10; i++) {
    v.push_back(i);
  }
  //遍历算法for_each，调用普通函数和函数对象
  printf("调用普通函数\n");
  for_each(v.begin(), v.end(), print01);
  printf("\n调用函数对象\n");
  for_each(v.begin(), v.end(), print02());
  cout << endl;
}

//常用遍历算法  搬运 transform
class TF { // TransForm 定义仿函数
public:
  int operator()(int val) { return val; }
};

class MyPrint {
public:
  void operator()(int val) { printf("%d\n", val); }
};

void exTransform() {
  vector<int> v;
  for (int i = 0; i < 10; i++) {
    v.push_back(i);
  }
  vector<int> vTarget; // 新建目标容器
  vTarget.resize(
      v.size()); // 新建目标目标容器需要提前开辟空间，此处v.size()和原空间大小相同
  transform(v.begin(), v.end(), vTarget.begin(), TF());
  for_each(vTarget.begin(), vTarget.end(), MyPrint());
}

int main() {
  // ex4each();
  exTransform();
}
