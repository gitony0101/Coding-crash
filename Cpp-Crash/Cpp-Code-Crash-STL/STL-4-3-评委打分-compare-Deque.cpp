#include <algorithm>
#include <cstdio>
#include <deque>
#include <iostream>
using namespace std;

// 评委打分 自己做的版本
void printDeque(const deque<float> &d) {
  for (deque<float>::const_iterator it = d.begin(); it != d.end(); it++) {
    printf("%lf\n", *it); // %lf format specifier for float
  }
  cout << endl;
}

bool mycompare(float v1, float v2) { return v1 < v2; }

void gradePlayer() {
  //  创建评委打分
  float gradeList[] = {7.8, 8.3, 8.6, 8.6, 8.7, 8.5, 9, 8.9, 8.9};
  deque<float> grade;
  grade =
      deque<float>(gradeList, gradeList + sizeof(gradeList) / sizeof(float));
  //   grade.push_back(7.8);
  //   grade.push_back(8.3);
  //   grade.push_back(8.6);
  //   grade.push_back(8.6);
  //   grade.push_back(8.7);
  //   grade.push_back(8.5);
  //   grade.push_back(9);
  //   grade.push_back(8.9);
  //   grade.push_back(8.9);
  //   cout << sizeof(float) << endl;

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
*/

int main() { gradePlayer(); }
