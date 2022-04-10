#include <cstdio>
#include <iostream>
#include <set> // 导入set头文件
#include <string>
#include <utility>
using namespace std;

/*set 容器
构造 赋值大小插入删除
set 查找操作：
    * 查找   ---  find    （返回的是迭代器）
    * 统计   ---  count  （对于set，结果为0或者1）
    lower_bound
    upper_bound
    equal_range
*/

void printSet(set<int> &s) { // 打印set函数
  for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    printf("%d ", *it);
  }
  cout << endl;
}

void mySet() { //构造 赋值大小插入删除,一把梭哈
  set<int> s0; // 直接插入
  s0.insert(10);
  s0.insert(20);
  s0.insert(30);
  s0.insert(40);
  printSet(s0);
  //拷贝
  set<int> s2(s0);
  printSet(s2);
  //赋值
  set<int> s3;
  s3 = s2;
  printSet(s3);
  //大小交换
  //大小size
  if (s0.empty()) {
    printf("s0 为空");
  } else {
    printf("s0 大小不为空，它的大小为：%lu。\n", s0.size());
  }
  //交换
  set<int> s4{10, 20, 30, 40}; // 直接构造，别管报错
  set<int> s5{100, 200, 300, 400};
  printf("交换前：\n");
  printSet(s4);
  printSet(s5);
  printf("交换后：\n");
  s4.swap(s5);
  printSet(s4);
  printSet(s5);
  //插入删除 插入已经有了直接开始删除
  s5.erase(s5.begin()); //删除头部
  printSet(s5);
  s5.erase(30); //删除30
  printSet(s5);
  // 清空：1： s5.erase(s1.begin(), s1.end());
  printf("清空后：\n");
  s5.clear();
  printSet(s5);
  //查找统计：用s0
  //查找
  set<int>::iterator pos = s0.find(30);
  if (pos != s0.end()) {
    printf("找到了元素：%d\n", *pos);
  } else {
    printf("未找到。");
  }
  // 统计
  s0.insert(30);
  s0.insert(30);
  s0.insert(30);
  int num0 = s0.count(30);
  printf("num0 = %d。\n", num0); // 这里体现了set里面不允许有重复元素

  /*
1ower_bound(keyElem);/返回第一个key >= keyElem元素的迭代器。
upper_bound(keyElem);/返回第一个key > keyElem元素的迭代器。(下一个)
equal_range(keyElem)),/返回容器中key与keyElem相等的上下限的两个迭代器pair。
*/
  set<int> s6{1, 2, 3, 3, 4, 55, 666, 6, 33, 2, 334, 4, 55, 5};
  printf("当前使用的set：\n");
  printSet(s6); // 打印输出的时候直接排序了，但是set里面不允许有重复元素
  // 设置lowerbound为2
  set<int>::iterator it1 = s6.lower_bound(2);
  if (it1 != s6.end()) {
    printf("当设置lower_bound 为2 时，lower_bound 的值为: %d。\n", *it1);
  } else {
    printf("未找到。");
  }
  // 设置upper_bound 为2
  auto it2 = s6.upper_bound(2); // auto ：set<int>::iterator
  if (it2 != s6.end()) {
    printf("当设置upper_bound 为2 时，upper_bound 的值为: %d。\n", *it2);
  } else {
    printf("未找到。");
  }
  auto it3 = s6.equal_range(2);
  printf("当设置equal_range 为 2 时，lower_bound 为%d\n,upper_bound 为%d。\n",
         *it3.first, *it3.second);
  auto it4 = s6.equal_range(55);
  printf("当设置equal_range 为 55 时，lower_bound 为%d\n,upper_bound 为%d。\n",
         *it4.first, *it4.second);
}

// pair 对组创建
void myPair() {
  // 无参构造
  pair<string, int> p1(string("Jay"), 23);
  printf("姓名: %s，年龄：%d。\n", p1.first.c_str(), p1.second);
  // make_pair
  pair<string, int> p2 = make_pair("Tony", 8);
  printf("姓名: %s，年龄：%d。\n", p2.first.c_str(), p2.second);
}

// set 和 multiset区别
void SetAndMultiset01() {
  set<int> s;
  pair<set<int>::iterator, bool> ret = s.insert(10);
  if (ret.second) {
    printf("第一次插入成功");
  } else {
    printf("第一次插入失败");
  }
  //再来一次
  ret = s.insert(10);
  if (ret.second) {
    printf("第二次插入成功");
  } else {
    printf(
        "第二次插入失败\n"); // 运行后发现第二次插入是失败的，因为set不允许重复
  }
  // multiset 允许插入重复的key值
  multiset<int> ms;
  ms.insert(10);
  ms.insert(10);
  for (auto it = ms.begin(); it != ms.end(); it++) {
    printf("%d\n", *it);
  }
}

int main() {
  // mySet();
  // myPair();
  SetAndMultiset01();
}
