// #define _CRT_SECURE_NO_WARNINGS

#include <cstdlib>
#include <random>
#include <stdio.h>
using namespace std;

int main() { // if else
  srand(time(0));
  int rMin, rMax = 0;
  int input_number = 0;
  printf("请输入想猜的数字范围:\n");
  scanf("%d %d", &rMin, &rMax);
  int randNum = (rand() % (rMax - rMin + 1)) + rMin;
  printf("请输入你的数字:\n");
  scanf(" %d", &input_number);
  while (input_number != randNum) {
    if (input_number < randNum) {
      printf("小了\n");
    } else {
      printf("大了\n");
    }
    printf("请重新输入你的数字\n");
    scanf("%d", &input_number);
  }

  printf("\n恭喜你答对了,这个数字就是  %d\n", randNum);
  printf("\n");
  return 0;
}
