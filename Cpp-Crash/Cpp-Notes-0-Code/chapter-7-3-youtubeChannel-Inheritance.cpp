#include <cstdio>
#include <iostream>
#include <list> // use the list C++ Standard Template Library (STL)
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
}; // upload video

class CookingYoutubeChannel
    : public YoutubeChannel // ## Inherit YoutubeChannel above ## // Derived
                            // Class, really?
{
protected: //  protected inheritance, can be accessed outside.
  string ownerName;

public:
  CookingYoutubeChannel(string name,
                        string ownerName) // Inherit the constructors
      : YoutubeChannel(name, ownerName) {}
  void Practice(string fans, string course) {
    printf("%s has just practiced the %s in the channel %s.\n", fans.c_str(),
           course.c_str(), ownerName.c_str()); // the ownerName can be visited
                                               // by protected inheritance
  }; // the unique feature that the CookinnYoutbeChannel has.
};

int main() {
  CookingYoutubeChannel cyt_1("CodeBeauty Kitchen", "Saldina");
  cyt_1.PublishVideo("Apple Pie");
  cyt_1.PublishVideo("Chocolate Cake");
  cyt_1.Subscribe();
  cyt_1.Subscribe();
  cyt_1.getInfo();
  cyt_1.Practice("Amy", "pizza");
}
