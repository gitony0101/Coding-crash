// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//邻接表

int main() {}
//
// 链式前向星 越后面的数据，节点反而排在前面
// //数组实现

// const int N = 500; //节点数最大值
// int n;             //节点数
// int head, idx;     //头节点的信息

// struct Edge {      //创建边的结构体
//   int to, next, w; //下一个节点，下一条边，权重
// } edge[N];         // 创建邻接表结构体

// void init() {
//   head = -1;
//   idx = 1;
// }

// void addEdge(int b, int w) {
//   edge[idx].w = w;  //权重
//   edge[idx].to = b; // 目的节点
//   edge[idx].next = head;
//   head = idx; //头指向当前节点，更新索引
//   idx++;
// }

// void traverse() {}

// int main() {
//   scanf("%d", &n);
//   int m = n - 1;
//   while (m--) {
//     int to, w;
//     scanf("%d %d", &to, &w);
//     addEdge(to, w);
//   }

//   printf("\n");
//   return 0;
// }
