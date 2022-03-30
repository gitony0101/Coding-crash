#include <algorithm>
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

互换容器 swap
*/

void printVector(vector<int> &v) { // 打印vector
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    printf("%d ", *it);
    // cout << *it << " ";
  }
  cout << endl;
}

void test01() { // 构造函数
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

void test02() { // 赋值操作
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

void test03() {
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

void test04() {   //插入和删除
  vector<int> v1; // 无参构造
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

void test05() {   // 对 vector中的数据存取操作
  vector<int> v1; // 无掺构造
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

void swapContainer() { //容器互换
  vector<int> v1;
  for (int i = 0; i < 10; i++) {
    v1.push_back(i);
  }
  printVector(v1);
}

int main() {
  //   test01();
  //   test02();
  //   test03();
  // test04();
  // test05();
  swapContainer();
}
