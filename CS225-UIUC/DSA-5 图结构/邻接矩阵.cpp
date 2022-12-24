// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

// 图结构 邻接矩阵
const int N = 500, INF = 666; //设定矩阵的最大值 和极大值 1e9

int n, m;    // n 表示节点数量，m表示边的数量
int g[N][N]; //图的信息

void initGraph() { //初始化邻接矩阵函数
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      if (i == j) {
        g[i][j] = 0;
      } else {
        g[i][j] = INF;
      }
    }
  }
}

int main() {
  printf("请输入节点数n和边数m。\n");
  scanf("%d %d", &n, &m);
  initGraph(); //初始化邻接矩阵
  while (m--) {
    int x, y, w; // w应该是权重的意思
    scanf("%d %d %d", &x, &y, &w);
    g[x][y] = min(g[x][y], w); //防止重边
  }
  printf("\n下面开始打印\n");
  for (int i = 0; i <= n; i++) { //遍历打印
    for (int j = 0; j <= n; j++) {
      printf("%d ", g[i][j]);
    }
    puts("");
  }

  printf("\n");
  return 0;
}
//写入每个来自空终止字符串 str 的字符及附加换行符 '\n' 到输出流 stdout
//，如同以重复执行 std::putc 写入。不写入来自 str 的空终止字符。
