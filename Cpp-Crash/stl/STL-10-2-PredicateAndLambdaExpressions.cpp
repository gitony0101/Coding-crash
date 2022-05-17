#include <algorithm>
#include <cstdio>
#include <iostream>
#include <ratio>
#include <vector>
using namespace std;

/*
1、谓词 普通函数或放函数返回值是bool的类型，成为谓词
  find_if
  for_each
 * 返回bool类型的仿函数称为**谓词**
 * 如果operator()接受一个参数，那么叫做一元谓词
 * 如果operator()接受两个参数，那么叫做二元谓词

2、 lambda表达式 （lambda expression）
在 C++11 及更高版本中，lambda 表达式（通常称为
lambda）是定义匿名函数对象的便捷方法， (关闭)
直接在调用或作为参数传递给函数的位置。
 */

// 1、一元谓词

// 视频例子
class GreaterThan20 { // 类 匿名对象
public:
  bool operator()(int val //这里是一个参数，所以是一元谓词

  ) {
    return val > 20;
  }
};
void testPredicate01() {
  vector<int> v;
  v.push_back(10);
  v.push_back(40);
  v.push_back(20);
  v.push_back(30);
  v.push_back(50);

  auto ret = find_if(v.begin(), v.end(), GreaterThan20()); // find_if
  if (ret != v.end()) {
    printf("找到大于20的数字为： %d\n", *ret);
  } else {
    printf("没找到大于20的数");
  }
} //最后返回的还是大于20的第一个数

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
//
// 2、二元谓词

//视频例子
//
class MyCompare { //仿函数
public:
  bool operator()(int num1, int num2
                  //这里是两个参数，所以是二元谓词
  ) {
    return num1 > num2;
  }
};

void myPrintInt(int val) { //回调函数
  printf("%d\n", val);
}

void testBinaryPredicate01() { // 默认排序，仿函数调整排序
                               // lambda表达式 本质是匿名函数

  vector<int> v;
  v.push_back(10);
  v.push_back(40);
  v.push_back(20);
  v.push_back(30);
  v.push_back(50);
  sort(v.begin(), v.end()); // 默认从小到大
  printf("使用回调函数myPrintInt打印：\n");
  for_each(v.begin(), v.end(), myPrintInt);
  printf("-----使用仿函数MyCompare() 从大到小排列--------\n");
  sort(v.begin(), v.end(), MyCompare());
  // lambda 表达式
  for_each(v.begin(), v.end(), [](int val) { printf("%d\n", val); });
  // [ captures ] lambda 表达式标志，不可以省略：
  // ( params )具体型参列表
  // specs requires(optional) { body } 具体的函数体(实验体)
  // 主义：此处的lambda表达式等价于上面的回调函数myPrintInt,但是这个函数是有名的，这里的lamba表达式没有名字，所以是匿名函数
  // 这里的vsc报错忽略
}

//

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
  testPredicate01();
  testBinaryPredicate01();
  findGreaterGive();
  sortTest();
}
