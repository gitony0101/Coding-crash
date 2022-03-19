#include <iostream>
#include <list> // use the list C++ Standard Template Library (STL)
// #include <string>
using namespace std;

class YoutubeChannel { // Now YoutubeChannel is the base class
private:
  string Name;
  string OwnerName;
  int SubscribersCount;
  list<string> PublishedVideoTitles;

public:
  YoutubeChannel(string name, string ownerName) { // two key parameters here
    Name = name;
    OwnerName = ownerName;
    SubscribersCount = 0;
  }

  // use class method to get the info we entered.
  void getInfo() {

    printf("Name : %s\n", Name.c_str()); // print name,just  Name.c_str()
    printf("Owner Name: %s\n", OwnerName.c_str()); // Similarily
    printf("Number of subscribers : %d\n", SubscribersCount);
    for (auto &videoTitle : PublishedVideoTitles) {
      printf("The %s has %s\n", Name.c_str(), videoTitle.c_str());
    }
  };

  void Subscribe() { SubscribersCount++; } // + 1 subscriber
  void Unsubscribe() {
    if (SubscribersCount > 0) {
      SubscribersCount--;
    } else {
      SubscribersCount = 0;
    }
  }
  // - 1 subscriber with condition
  void PublishVideo(string title) { PublishedVideoTitles.push_back(title); }
};

class CookingYoutubeChannel
    : public YoutubeChannel // ## Inherit YoutubeChannel above ## // Derived
                            // Class, really?
{
public:
  CookingYoutubeChannel(string name,
                        string ownerName) // Inherit the constructors
      : YoutubeChannel(name, ownerName) {}
};

int main() {
  CookingYoutubeChannel cyt_1("CodeBeauty Kitchen", "Saldina");
  cyt_1.getInfo();

  //   yt_1.Subscribe();
  //   yt_1.Subscribe();
  //   yt_1.Subscribe();
  //   yt_1.Unsubscribe();
  //   yt_1.PublishVideo("C++ for beginners");
  //   yt_1.PublishVideo("HTML & CSS for beginners");
  //   yt_1.PublishVideo("C++ OOP beginners");
  //   yt_1.getInfo();
}
