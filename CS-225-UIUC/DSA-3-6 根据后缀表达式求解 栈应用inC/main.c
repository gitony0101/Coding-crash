// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*中缀表达式计算*/
#include "LinkStack.h" //引入链栈头文件
//判断函数
int IsNumber2(char c) { return c >= '0' && c <= '9'; }

//定义数字结构体
typedef struct MYNUM {
  LinkNode node;
  int val;
} MyNum;

//计算器
int Calculate(int left, int right, char c) { // switch表达
  int ret = 0;
  switch (c) {
  case '+':
    ret = left + right;
    break;
  case '-':
    ret = left - right;
  case '*':
    ret = left * right;
  case '/':
    ret = left / right;
  }
  return ret;
};

int main() {
  char *str = "831-5*"; //目标求解中缀表达式
  //创建并初始化链栈
  LinkStack *stack = Init_LinkStack();
  char *p = str;
  while (*p != '\0') { //遍历扫描字符串，\0字符串结束标志
    if (IsNumber2(*p)) {
      MyNum *num = (MyNum *)malloc(sizeof(MyNum));
      num->val = *p - '0';
      Push_LinkStack(stack, (LinkNode *)num);
    } else {
      //弹出右操作数
      MyNum *right = (MyNum *)Top_LinkStack(stack); //取出右操作数
      int rightNum = right->val;                    //取值
      Pop_LinkStack(stack);                         // 弹出
      free(right);                                  //释放内存
      //取出左操作数
      MyNum *left = (MyNum *)Top_LinkStack(stack); //取出右操作数
      int leftNum = left->val;                     //取值
      Pop_LinkStack(stack);                        // 弹出
      free(left);                                  //释放内存

      //根据运算符计算
      int ret = Calculate(leftNum, rightNum, *p); //调用计算器
      //结果入栈
      MyNum *num = (MyNum *)malloc(sizeof(MyNum));
      num->val = ret;
      Push_LinkStack(stack, (LinkNode *)num);
    }
    p++; //往后走的循环先写上
  }
  //如果栈中只有一个元素
  if (Size_LinkStack(stack) == 1) {
    MyNum *num = (MyNum *)Top_LinkStack(stack);
    printf("运算结果：%d\n", num->val);
    Pop_LinkStack(stack);
    free(num);
  }
  //释放栈
  FreeSpace_LinkStack(stack);
  printf("\n");
  return 0;
}
