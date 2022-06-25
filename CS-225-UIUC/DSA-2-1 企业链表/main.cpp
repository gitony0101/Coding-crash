#include <iostream>
using namespace std;
#include "LinkList.h"

typedef struct MyData { //创建的是链表节点的结构体，每个都一样
  LinkNode node;        //头部是node首地址，指向下一个node
  char name[64];
  int age;

} MyData;

int main(void) {}
