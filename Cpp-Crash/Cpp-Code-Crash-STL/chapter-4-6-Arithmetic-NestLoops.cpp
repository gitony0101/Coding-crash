#include <iostream>
using namespace std;

int main() {
  // nest for loop with do-while loop
  // Sum up the grades and ger the average grade
  int grade, sum = 0; // initialize the grade and sum as 0, if sum is not
                      // initialized, there will be an error.
  for (int i = 0; i < 3; i++) {
    // for loop from 1 to 3 ,increment i by 1
    do { // dowhile loop
      cout << "Enter grade (1-5): " << endl;
      cin >> grade;
    } while (grade < 1 || grade > 5); // tricky part here
    sum += grade;
  }
  cout << "The sum of the grade is :" << sum << endl;
  cout << "The average of the grade is :" << float(sum) / 3.0 << endl;
}
