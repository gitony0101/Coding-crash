// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include "SeqQueue.h"

typedef struct PERSON {
  char name[64];
  int age;
} Person;

int main() {
  //创建顺序队列
  SeqQueue *queue = Init_SeqQueue();
  //创建数据
  Person p1 = {
      "aaa",
      10,
  };
  Person p2 = {
      "bbb",
      20,
  };
  Person p3 = {
      "ccc",
      30,
  };
  Person p4 = {
      "ddd",
      40,
  };
  Person p5 = {
      "eee",
      50,
  };

  Push_SeqQueue(queue, &p1);
  Push_SeqQueue(queue, &p2);
  Push_SeqQueue(queue, &p3);
  Push_SeqQueue(queue, &p4);
  Push_SeqQueue(queue, &p5);
  //输出队尾元素
  Person *backPerson = (Person *)Back_SeqQueue(queue);
  printf("队尾人员的姓名： %s。年龄：%d\n", backPerson->name, backPerson->age);
  //输出：访问并打印，弹出队头元素
  while (Size_SeqQueue(queue) > 0) {
    //访问队头
    Person *person = (Person *)Front_SeqQueue(queue);
    printf("姓名： %s。年龄：%d\n", person->name, person->age);
    //弹出队头
    Pop_SeqQueue(queue);
  }
  //释放内存
  FreeSpace_SeqQueue(queue);
  printf("\n");
  return 0;
}
