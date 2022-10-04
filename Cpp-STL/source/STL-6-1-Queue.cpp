#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;

class Person { // 创建人物 类
public:        //外部可调用
  Person(string name, int age) {
    this->m_Name = name;
    this->m_Age = age;
  }
  string m_Name;
  int m_Age;
};

void myQueue() { // Queue 队列容器
  //创建队列
  queue<Person> q;
  // 准备数据
  Person p1("唐僧", 30);
  Person p2("孙悟空", 1000);
  Person p3("猪八戒", 900);
  Person p4("沙僧", 800);

  //入列操作push，像队列中添加元素
  q.push(p1);
  q.push(p2);
  q.push(p3);
  q.push(p4);
  // 队列不提供迭代器，不支持随机访问
  while (!q.empty()) {
    //输出对头元素
    printf("队投头元素 姓名：%s,年龄%d\n", q.front().m_Name.c_str(),
           q.back().m_Age);
    cout << endl;
    //弹出队头元素
    q.pop();
    printf("弹出队投头元素,NOW 姓名：%s,年龄%d,目前队列的大小为%lu\n",
           q.front().m_Name.c_str(), q.back().m_Age, q.size());
  }
}

int main() { myQueue(); }
