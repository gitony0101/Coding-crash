#include <algorithm>
#include <cstddef>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

/*
构造函数： vector的多种构造方式没有可比性，灵活使用即可
赋值操作： vector赋值方式比较简单，使用operator=，或者assign都可以

容量和大小操作：
    * 判断是否为空  --- empty
    * 返回元素个数  --- size
    * 返回容器容量  --- capacity
    * 重新指定大小  ---  resize

插入和删除：尾插 尾删 插入删除清空

数据存取： 对 vector中的数据的存取操作
    - 迭代器 [] at() 获取vector中的元素
    - front 返回第一个元素，back 最后一个。

互换容器  swap 可以使两个容器互换，可以达到实用的收缩内存效果
预留空间 reserve 减少vector 在动态扩展容量时的扩展次数
逆序遍历 reverse_iterator
跳跃访问 itBegin += 3
*/

void printVector(vector<int> &v) { // 打印vector
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    printf("%d ", *it);
    // cout << *it << " ";
  }
  cout << endl;
}

void buildVector() { // 构造函数
  printf("v1:\n");
  vector<int> v1; // 无参构造
  for (int i = 0; i < 10; i++) {
    v1.push_back(i);
  }
  printVector(v1);
  printf("v2:\n");
  vector<int> v2(v1.begin(), v1.end());
  printVector(v2);
  printf("v3:\n");
  vector<int> v3(10, 100);
  printVector(v3);
  printf("v4:\n");
  vector<int> v4(v3);
  printVector(v4);
}

void inputVector() { // 赋值操作
  printf("v1:\n");
  vector<int> v1; // 无参构造
  for (int i = 0; i < 10; i++) {
    v1.push_back(i);
  }
  printVector(v1);
  printf("v2:\n");
  vector<int> v2;
  v2 = v1;
  printVector(v2);
  printf("v3:\n");
  vector<int> v3;
  v3.assign(v1.begin(), v1.end());
  printVector(v3);
  printf("v4:\n");
  vector<int> v4;
  v4.assign(10, 100);
  printVector(v4);
}

void resizeVector() {
  printf("v1:\n");
  vector<int> v1;
  for (int i = 0; i < 10; i++) {
    v1.push_back(i); // 0 1 2 3 4 5 6 7 8 9
  }
  printVector(v1);
  if (v1.empty()) {
    printf("v1 为空。\n");
  } else {
    // printf("%u\n,%u\n", v1.capacity(), v1.size());
    cout << "v1不为空" << endl;
    cout << "v1的容量 = " << v1.capacity() << endl;
    cout << "v1的大小 = " << v1.size() << endl;
  }
  // resize 重新指定大小
  // ，若指定的更大，默认用0填充新位置，可以利用重载版本替换默认填充
  printf("resize(15,10):\n");
  v1.resize(15, 42); // 0 1 2 3 4 5 6 7 8 9 42 42 42 42 42
  printVector(v1);
  // resize 重新指定大小 ，若指定的更小，超出部分元素被删除
  printf("resize(5)重新指定大小 ： ");
  v1.resize(5);
  printVector(v1);
}

void insertEraseVector() { //插入和删除
  vector<int> v1;          // 无参构造
  printf("尾插和尾删v1(原来是10到60):\n");
  //尾插
  v1.push_back(10);
  v1.push_back(20);
  v1.push_back(30);
  v1.push_back(40);
  v1.push_back(50);
  v1.push_back(60);
  //尾删
  v1.pop_back();
  v1.pop_back();
  printVector(v1);
  //插入
  printf("insert(v1.begin(),3, 42):");
  v1.insert(v1.begin(), 3, 42);
  printVector(v1);
  printf("insert(v1.end(), 2,42):");
  v1.insert(v1.end(), 2, 42);
  printVector(v1);
  //删除 认真比较出
  printf("erase:");
  v1.erase(v1.begin());
  printVector(v1);
  // 清空
  printf("erase and clear:");
  v1.erase(v1.begin(), v1.end());
  printVector(v1);
  v1.clear();
  printVector(v1);
}

