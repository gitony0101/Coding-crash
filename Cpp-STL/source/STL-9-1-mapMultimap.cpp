#include <cstdio>
#include <iostream>
#include <map> // 调用map头文件
#include <utility>
using namespace std;

/*
map/multimap属于 关联式容器，底层结构是用二叉树实现。
跟set的性质一样，map不允许重复key值元素，然而multimap可以
//
构造 赋值 大小交换 判断是否为空
查找和统计
- lower_bound(keyElem);/返回第一个key >= keyElem元素的迭代器。
- upper_bound(keyElem);/返回第一个key > keyElem元素的迭代器。(下一个)
- equal_range(keyElem)),/返回容器中key与keyElem相等的上下限的两个迭代器pair。

*/

void printMap(map<int, int> &m) { // 创建打印函数
  for (auto it = m.begin(); it != m.end(); it++) {
    printf("Key :%d ,value: %d.\n", it->first, it->second);
  }
}

class MyCompare { // map 容器排序用 仿函数
public:
  bool operator()(int v1, int v2) { return v1 > v2; }
};

void myMap() {
  //构造函数
  map<int, int> m; // 默认构造
  m.insert(pair<int, int>(1, 10));
  m.insert(pair<int, int>(2, 20));
  m.insert(pair<int, int>(2, 20)); // 重复插入，map不会执行insert
  m.insert(pair<int, int>(3, 30));
  printMap(m);
  //拷贝构造
  map<int, int> m2(m);
  printf("m2:\n");
  printMap(m2);
  // 大小
  map<int, int> m0{pair<int, int>(1, 10), pair<int, int>(2, 20),
                   pair<int, int>(3, 30)}; // 直接构造 // printMap(m0);
  if (m0.empty()) {
    printf("m0 为空。");
  } else { //输出大小
    printf("m0 不为空，它的大小为：%lu\n", m0.size());
  }
  // 交换
  map<int, int> m3{pair<int, int>(4, 100), pair<int, int>(5, 200),
                   pair<int, int>(6, 300)}; // 再来一发
  printf("交换前的m0:\n");
  printMap(m0);
  printf("交换前的m3:\n");
  printMap(m3);
  m3.swap(m0); // swap 交换
  printf("交换后，m0为:\n");
  printMap(m0);
  printf("交换后，m3为:\n");
  printMap(m3);
  // 插入删除 直接以上面m3为例,第一种为insert，已经讲过
  // 第二种make_pair
  printf("m3插入:\n");
  m3.insert(make_pair(4, 40)); // 推荐
  //第三种 map value_type
  m3.insert(map<int, int>::value_type(3, 30));
  //第四种 插入
  m3[4] = 40; // 其实不推荐
  printMap(m3);
  // 删除m3
  printf("m3删除:\n");
  m3.erase(m.begin()); // 没有用？
  printMap(m3);
  m3.erase(3);
  printMap(m3);
  //清空
  //   printf("m3清空:\n");
  //   m.erase(m.begin(), m.end());
  //   m.clear();
  //   printMap(m3);
  //查找和统计
  printMap(m0);
  auto pos = m0.find(4);
  if (pos != m.end()) {
    printf("找到了元素 key =%d,value = %d。\n", (*pos).first, (*pos).second);
  } else {
    printf("未找到元素。");
  }
  // 统计
  int num = m0.count(5);
  printf("num = %d\n", num);
  // 容器排序，默认有顺序排，回调函数（仿函数）改变排序规则
  //   printMap(m2);
  map<int, int> m1(m2);
  for (map<int, int, MyCompare>::iterator it = m1.begin(); it != m1.end();
       it++) {
    printf(" key =%d,value = %d。\n", (*it).first, (*it).second);
  }
};

int main() { myMap(); }
