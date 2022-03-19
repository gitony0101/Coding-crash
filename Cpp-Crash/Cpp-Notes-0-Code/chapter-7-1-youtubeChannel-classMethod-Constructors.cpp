#include <cstdio>
#include <iostream>
#include <list> // use the list C++ Standard Template Library (STL)
#include <string>
using namespace std;

class YoutubeChannel {
public: // corresponding to private, the variables below can be used publicly
  string Name;
  string OwnerName;
  int SubscribersCount;
  list<string> PublishedVideoTitles;
  // Build the constructor inside the clasee
  YoutubeChannel(string name, string ownerName) { // two key parameters here
    Name = name;
    OwnerName = ownerName;
    SubscribersCount = 0;
  }
  // use class method
  void getInfo() {}
};

int main() {
  YoutubeChannel yt_1("CodeBeauty", "Saldina");
  yt_1.PublishedVideoTitles.push_back("C++ for beginners");
  yt_1.PublishedVideoTitles.push_back("HTML & CSS for beginners");
  yt_1.PublishedVideoTitles.push_back("C++ OOP for beginners");

  // printf
  printf("Name : %s\n", yt_1.Name.c_str());
  printf("Owner Name: %s\n", yt_1.OwnerName.c_str());
  printf("Number of subscribers : %d\n", yt_1.SubscribersCount);
  for (auto &videoTItle : yt_1.PublishedVideoTitles) {
    printf("The %s has %s\n", yt_1.Name.c_str(), videoTItle.c_str());
  }

  YoutubeChannel yt_2("Sigur Ros", "Jonsi and his bands.");
  yt_2.PublishedVideoTitles.push_back("Hopipolla");
  yt_2.PublishedVideoTitles.push_back("Heima");

  printf("Name : %s\n", yt_2.Name.c_str());
  printf("Owner Name: %s\n", yt_2.OwnerName.c_str());
  printf("Number of subscribers : %d\n", yt_2.SubscribersCount);
  for (auto &videoTItle : yt_2.PublishedVideoTitles) {
    printf("The %s has %s\n", yt_2.Name.c_str(), videoTItle.c_str());
  }
}
// void Getinfo() {}

// int main() {
//   YoutubeChannel yt;
//   yt.Name = "CodeBeauty";
//   yt.OwnerName = "Saldina";
//   yt.SubscribersCount = 18000;
//   // use push_back() to add a new element to the list
//   yt.PublishedVideoTitles.push_back("C++ Crash Course");
//   yt.PublishedVideoTitles.push_back("C++ Crash Course Part 2");
//   yt.PublishedVideoTitles.push_back("C++ Crash Course Part 3");

//   // print the variables with printf()
//   printf("Name: %s\n", yt.Name.c_str());
//   printf("Owner name : %s\n", yt.OwnerName.c_str());
//   printf("Number of subscribers : %d\n", yt.SubscribersCount);
//   printf("Published videos : \n");
//   for (auto &videoTitle : yt.PublishedVideoTitles) {
//     printf("%s\n", videoTitle.c_str());
//   }
// }
