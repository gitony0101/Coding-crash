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

void commonList(list<int> &L){};

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
  list<int> L5{10, 20, 30, 40};
  printList(L5);
}

void assignSwapList() { //赋值交换
}

int main() { constructList(); }
