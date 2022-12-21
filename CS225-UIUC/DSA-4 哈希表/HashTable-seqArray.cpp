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
  int key;                 //成员编号
  void *data;              //哈希存储单元存储的数据
} HashUnit;

typedef struct _HashTable_Seq {
  HashUnit HashTable[HASH_BUCKET][HASH_SIZE]; //二维数组
  int _HashSize;                              // 哈希桶索引
} HashTable;

int CountArray[HASH_BUCKET]; //全局计数器变量数组
//哈希函数
int Hash(int key, int hash_bucket) { return (key % hash_bucket); }

// 1、初始化哈希表，判定是否可散列
bool HashTableInit(HashTable *hashtable) {
  if (!hashtable)
    return false;
  hashtable->_HashSize = HASH_BUCKET; //将哈希桶的个数传入
  if (!hashtable->HashTable[0]) {     //有点问题
    return false;
  }
  //为每个哈希桶在第[0]位置添加一个记录当前桶中元素个数的计数器
  for (int i = 0; i < HASH_BUCKET; i++) {
    HashUnit Count;
    int *count = &(CountArray[i]);
    Count.data = count;
    Count.key = -(i + 1);
    hashtable->HashTable[i][0] = Count;
  } //计数器的 key 被赋值为 -(i+1) 主要是为了避免与其他存储的数据的
    // key相同。在计数器的 key 值被赋值为负数的情况下，当
    // key值为正数时，可以保证不会被识别为计数器。
    // 另外，当计数器的 key
    //值为负数时，可以通过将 key
    //值的绝对值与哈希桶索引比较来确定元素所在的哈希桶。
  return true;
}
// 2、查找元素是否存在
bool findifthere(HashTable *hashtable, int key) {
  // 1 先找到对应的bucket哈希桶
  int index = Hash(key, hashtable->_HashSize);
  int count =
      *((int *)hashtable->HashTable[index][0].data); //对应桶中元素的个数
  // 2 for 循环查找这个元素
  for (int i = 1; i < count + 1; i++) {
    if (hashtable->HashTable[index][i].key == key) {
      return true;
    }
  }
  return false;
}
// 3、插入元素
void insertHashtable(HashTable *hashtable, int key, void *data) {
  if (!hashtable) {
    return;
  }
  int index = Hash(key, hashtable->_HashSize);
  HashUnit newunit;
  newunit.key = key;
  newunit.data = data;
  bool isExistence = findifthere(hashtable, key);
  if (!isExistence) {
    //找到每个哈希桶的计数器，在当前计数器数量所指向的位置的下一个位置放入元素，然后自增计数器。
    hashtable->HashTable[index]
                        [*((int *)(hashtable->HashTable[index][0].data)) + 1] =
        newunit;
    (*((int *)(hashtable->HashTable[index][0].data)))++;
  } else {
    printf("这个key已经存在。\n");
  }
}

// 4、删除元素
bool deleteHashtable(HashTable *hashtable, int key) {
  if (!hashtable) {
    return false;
  }

  if (findifthere(hashtable, key)) //找到了才能删除
  {
    //找到了，去那拿对应的哈希桶
    int index = Hash(key, hashtable->_HashSize);
    //拿到桶中的元素个数
    int count = *((int *)hashtable->HashTable[index][0].data);
    int i = 1;
    for (i; i < count + 1; i++) {
      if (hashtable->HashTable[index][i].key == key) {
        break;
      }
    }
    //此时的i的位置就是对应key的位置
    for (int j = i; j < count - 1; j++) {
      hashtable->HashTable[index][j] = hashtable->HashTable[index][j + 1];
    }
    //计数器--
    (*((int *)hashtable->HashTable[index][0].data))--;
    return true;
  } else {
    return false;
  }
}
// 5、 清理哈希表
bool cleanHashtable(HashTable *hashtable) {
  if (!hashtable) {
    return false;
  }
  //将每个哈希桶的计数器置为0
  for (int i = 0; i < HASH_BUCKET; i++) {
    *((int *)hashtable->HashTable[i][0].data) = 0;
  }

  return true;
}

//
int main() {
  HashTable *hashtable = new HashTable;
  //初始化
  HashTableInit(hashtable);
  char elem1[] = "李小花";
  char elem2[] = "赵铁柱";
  char elem3[] = "张全蛋";
  char elem4[] = "新二";
  char elem5[] = "小明";
  //插入
  insertHashtable(hashtable, 1, elem1);
  insertHashtable(hashtable, 2, elem2);
  insertHashtable(hashtable, 3, elem3);
  insertHashtable(hashtable, 4, elem4);
  insertHashtable(hashtable, 5, elem5);
  //删除
  bool ret1 = deleteHashtable(hashtable, 1);
  //查找
  bool ret = findifthere(hashtable, 1);
  if (ret) {
    cout << "存在" << endl;
  } else {
    cout << "不存在" << endl;
  }

  //清理
  cleanHashtable(hashtable);
  //销毁
  delete hashtable;
  hashtable = NULL;
  printf("\n");
  return 0;
}
