#include <algorithm>
#include <cstddef>
#include <cstdio>
#include <deque>
#include <iostream>
#include <vector>

using namespace std;

// 评委打分 自己做的版本
void printDeque(const deque<float> &d) {
  for (deque<float>::const_iterator it = d.begin(); it != d.end(); it++) {
    printf("%lf\n", *it); // %lf format specifier for float
  }
  cout << endl;
}

bool mycompare(float v1, float v2) { return v1 < v2; }

void gradePlayer0() {
  //  创建评委打分
  float gradeList[] = {7.8, 8.3, 8.6, 8.6, 8.7, 8.5, 9, 8.9, 8.9};
  deque<float> grade;
  grade =
      deque<float>(gradeList, gradeList + sizeof(gradeList) / sizeof(float));

  printf("选手得分如下：\n");
  printDeque(grade);
  //去掉最高分和最低分
  sort(grade.begin(), grade.end(), mycompare);
  grade.pop_front();
  grade.pop_back();
  printf("去掉最高分和最低分:\n");
  printDeque(grade);
  //求平均值：迭代器累加
  float totalScore = 0;
  for (deque<float>::const_iterator it = grade.begin(); it != grade.end();
       it++) {
    totalScore += *it;
  }
  float finalAvg = totalScore / grade.size();
  printf("最终平均分：%f\n", finalAvg);
}

/*
有5名选手：选手BCDE,10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
1.创建五名选手，放到vector中
2.遍历vector容器，取出来每一个选手，
执行for循环，可以把10个评分打分存到deque容器中
3.sort算法对deque容器中分数排序，pop_back pop_.front去除最高和最低分
4.
deque容器遍历一遍，累加分数，累加分数/d.size()
5.person.score=平均分
# 注意请好好看左边的数据func
# 随机数种子

*/

// 创建选手类：
class Person {
public:
  string m_Name; // 定义姓名
  int m_Score;   // 定义平均分
  Person(string name, int score) {
    this->m_Name = name;
    this->m_Score = score;
  }
};

// void createPerson(vector<Person> &v) {
//   string namePool = 'ABCDE';
//   for (int i = 0; i < 5; i++) {
//     string name = "选手";
//     name += namePool[i];
//     int score = 0;
//     Person p(name, score); // 构建每个选手的显示样式
//                            // 将创建的person对象， 放入到容器中去
//     v.push_back(p);
//   }
// }

void createPerson(vector<Person> &v) { // 1、创建五名选手ABCDE v ? &v?
  // 这里还真的是 &v,不然下面打印不出来这个循环
  string nameSeed = "ABCDE";
  for (int i = 0; i < 5; i++) {
    string name = "选手";
    name += nameSeed[i];

    int score = 0;

    Person p(name, score);

    //将创建的person对象 放入到容器中
    v.push_back(p);
  }
}

int main() {
  // gradePlayer0(); // 自选测试版本
  // 随机数种子
  //   srand((unsigned int)time(NULL));
  // 1、创建五名选手ABCDE
  vector<Person> v;
  createPerson(v);
  // ##测试创建出来的五名选手，然后把这里注释掉，这是一种撸代码的方法，成了就成了这里
  for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
    printf("姓名: %s, 分数： %d\n", (*it).m_Name.c_str(), (*it).m_Score);
  }
}
