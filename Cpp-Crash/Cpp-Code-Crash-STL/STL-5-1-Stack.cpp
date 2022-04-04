#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;

// Stack 栈容器

void test01() {
  //创建栈容器，必须符合先进后出
  stack<int> s;

  //向栈中添加元素，叫做压栈、入栈
  s.push(9);
  s.push(8);
  s.push(7);
  s.push(6);
  s.push(5);
  s.push(4);
  //只要栈不为空，查看站定，并且执行出栈操作
  while (!s.empty()) {
    printf("栈顶元素为： %d\n", s.top());
    //弹出栈顶元素
    s.pop();
    printf("弹出栈顶元素，栈顶元素为： %d,此时,栈的大小%lu\n", s.top(),
           s.size());
  }
}

int main() { test01(); }
