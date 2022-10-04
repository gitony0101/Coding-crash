#ifndef SEQSTACK_H
#define SEQSTACK_H
/*用数组去模拟栈的顺序存储
不能遍历，所以无法打印*/
//定义参数
#define MAX_SIZE 1024   //设置数组最大容量
#define SEQSTACK_TRUE 1 //返回是否为空时调用
#define SEQSTACK_FALSE 0
//定义结构体
typedef struct SEQSTACK {
  void *data[MAX_SIZE]; //任何类型的数组最大容量MAX_SIZE
  int size;             //初始化容量数值
} SeqStack;

//初始化栈
SeqStack *Init_SeqStack();
//入栈
void Push_SeqStack(SeqStack *stack, void *data);
//返回栈顶元素
void *Top_SeqStack(SeqStack *stack);
//出栈 删除栈顶
void Pop_SeqStack(SeqStack *stack);
//判断是否为空 注意输出类型
int IsEmpty(SeqStack *stack);
//返回栈中元素的个数
int Size_SeqStack(SeqStack *stack);
//清空栈
void Clear_SeqStack(SeqStack *stack);
//销毁 释放内存
void FreeSpace_SeqStack(SeqStack *stack);

#endif
