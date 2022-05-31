#include <cstdio>
#include <iostream>
#include <list> // use the list C++ Standard Template Library (STL)
using namespace std;

class YoutubeChannel {
public: // corresponding to private, the variables below can be used publicly
  string Name;
  string OwnerName;
  int SubscribersCount;
  list<string> PublishedVideoTitles;
};

int main() {
  YoutubeChannel yt;
  yt.Name = "CodeBeauty";
  yt.OwnerName = "Saldina";
  yt.SubscribersCount = 18000;
  // use push_back() to add a new element to the list
  yt.PublishedVideoTitles.push_back("C++ Crash Course");
  yt.PublishedVideoTitles.push_back("C++ Crash Course Part 2");
  yt.PublishedVideoTitles.push_back("C++ Crash Course Part 3");

  // print the variables with printf()
  printf("Name: %s\n", yt.Name.c_str());
  printf("Owner name : %s\n", yt.OwnerName.c_str());
  printf("Number of subscribers : %d\n", yt.SubscribersCount);
  printf("Published videos : \n");
  for (auto &videoTitle : yt.PublishedVideoTitles) {
    printf("%s\n", videoTitle.c_str());
  }

  // cout << "Youtube Channel Name: " << yt.Name << endl;
  // cout << "OwnerName: " << yt.OwnerName << endl;
  // cout << "videos : " << endl;
  // for (auto video : yt.PublishedVideoTitles) {
  //   cout << video << endl;
  // }
}

class YoutubeChannel {
public: // corresponding to private, the variables below can be used publicly
  string Name;
  string OwnerName;
  int SubscribersCount;
  list<string> PublishedVideoTitles;
};

int main() {
  YoutubeChannel yt;
  yt.Name = "CodeBeauty";
  yt.OwnerName = "Saldina";
  yt.SubscribersCount = 18000;
  // use push_back() to add a new element to the list
  yt.PublishedVideoTitles.push_back("C++ Crash Course");
  yt.PublishedVideoTitles.push_back("C++ Crash Course Part 2");
  yt.PublishedVideoTitles.push_back("C++ Crash Course Part 3");

  // print the variables with printf()
  printf("Name: %s\n", yt.Name.c_str());
  printf("Owner name : %s\n", yt.OwnerName.c_str());
  printf("Number of subscribers : %d\n", yt.SubscribersCount);
  printf("Published videos : \n");
  for (auto &videoTitle : yt.PublishedVideoTitles) {
    printf("%s\n", videoTitle.c_str());
  }
