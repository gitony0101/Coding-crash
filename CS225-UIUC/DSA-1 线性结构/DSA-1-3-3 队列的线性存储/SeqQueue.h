#ifndef SEQQUEUE_H
#define SEQQUEUE_H
//队列的顺序存储，从两端的哪端开始都行

#include <stdio.h>
#include <stdlib.h>
//定义参数
#define MAX_SIZE 1024   //设置数组最大容量
#define SEQQUEUE_TRUE 1 //返回是否为空时调用
#define SEQQUEUE_FALSE 0
//定义顺序队列结构体
typedef struct SEQQUQUE {
  void *data[MAX_SIZE]; //无类型指针
  int size;
} SeqQueue;
//初始化队列
SeqQueue *Init_SeqQueue();
//入队列
void Push_SeqQueue(SeqQueue *queue, void *data);
//返回队头元素
void *Front_SeqQueue(SeqQueue *queue);
//出队操作 牢记队列先进先出的原则，队头元素先出：需要移动元素
void Pop_SeqQueue(SeqQueue *queue);
//返回队尾元素
void *Back_SeqQueue(SeqQueue *queue);
//返回队列大小
int Size_SeqQueue(SeqQueue *queue);
//清空队列
void Clear_SeqQueue(SeqQueue *queue);
//销毁队列
void FreeSpace_SeqQueue(SeqQueue *queue);

#endif