void editVector() { // 对 vector中的数据存取操作
  vector<int> v1;   // 无掺构造
  for (int i = 0; i < 10; i++) {
    v1.push_back(i);
  }
  printf("v1[i]:\n");
  for (int i = 0; i < v1.size(); i++) {
    printf("%d", v1[i]);
  }
  cout << endl;
  printf("at(i):\n");
  for (int i = 0; i < v1.size(); i++) {
    printf("%d ", v1.at(i));
  }
  cout << endl;
  printf("v1 的第一个元素为：%d\nv1 最后一个元素为：%d\n", v1.front(),
         v1.back());
}

void swapContainer01() { //容器互换
  vector<int> v1;
  printf("v1: ");
  for (int i = 0; i < 10; i++) {
    v1.push_back(i);
  }
  printVector(v1);
  printf("v2:");
  vector<int> v2;
  for (int i = 10; i > 0; i--) {
    v2.push_back(i);
  }
  printVector(v2);
  // 互换容器
  printf("互换容器：\n");
  v1.swap(v2);
  printf("互换之后,v1:\n");
  printVector(v1);
  printf("互换之后,v2:\n");
  printVector(v2);
}

void swapContainer02() { // swap可以使两个容器互换，可以达到实用的收缩内存效果
  vector<int> v;
  for (int i = 0; i < 10000; i++) {
    v.push_back(i);
  }
  cout << "v的容量为：" << v.capacity() << endl;
  cout << "v的大小为：" << v.size() << endl;
  // 调整大小：
  v.resize(3);
  cout << "v.resize(3)调整后，v的容量为：" << v.capacity() << endl;
  cout << "v.resize(3)调整后，v的大小为：" << v.size() << endl;
  //收缩内存
  vector<int>(v).swap(v); // 小括号创建匿名对象
  //用v 去初始化这个匿名对象
  cout << "vector<int>(v).swap(v) 以后，v的容量为：" << v.capacity() << endl;
  cout << "vector<int>(v).swap(v) 以后，v的大小为：" << v.size() << endl;
}

void memorySpacetaken00() {
  // 计算累加占用了多少内存空间
  //不使用reserve
  vector<int> v;
  int *p = NULL;
  int num = 0;
  for (int i = 0; i < 100000; i++) {
    v.push_back(i);
    if (p != &v[0]) {
      p = &v[0];
      num++;
    }
  }
  printf("num = %d\n", num);
  cout << "v的容量 = " << v.capacity() << endl;
  cout << "v的大小 = " << v.size() << endl;
}
/*
上例结果：
num = 18
v的容量 = 131072
v的大小 = 100000
找内存就重复找了18次，效率比较低，看下面的这个reserve：
*/
void memorySpacetaken01() {

  // 计算累加占用了多少内存空间
  //使用reserve
  vector<int> v;
  v.reserve(100000); // 预留空间，和下面的循环次数相等
  // 可以调整这个数字在看一下结果。
  int *p = NULL;
  int num = 0;
  for (int i = 0; i < 100000; i++) {
    v.push_back(i);
    if (p != &v[0]) {
      p = &v[0];
      num++;
    }
  }
  printf("num = %d\n", num);
  cout << "v的容量 = " << v.capacity() << endl;
  cout << "v的大小 = " << v.size() << endl;
}

void reverseIteration() { // 逆序遍历:reverse_iterator
  vector<int> v1;
  // printf("\n");
  v1.push_back(10);
  v1.push_back(20);
  v1.push_back(30);
  v1.push_back(40);
  v1.push_back(50);
  v1.push_back(60);
  for (vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); it++) {
    // printf("&p\n", *it);
    cout << *it << endl;
  }
  printf("Try 'auto' :\n");
  for (auto it = v1.rbegin(); it != v1.rend(); it++) {
    cout << *it << endl;
  }
}

void leapVisit() { // 跳跃访问

  vector<int> v1;
  v1.push_back(10); // 0
  v1.push_back(20); // 1
  v1.push_back(30); // 2
  v1.push_back(40); // 3
  v1.push_back(50); // 4
  v1.push_back(60); // 5
  // vector 迭代器是随机访问迭代器，支持跳跃访问
  vector<int>::iterator itBegin = v1.begin();
  itBegin += 3; //  itBegin = itBegin + 3
  cout << *itBegin << endl;
}
int main() {
  // buildVector();
  // inputVector();
  // resizeVector();
  // insertEraseVector();
  // editVector();
  // swapContainer01();
  // swapContainer02();
  // memorySpacetaken00();
  // memorySpacetaken01();
  // reverseIteration();
  leapVisit();
}
