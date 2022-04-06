#include <cstdio>
#include <iostream>
#include <list>
using namespace std;

/* List 链表 将数据链式存储
构造函数

*/

void printList(const list<int> &L) { //打印List链表
  for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
    printf("%d ", *it); // list<int> ,so &d
  }
  cout << endl;
}

void commonList(list<int> &L) { list<int> L0; };

void constructList() { // 构造函数 都一样

  list<int> L1; // push_back method
  L1.push_back(10);
  L1.push_back(20);
  L1.push_back(30);
  L1.push_back(40);
  printList(L1);
  //   从头到尾复制
  list<int> L2(L1.begin(), L1.end());
  printList(L2);
  // 括号内直接复制
  list<int> L3(L2);
  printList(L3);
  // 构造十个1000
  list<int> L4(10, 1000);
  printList(L4);
  // XB
  // list<int> L5{10, 20, 30, 40};
  // printList(L5);
}

void assignSwapList() { //赋值交换
  list<int> L1{10, 20, 30,
               40}; // 简单写法，报错忽略，vsc默认11，直接忽略右边的报错就好，
  // 看微软吧，hhh
  list<int> L2;
  L2.assign(10, 100);
  cout << "交换前：" << endl;
  printList(L1);
  printList(L2);
  cout << endl;
  L1.swap(L2);
  cout << "交换后：" << endl;
  printList(L1);
  printList(L2);
}

void resizeList() { // list 大小操作
  list<int> L1{10, 20, 30, 40};
  if (L1.empty()) {
    printf("L1为空");
  } else {
    printf("L1不为空，它的大小为：%lu。\n", L1.size());
    //重新制定大小
    L1.resize(10); // 多出来的补零
    printList(L1);
    L1.resize(2); // 裁到两个
    printList(L1);
  }
}

void insertDellist() { // list 插入删除
  list<int> L;
  //尾插
  L.push_back(10);
  L.push_back(20);
  L.push_back(30);
  //头插
  L.push_front(100);
  L.push_front(200);
  L.push_front(300);
  printList(L);
  //尾删
  L.pop_back();
  printList(L);
  //头删
  L.pop_front();
  printList(L);
}

int main() {
  // constructList();
  // assignSwapList();
  // resizeList();
  insertDellist();
}
