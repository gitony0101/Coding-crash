// #define _CRT_SECURE_NO_WARNINGS
#include <cstddef>
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

// #include "hash_table.h"
//哈希链表算法实现
#define DEFAULT_SIZE 16 //索引数组的大小
//定义哈希链表数据结构
typedef struct _ListNode {
  struct _ListNode *next; //链式存储的精髓——连接节点
  int key;
  void *data;
} ListNode;

typedef ListNode *List;    // 定义链表
typedef ListNode *Element; //定义元素

typedef struct _HashTable {
  int TableSize;
  List *Thelists;
} HashTable;
//哈希链表定义完毕
//定义哈希函数： 根据key求余计算索引，定位Hash桶的位置
int Hash(int key, int TableSize) { return (key % TableSize); }
//下面开始定义各种哈希表函数
// 1、初始化哈希表
HashTable *InitHash(int TableSize) {
  //函数返回值，结构体类型（参数：哈希表的大小）
  int i = 0;
  HashTable *hTable = NULL;
  if (TableSize <= 0) { //防呆
    TableSize = DEFAULT_SIZE;
  }
  hTable = (HashTable *)malloc(TableSize); // 开内存 C 法
  //   hTable = new HashTable(TableSize);
  if (hTable == NULL) { //定义哈希表指针，值设置（NULL）
    printf("HashTable malloc error\n");
    return NULL;
  }
  hTable->TableSize = TableSize; // 指定哈希表尺寸
  //为hash 桶分配内存空间，其为一个指针数组
  hTable->Thelists = (List *)malloc(sizeof(List) * TableSize);
  if (hTable->Thelists == NULL) {
    printf("HashTable malloc error\n");
    free(hTable);
    return NULL;
  }
  // 为Hash桶 对应的指针数组初始化链表节点
  for (int i = 0; i < TableSize; i++) {
    hTable->Thelists[i] = (ListNode *)malloc(sizeof(ListNode));
    if (hTable->Thelists[i] == NULL) {
      printf("HashTable malloc error\n");
      free(hTable->Thelists);
      free(hTable);
      return NULL;
    } else {
      memset(hTable->Thelists[i], 0, sizeof(ListNode));
    }
  }
  return hTable;
}
// 2、从哈希表中根据简直查找元素
Element Find(HashTable *HashTable, int key) {
  int i = 0;
  List listCur = NULL;
  Element elementCur = NULL;
  i = Hash(key, HashTable->TableSize);
  elementCur = listCur->next;
  while (elementCur != NULL && elementCur->key != key) {
    elementCur = elementCur->next; // 向前移动一位，直到找到或者本身为NULL
  }
  return elementCur; //返回当前节点值
}
// 3、插入元素，元素应为键值对
void Insert(HashTable *HashTable, int key, void *value) {
  Element elementCur, tmp = NULL;
  List listCur = NULL;
  elementCur = Find(HashTable, key);
  if (elementCur == NULL) {
    tmp = (Element)malloc(sizeof(Element));
    if (tmp == NULL) {
      printf("Malloc error.\n");
      return;
    } else { //插入元素，断键交换重连
      listCur = HashTable->Thelists[Hash(key, HashTable->TableSize)];
      tmp->data = value;
      tmp->key = key;
      tmp->next = listCur->next;
      listCur->next = tmp;
    }
  } else { // 插不进去，说明已经存在
    printf("The key exists already.\n");
  }
}
// 4、删除哈希表元素，元素应为键值对
void Delete(HashTable *HashTable, int key) {
  Element elementCur, elementLast = NULL;
  List listCur = NULL;
  int i = Hash(key, HashTable->TableSize);
  listCur = HashTable->Thelists[i];
  elementLast = listCur;
  elementCur = listCur->next;
  while (elementCur != NULL && elementCur->key != key) { //找这个节点
    elementLast = elementCur;
    elementCur = elementCur->next;
  }                                       //到此找到了，开始删除
  if (elementCur) {                       //如果键值对存在
    elementLast->next = elementCur->next; //断键重连
    delete (elementCur);                  //删除节点
  }
}
// 5、哈希表元素中提取数据
void *Retrieve(Element elementCur) {
  return elementCur ? elementCur->data : NULL; //三元
}
// 6、销毁哈希表
void Destroy(HashTable *HashTable) {
  int i = 0;
  Element pCur, pNext = NULL;
  List listCur = NULL;
  for (i = 0; i < HashTable->TableSize; i++) {
    listCur = HashTable->Thelists[i];
    pCur = listCur->next;
    while (pCur != NULL) {
      pNext = pCur->next;
      free(pCur);
      pCur = pNext;
    }
    free(listCur);
  }
  free(HashTable->Thelists);
  free(HashTable);
}

//
int main() {
  string elems[] = {"张三", "李四", "王五"};
  int i = 0;
  HashTable *HashTable;
  HashTable = InitHash(31);
  // Insert(HashTable, 1, elems[0]);
  Insert(HashTable, 1, &elems[0]); // 加上了引用&
  Insert(HashTable, 2, &elems[1]);
  Insert(HashTable, 3, &elems[2]);
  Delete(HashTable, 1);

  printf("\n");
  return 0;
}
