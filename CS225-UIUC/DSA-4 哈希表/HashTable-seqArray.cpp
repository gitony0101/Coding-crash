// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//哈希表顺序存储实现 （数组）
#define HASH_SIZE 50    // 每个 Bucket 大小
#define HASH_BUCKET 128 // Bucket 总数量

typedef struct _HashUnit { //顺序存储的精髓
  int key;
  void *data;
} HashUnit;

int main() {

  printf("\n");
  return 0;
}
