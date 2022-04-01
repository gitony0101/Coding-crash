#include <cstdio>
#include <deque>
#include <iostream> // header file
using namespace std;

/*Deque 双端数组
构造 赋值 , 都一样，体现不出来区别。
大小操作 empty size resize
插入和删除 头插尾插头删尾删
*/
void printDeque(const deque<int> &d) {
  for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
    cout << *it << " "; // 这个空格很有必要 把每个元素空出来了
  }
  cout << endl; // 每执行一个函数，换行
}

void constructDeque() { // deuqe 构造
  deque<int> d1;        //无参构造
  for (int i = 0; i < 10; i++) {
    d1.push_back(i);
  }
  printDeque(d1);
  deque<int> d2(d1.begin(), d1.end());
  printDeque(d2);
  deque<int> d3(10, 100);
  printDeque(d3);
  deque<int> d4 = d3;
  printDeque(d4);
}

void inputDeque() { //赋值操作
  deque<int> d1;    //无参构造
  for (int i = 0; i < 10; i++) {
    d1.push_back(i);
  }
  deque<int> d2;
  d2 = d1; // 直接赋值
  printDeque(d2);
  deque<int> d3;
  d3.assign(d1.begin(), d1.end());
  printDeque(d3);
  deque<int> d4;
  d4.assign(10, 100);
  printDeque(d4);
}

void sizeDeque() { // deque 大小操作
  deque<int> d1;
  for (int i = 0; i < 10; i++) {
    d1.push_back(i);
  }
  printDeque(d1);
  //判断容器是否为空
  if (d1.empty()) {
    printf("d1为空！");
  } else {
    printf("d1不为空，它的大小为%lu\n", d1.size());
  }

  //重新指定大小：
  d1.resize(
      15,
      1); // 原来是10个元素，现在扩充到15个，resize就从最后面加上15-10=5个设定好的1.
  printDeque(d1);
  d1.resize(5);
  printDeque(d1);
}

int main() {
  //   constructDeque();
  //   inputDeque();
  sizeDeque();
}
