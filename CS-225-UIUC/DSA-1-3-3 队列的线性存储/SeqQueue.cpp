#include "SeqQueue.h"
#include <cstddef>

//初始化队列
SeqQueue *Init_SeqQueue() {
  SeqQueue *queue = (SeqQueue *)malloc(sizeof(SeqQueue));
  for (int i = 0; i < MAX_SIZE; i++) {
    queue->data[i] = NULL; //初始化元素都为NULL
  }
  queue->size = 0;
  return queue;
};
//入队列
void Push_SeqQueue(SeqQueue *queue, void *data) { //防呆预判
  if (queue == NULL) {
    return;
  }
  if (data == NULL) { // 数据也要判断
    return;
  }
  if (queue->size == MAX_SIZE) {
    return;
  }
  //例如 数组左边当队头，那么在尾部添加元素
  queue->data[queue->size] = data;
  queue->size++;
};
//返回队头元素
void *Front_SeqQueue(SeqQueue *queue) {
  if (queue == NULL) {
    return NULL;
  }
  if (queue->size == 0) {
    return NULL;
  }
  //数组左边当队头，data[0]为第一个元素
  return queue->data[0];
};
//出队操作 牢记队列先进先出的原则，队头元素先出：需要移动元素
void Pop_SeqQueue(SeqQueue *queue) {
  if (queue == NULL) {
    return;
  }
  if (queue->size == 0) {
    return;
  }
  for (int i = 0; i < queue->size - 1; i++) {
    queue->data[i] = queue->data[i + 1]; //前一位等于后一位的数值实现了移动元素
  }
  queue->size--;
};
//返回队尾元素
void *Back_SeqQueue(SeqQueue *queue) {
  if (queue == NULL) {
    return NULL;
  }
  if (queue->size == 0) {
    return NULL;
  }
  return queue->data[queue->size - 1]; //此处不要忘了减一
};
//返回队列大小
int Size_SeqQueue(SeqQueue *queue) {
  if (queue == NULL) {
    return -1;
  }
  return queue->size;
};
//清空队列
void Clear_SeqQueue(SeqQueue *queue) {
  if (queue == NULL) {
    return;
  }
  queue->size = 0;
};
//销毁队列
void FreeSpace_SeqQueue(SeqQueue *queue) {
  if (queue == NULL) {
    return;
  }
  free(queue);
};
