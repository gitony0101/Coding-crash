// #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
using namespace std;

int main() { // if else
  int price = 0;
  int bill = 0;
  printf("请输入金额:\n");
  scanf("%d", &price);
  printf("请输入票面\n");
  scanf("%d", &bill);
  if (bill >= price) {
    printf("应该找您:%d \n", bill - price);
  } else {
    printf("您的钱不够，还差%d", price - bill);
  }

  printf("\n");
  return 0;
}
