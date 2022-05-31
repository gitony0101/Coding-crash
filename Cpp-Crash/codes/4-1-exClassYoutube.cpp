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
  yt01.PublishedVideoTitles.push_back("Avengers: Endgame");
  yt01.PublishedVideoTitles.push_back("Avengers: Infinity War");
  yt01.PublishedVideoTitles.push_back("Avengers: Age of Ultron");
  yt01.PublishedVideoTitles.push_back("Avengers: The Avengers");
  yt01.PublishedVideoTitles.push_back("Avengers: The Initiative");
  //打印yt01的信息
}

int main() {}
