#include <iostream>
#include <list>
using namespace std;

// Polymorphism with pointers
class YoutubeChannel {
private:
  string Name;
  string OwnerName;
  int SubscribersCount;
  list<string> PublishedVideoTitles;

protected: //  protected inheritance, can be accessed outside.
  string ownerName;
  int ContentQuality;

public:
  YoutubeChannel(string name, string ownerName) {
    Name = name;
    OwnerName = ownerName;
    SubscribersCount = 0;
    ContentQuality = 0;
  }

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
  void PublishVideo(string title) {
    PublishedVideoTitles.push_back(title);
  } // upload video
  void CheckAnalytics() {
    if (ContentQuality < 5)
      printf("%s has bad quality content.\n", Name.c_str());
    else if (ContentQuality > 8)
      printf("%s has good quality content.\n", Name.c_str());
    else
      printf("%s's content is normal.\n", Name.c_str());
    ;
  }
};
// As example of morphism, we would like to creat another class like cooking
// channel

class CookingYoutubeChannel : public YoutubeChannel {

public:
  CookingYoutubeChannel(string name,
                        string ownerName) // Inherit the constructors
      : YoutubeChannel(name, ownerName) {}
  void Practice() {
    printf("%s has just practiced how to make delicious food the in the "
           "channel.\n",
           ownerName.c_str()); // the ownerName can be visited
                               // by protected inheritance
    ContentQuality++;
  }; // the unique feature that the CookinnYoutbeChannel has.
};

// Morph a new class: SingerYoutubeChannel:

class SingerYoutubeChannel : public YoutubeChannel {
protected: //  protected inheritance, can be accessed outside.
  string ownerName;

public:
  SingerYoutubeChannel(string name,
                       string ownerName) // Inherit the constructors
      : YoutubeChannel(name, ownerName) {}
  void Practice() {
    printf("%s has just practiced singing ,dancing the in the channel.\n",
           ownerName.c_str()); // the ownerName can be visited
                               // by protected inheritance
    ContentQuality++;
  };
};

int main() {
  // cooking channel
  CookingYoutubeChannel cytch_1("CodeBeauty Kitchen", "Saldina");
  cytch_1.PublishVideo("Apple Pie");
  cytch_1.PublishVideo("Chocolate Cake");
  cytch_1.Subscribe();
  cytch_1.Subscribe();
  cytch_1.getInfo();
  cytch_1.Practice();
  cytch_1.Practice();
  cytch_1.Practice();
  cytch_1.Practice();
  cytch_1.Practice();
  cytch_1.Practice();
  cytch_1.Practice();
  cytch_1.Practice();
  cytch_1.Practice();
  cytch_1.CheckAnalytics();
  // singer channel
  SingerYoutubeChannel sytch_1("Elton's Voice", "Elton John");
  sytch_1.Practice();
  sytch_1.Practice();
  sytch_1.Practice();
  sytch_1.Practice();
  sytch_1.Practice();
  sytch_1.CheckAnalytics();

  //   // Pointer # Not Work
  //   YoutubeChannel *yt_1 = &CookingYoutubeChannel;
  //   YoutubeChannel *yt_2 = &SingerYoutubeChannel;
  //   yt_1->CheckAnalytics();
  //   yt_2->CheckAnalytics();
}
