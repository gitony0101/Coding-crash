#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
常用查找算法
find(iterator beg, iterator end, value);//查找元素
find_if(iterator beg, iterator end, _Pred); //按条件查找元素
                                            //
- `adjacent_find`    //查找相邻重复元素
- `binary_search`    //二分查找法
- `count`                   //统计元素个数
- `count_if`             //按条件统计元素个数
*/

// find(iterator beg, iterator end, value); //查找元素
void exFind() {
  vector<int> v;
  for (int i = 0; i < 10; i++) {
    v.push_back(i + 1);
  }
  // 查找容器中是否有5这个元素
  auto it = find(v.begin(), v.end(), 5);
  if (it == v.end()) {
    printf("没有找到");
  } else {
    printf("找到了%d, 内存地址为：%p,变量值 %p\n", *it, &it, &*it); //打印地址&p
  }
}

class Person {
public:
  Person(string name, int age) {
    this->m_Name = name;
    this->m_Age = age;
  }
  //重载 ==
  bool operator==(const Person &p) {
    if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
      return true;
    }
    return false;
  };

public:
  string m_Name;
  int m_Age;
};

void findPerson() {
  vector<Person> v;
  //创建数据
  Person p1("Jhon", 18);
  Person p2("Joe", 38);
  Person p3("Eminem", 50);
  Person p4("Dr.Dree", 55);

  v.push_back(p1);
  v.push_back(p2);
  v.push_back(p3);
  v.push_back(p4);

  //查找
  auto it = find(v.begin(), v.end(), p3);
  if (it == v.end()) {
    printf("没有找到");
  } else {
    printf("已经找到，姓名：%s， 年龄：%d。\n", it->m_Name.c_str(), it->m_Age);
  }
}

// find_if(iterator beg, iterator end, _Pred); 按条件查找元素
// 内置数据类型
class GreaterFive { //定义类  找到大于5
public:
  bool operator()(int val) { return val > 5; }
};

void exfindIf01() {
  vector<int> v;
  for (int i = 0; i < 10; i++) {
    v.push_back(i + 1);
  }
  auto it = find_if(v.begin(), v.end(), GreaterFive());
  if (it == v.end()) {
    printf("没找到");
  } else {
    printf("找到大于5的数字：%d。\n", *it);
  }
}

// 自定义数据类型
class Greater20 {
public:
  bool operator()(Person &p) { return p.m_Age > 20; }
};

void exFindIf02() {

  vector<Person> v;
  //创建数据
  Person p1("Jhon", 18);
  Person p2("Joe", 38);
  Person p3("Eminem", 50);
  Person p4("Dr.Dree", 55);

  v.push_back(p1);
  v.push_back(p2);
  v.push_back(p3);
  v.push_back(p4);
  auto it = find_if(v.begin(), v.end(), Greater20());
  if (it == v.end()) {
    printf("没找到");
  } else {
    printf("找到大于20岁的第一个人，姓名：%s,年龄%d。\n", it->m_Name.c_str(),
           it->m_Age);
  }
}
//剩下几个都比较简单 我们都试一下

int main() {
  // exFind();
  // findPerson();
  // exfindIf01();
  exFindIf02();
}
