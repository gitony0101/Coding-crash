#include <cstdio>
#include <iostream>
#include <vector> // vector library
using namespace std;
// native Pointers are iterators,too.
void test_01() {
  int arr[5] = {1, 2, 3, 4, 5};
  int *p = arr;
  for (int i = 0; i < 5; i++) {
    // printf("Value of arr :%d\n", arr[i]);
    // printf("s &d\n", *(p[i]));
    cout << *(p++) << endl;
  }
}

void test_02() {
  vector<int>
      v; // Create a verctor containter,which stores int elements, stands for v
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  // traverse elements
  vector<int>::iterator itBegin =
      v.begin(); // v.begin() Initial iterator, points to the firs element of
                 // the container.
  vector<int>::iterator itEnd = v.end(); // v.end() end iterator,points to the
                                         // next poistion of the last element.
}
// int main() {}
