#include <cstdio>
#include <iostream>
#include <list>
#include <string>
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
  //插入
  list<int>::iterator it = L.begin();
  L.insert(++it, 1000);
  printList(L);
  // 删除
  it = L.begin();
  L.erase(++it);
  printList(L);
  // 移除
  L.push_back(10000);
  L.push_back(10000);
  L.push_back(10000);
  printList(L);
  L.remove(10000);
  printList(L);
  //清空
  L.clear();
  printf("clear命令 清空结果：\n");
  printList(L);
}

void accessList() { // list 数据存取
  // list 不支持 at 和 []访问数据
  list<int> L1{10, 20, 30, 40}; // 别管报错
  printf("第一个元素为：%d。最后一个元素为:%d。\n", L1.front(), L1.back());
  // list 容器迭代器是双向迭代器，不支持随机访问
  list<int>::iterator it = L1.begin();
  // it = it + 1;//错误，不可以跳跃访问，即使是+1
}

// list 反转和排序专用回调函数,callback时候，从大到小排列 val1 > val2。
bool myCompare(int val1, int val2) { return val1 > val2; }

void reversortList() {          // list 反转和排序
  list<int> L1{10, 20, 30, 40}; // 别管报错
  // 反转容器的元素
  L1.reverse();
  printList(L1);
  //排序
  L1.sort(); // 默认排序规则从小到大
  printList(L1);
  //回调函数制定规则，从大到小
  L1.sort(myCompare);
  printList(L1);
}

/* 排序案例
案例描述：
将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
排序规则：
按照年龄进行升序，如果年龄相同按照身高进行降序
*/
class Person { // 定义一个Person 类，包含了姓名年龄身高
public:        //定义公共属性
  Person(string name, int age, int height) {
    m_Name = name;
    m_Age = age;
    m_Height = height;
  }
  string m_Name; // 姓名
  int m_Age;     // 年龄
  int m_Height;  // 身高
};
bool ComparePerson(Person &p1, Person &p2) {
  //定义回调函数
  if (p1.m_Age == p2.m_Age) {
    return p1.m_Height > p2.m_Height;
  } else {
    return p1.m_Age < p2.m_Age;
  }
}

void compareThem() {
  list<Person> L; // 细品这个定义

  Person p1("刘备", 35, 175);
  Person p2("曹操", 45, 180);
  Person p3("孙权", 40, 170);
  Person p4("赵云", 25, 190);
  Person p5("张飞", 35, 160);
  Person p6("关羽", 35, 200);

  L.push_back(p1);
  L.push_back(p2);
  L.push_back(p3);
  L.push_back(p4);
  L.push_back(p5);
  L.push_back(p6);

  //开始刷：
  for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
    printf("姓名：%s,身高：%d。\n", (*it).m_Name.c_str(), (*it).m_Height);
  }
  printf("-----下面开始排序-----\n");
  L.sort(ComparePerson); // 使用回调函数sort排序
  for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
    printf("姓名：%s,身高：%d。\n", (*it).m_Name.c_str(), (*it).m_Height);
  }
}

int main() {
  // constructList();
  // assignSwapList();
  // resizeList();
  // insertDellist();
  // accessList();
  // reversortList();
  //排序案例：
  compareThem();
}
