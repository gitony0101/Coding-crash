#include <iostream>
#include <queue>
using namespace std;
#define NUMBER_VERTEX 5
// 边节点定义
typedef struct edgenode {
  int index;
  edgenode *nextEdge;
} edgeNode, *peNode;
//定点节点定义
typedef struct vertexnode {
  char data;
  edgeNode *firstEdge;
} vertexNode;
//邻接表定义
// typedef struct adjTable
// {
// 	vertexNode adjGraph[NUMBER_VERTEX];
//  int vertexNumber;
//  int edgeNumber;
// };
//定义一个是否已经访问过的标志数组,0表示没访问过
int visited[NUMBER_VERTEX] = {
    0}; //这里为了简化结构写成全局变量，也可把他作为结构体的一部分；
//清空标志位visited;
void clearflag(void) {
  for (int i = 0; i < NUMBER_VERTEX; i++) {
    visited[i] = 0;
  }
}
//访问某个图的几号顶点
void visit(vertexNode *pVertex, int index) {
  cout << (pVertex + index)->data;
  visited[index] = 1;
}
//连通图的广度优先搜索
void bfs_connect(vertexNode *pVertex, int index) {
  visit(pVertex, index);
  //访问入口顶点
  queue<int> q; //存储顶点的编号
  q.push(index);
  while (!q.empty()) {
    int cur = q.front();
    q.pop();
    //查找所有cur顶点的未被访问的邻接点
    peNode temp = (pVertex + cur)->firstEdge;
    while (temp != NULL) {
      int num_nextedge = temp->index;
      if (visited[num_nextedge] == 0) {
        visit(pVertex, num_nextedge);
        q.push(num_nextedge);
      }
      temp = temp->nextEdge;
    }
  }
}
//整个图的广度优先搜索
void bfs(vertexNode *pVertex, int index) {
  bfs_connect(pVertex, index);
  // 遍历每一个连通分量
  for (int i = 0; i < NUMBER_VERTEX; i++) {
    if (visited[i] == 0) {
      bfs_connect(pVertex, i);
    }
  }
}
int main(void) {
  //图的创建
  edgeNode e14 = {3, NULL};
  edgeNode e13 = {2, &e14};
  edgeNode e12 = {1, &e13};

  edgeNode e25 = {4, NULL};
  edgeNode e24 = {3, &e25};
  edgeNode e21 = {0, &e24};

  edgeNode e35 = {4, NULL};
  edgeNode e31 = {0, &e35};

  edgeNode e45 = {4, NULL};
  edgeNode e42 = {1, &e45};
  edgeNode e41 = {0, &e42};

  edgeNode e54 = {3, NULL};
  edgeNode e53 = {2, &e54};
  edgeNode e52 = {1, &e53};
  vertexNode adjGraph[NUMBER_VERTEX] = {
      {'1', &e12}, {'2', &e21}, {'3', &e31}, {'4', &e41}, {'5', &e52},
  };
  //广度优先搜索遍历无向连通图
  bfs(adjGraph, 0);
  cout << endl;
  clearflag();
  bfs(adjGraph, 4);
  cout << endl;
  return 0;
}
// #define _CRT_SECURE_NO_WARNINGS
// #include <cstdio>
// #include <iostream>
// #include <queue> //便利访问使用队列记录节点
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// using namespace std;
// //邻接表 详情见同目录下图 邻接表
// //数组实现
// #define N 5 //预定义顶点数

// //定义结构体 邻接表中两类结构：边结构、顶点结构
// //边结构
// typedef struct edgenode { //定义边结构体
//   int index;
//   edgenode *next;
// } edgeNode, *peNode;

// typedef struct vertexnode { //定义顶点结构体
//   char index;               //节点类型 char？？
//   edgeNode *firstEdge; // firstEdge应该是边结构体 edgeNode 的指针类型
// } vertexNode;
// //结构体定义完成
// //遍历 BFS 广度优先搜索
// // 使用队列记录遍历节点
// int visited[N] = {0}; //简化结构体写成了全局变量，也可作为结构体的一部分
// //清空标识为visited
// void clearflag(void) {
//   for (int i = 0; i < N; i++) {
//     visited[i] = 0;
//   }
// }
// //访问某个图的几号顶点
// void visit(vertexNode *pVertex, int index) {
//   printf("%d", (pVertex + index)->index);
//   visited[index] = 1;
// }

// //连通图的广度优先搜索
// void bfs_connect(vertexNode *pVertex, int index) {
//   visit(pVertex, index);
//   //访问入口顶点
//   queue<int> q;
//   q.push(index);
//   while (!q.empty()) {
//     int cur = q.front();
//     peNode temp = (pVertex + cur)->firstEdge;
//     while (temp != NULL) {
//       int num_nextedge = temp->index;
//       if (visited[num_nextedge] == 0) {
//         visit(pVertex, num_nextedge);
//         q.push(num_nextedge);
//       }
//       temp = temp->next;
//     }
//   }
// }
// //整个图的广度优先搜索

// void bfs(vertexNode *pVertex, int index) {
//   bfs_connect(pVertex, index);
//   //遍历每一个连通分量
//   for (int i = 0; i < N; i++) {
//     if (visited[i] == 0) {
//       bfs_connect(pVertex, i);
//     }
//   }
// }

// int main(void) {
//   //图的创建
//   edgeNode e14 = {3, NULL};
//   edgeNode e13 = {2, &e14};
//   edgeNode e12 = {1, &e13};

//   edgeNode e25 = {4, NULL};
//   edgeNode e24 = {3, &e25};
//   edgeNode e21 = {0, &e24};

//   edgeNode e35 = {4, NULL};
//   edgeNode e31 = {0, &e35};

//   edgeNode e45 = {4, NULL};
//   edgeNode e42 = {1, &e45};
//   edgeNode e41 = {0, &e42};

//   edgeNode e54 = {3, NULL};
//   edgeNode e53 = {2, &e54};
//   edgeNode e52 = {1, &e53};
//   vertexNode adjGraph[N] = {
//       {'1', &e12}, {'2', &e21}, {'3', &e31}, {'4', &e41}, {'5', &e52},
//   };
//   //广度优先搜索遍历无向连通图
//   bfs(adjGraph, 0);
//   cout << endl;
//   clearflag();
//   bfs(adjGraph, 4);
//   cout << endl;
//   return 0;
// }
