#include <cstdio>
#include <iostream>
#include <list> // STL 链表
using namespace std;

/*
class 类方法

*/

class YoutubeChannel {               //定义油管频道类
public:                              // 公共变量，外部可访问
  string Name;                       // 设定up主名称
  string OwnerName;                  // Up主所有人账户名
  int SubscribersCount;              // 订阅量
  list<string> PublishedVideoTitles; //初始化链表
};

void yt01() {
  YoutubeChannel yt01;
  yt01.Name = "Avengers";
  yt01.OwnerName = "Tony";
  yt01.SubscribersCount = 10000;
  //   list<string> names{"A", "B", "C", "D", "E"}; 为什么这样会报错？
  yt01.PublishedVideoTitles.push_back("Avengers: Endgame"); //添加节目
  yt01.PublishedVideoTitles.push_back("Avengers: Infinity War");
  yt01.PublishedVideoTitles.push_back("Avengers: Age of Ultron");
  yt01.PublishedVideoTitles.push_back("Avengers: The Initiative");
  //打印yt01的信息
  printf("Up主所有人姓名：%s\nUp主名称：%s\n订阅量：%d\n频道下节目:\n",
         yt01.Name.c_str(), yt01.OwnerName.c_str(), yt01.SubscribersCount);
  // 打印节目名称
  for (auto title = yt01.PublishedVideoTitles.begin();
       title != yt01.PublishedVideoTitles.end(); title++) // 循环起来啊，别忘了
    printf("%s\n", title->c_str());
}

int main() { yt01(); }
