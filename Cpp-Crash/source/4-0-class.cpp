#include <cstdio>
#include <iostream>
#include <list> // STL 链表
using namespace std;

/*
class 类方法
*/

class YoutubeChannel { //定义油管频道类
private:
  string Name; //
  string OwnerName;
  int SubscribersCount;
  list<string> PublishedVideoTitles;

public: // 公共变量，外部可访问
  youtubeChannel(string Name, string OwnerName) {
    Name = name;
    OwnerName = ownerName;
  };
  // string Name;                       // 设定up主名称
  // string OwnerName;                  // Up主所有人账户名
  // int SubscribersCount;              // 订阅量
  // list<string> PublishedVideoTitles; //初始化链表
};

// void yt01() {
//   YoutubeChannel yt01;
//   yt01.Name = "Avengers";
//   yt01.OwnerName = "Tony";
//   yt01.SubscribersCount = 10000;
//   //   list<string> names{"A", "B", "C", "D", "E"}; 为什么这样会报错？
//   yt01.PublishedVideoTitles.push_back("Avengers: Endgame"); //添加节目
//   yt01.PublishedVideoTitles.push_back("Avengers: Infinity War");
//   yt01.PublishedVideoTitles.push_back("Avengers: Age of Ultron");
//   yt01.PublishedVideoTitles.push_back("Avengers: The Initiative");

//   //打印yt01的信息
//   printf("Up主所有人姓名：%s\nUp主名称：%s\n订阅量：%d\n频道下节目:\n",
//          yt01.Name.c_str(), yt01.OwnerName.c_str(), yt01.SubscribersCount);
//   // 打印节目名称
//   for (auto title = yt01.PublishedVideoTitles.begin();
//        title != yt01.PublishedVideoTitles.end(); title++) //
//        循环起来啊，别忘了
//     printf("%s\n", title->c_str());
// }

// int main() {
//   // class 类方法 打印
//   yt01(); // class 类方法 打印
// };

// ```cpp

//     class YoutubeChannel {
// private: // The data members should be labeled as private using the private
//          // access specifiers
//   string Name;
//   string OwnerName;
//   int SubscribersCount;
//   list<string> PublishedVideoTitles;

// public: // The member function which manipulates the data members should be
//         // labeled as public using the public access specifier
//   YoutubeChannel(string name, string ownerName) { // two key parameters here
//     Name = name;
//     OwnerName = ownerName;
//     SubscribersCount = 0;
//   };

//   // use class method to get the info we entered.
//   void getInfo() {

//     printf("Name : %s\n", Name.c_str()); // print name,just  Name.c_str()
//     printf("Owner Name: %s\n", OwnerName.c_str()); // Similarily
//     printf("Number of subscribers : %d\n", SubscribersCount);
//     for (auto &videoTitle : PublishedVideoTitles) {
//       printf("The %s has %s\n", Name.c_str(), videoTitle.c_str());
//     }
//   };

//   void Subscribe() { SubscribersCount++; } // + 1 subscriber
//   void Unsubscribe() {
//     if (SubscribersCount > 0) {
//       SubscribersCount--;
//     } else {
//       SubscribersCount = 0;
//     }
//   }
//   // - 1 subscriber with condition
//   void PublishVideo(string title) { PublishedVideoTitles.push_back(title); };

int main() {
  YoutubeChannel yt_1("CodeBeauty", "Saldina");
  // yt_1.Subscribe();
  // yt_1.Subscribe();
  // yt_1.Subscribe();
  // yt_1.Unsubscribe();
  // yt_1.PublishVideo("C++ for beginners");
  // yt_1.PublishVideo("HTML & CSS for beginners");
  // yt_1.PublishVideo("C++ OOP beginners");
  // yt_1.getInfo();
}
