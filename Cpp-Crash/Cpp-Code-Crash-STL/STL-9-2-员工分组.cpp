#include <cstdio>
#include <iostream>
#include <utility>
using namespace std;
#include <ctime>
#include <map>
#include <string>
#include <vector>

/*
 * 公司今天招聘了10个员工（ABCDEFGHIJ）
10名员工进入公司之后，需要指派员工在那个部门工作：

员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
随机给10名员工分配部门和工资

通过multimap进行信息的插入  key(部门编号) value(员工)
分部门显示员工信息
 */

/*实现步骤
1. 创建10名员工，放到vector中
2. 遍历vector容器，取出每个员工，进行随机分组
3. 分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
4. 分部门显示员工信息
*/

#define CEHUA 0  // 定义策划部门为0
#define MEISHU 1 // 定义美术部门为1
#define YANFA 2  //定义研发部门为2

class Worker {
public:
  string m_Name;
  int m_Salray;
};
//创建员工
void createWorker(vector<Worker> &v) { //看清楚了这里定义了v
  string nameSeed = "ABCDEFGHIJ";
  for (int i = 0; i < 10; i++) {
    Worker worker;
    worker.m_Name = "员工";
    worker.m_Name += nameSeed[i];
    // 定义薪水 10000 ~ 19999
    worker.m_Salray = rand() % 10000 + 10000;
    //将员工放入到Woker vector 容器中
    v.push_back(worker);
    ;
  }
}

//员工分组
void setGroup(vector<Worker> &v, multimap<int, Worker> &m) {
  for (auto it = v.begin(); it != v.end(); it++) {
    //产生随机部门编号
    int deptId = rand() % 3; // 此处生成0 1 2 随机数
    // 将员工插入到分组中，部门编号： key， 具体员工 ： value
    m.insert(make_pair(deptId, *it));
  }
}

// 分组显示员工

int main() {
  // 1、创建5名员工
  vector<Worker> vWorker;
  createWorker(vWorker);
  // for (auto it = vWorker.begin(); it != vWorker.end(); it++) { // 调试
  //   printf("%s %d\n", it->m_Name.c_str(), it->m_Salray);
  // 2、 员工分组
  multimap<int, Worker> mWorker;
  setGroup(vWorker, mWorker);
}
