#include <cstdio>
#include <iostream>
using namespace std;

// void addTwo(int *const); 为什么要先写这俩函数，重载么？
// void addThree(int &);

void addTwo(int *const number) { *number += 2; }
void addThree(int &number) { number += 3; }
int main() {
  int num = 13;
  printf("num 的值为:%d,内存地址%p\n", num, &num);
  addTwo(&num);
  printf("addTwo(&num) 的值为:%d,内存地址%p\n", num, &num); //传指针，+2
  addThree(num);
  printf("addThree(num) 的值为:%d,内存地址%p\n", num, &num); //传引用 +3
}
