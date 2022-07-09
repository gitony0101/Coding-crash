// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// using namespace std;//先注释掉，换成C了
#include "LinkStack.h"

/*
c++类型更严格一些
比如字符串字面量c是char*（但是你不能改，改了就爆炸，这算标准bug），c++就是char
const*
*/

//判断函数
int IsNumber(char c) { //判断是否是数字， 也有库 isdigit
  return c >= '0' && c <= '9';
}
int IsLeft(char c) { //判断是不是左括号
  return c == '(';
}
int IsRight(char c) { //判断是不是右括号
  return c == ')';
}
int IsOperator(char c) { // 判断是不是运算符号
  return c == '+' || c == '-' || c == '*' || c == '/';
}
//返回运算符号优先级：预先设定乘除是2，加减是1，括号我们认为是0；
int GetPriority(char c) {
  if (c == '*' || c == '/') {
    return 2;
  }
  if (c == '+' || c == '-') {
    return 1;
  }

  return 0; //剩下一种情况就是括号了，直接return 0；
}

//这些判断函数，可以在if中配合使用
//直接输出数字 const char *p
void NumberOperate(char *p) { printf("%c", *p); }
//括号操作用 因为使用的企业链表形式的链式栈， 需要增加结构体
typedef struct MYCHAR {
  LinkNode node;
  char *p;
} MyChar;
//创建MyChar
MyChar *CreatMyChar(char *p) {
  MyChar *mychar = (MyChar *)malloc(sizeof(MyChar));
  mychar->p = p;
  return mychar;
}
//左括号：遇到直接入栈，调用Push_LinkStack函数压栈
void LeftOperate(LinkStack *stack, char *p) {        //对链表进行操作
  Push_LinkStack(stack, (LinkNode *)CreatMyChar(p)); // LinkNode 强转类型
}
//解耦右括号操作 原来在main里的右括号操作拿出来
void RightOperate(LinkStack *stack) { // LinkStack* stack 这就是参数，好好体会
  while (Size_LinkStack(stack) > 0) { //先判断栈中有没有元素
    MyChar *mychar = (MyChar *)Top_LinkStack(stack); //取出后强转类型
    if (IsLeft(*(mychar->p))) { //如果匹配到了左括号，弹出并结束
      Pop_LinkStack(stack);     //弹出左括号
      break;                    //结束
    }
    //如果不是，先输出，再弹出
    printf("%c", *(mychar->p)); //输出字符str
    Pop_LinkStack(stack);       //弹出该字符
    free(mychar);               //释放内存
  }
}

int main() {
  char *str = "8+(3-1)*5";             // 需要加const
  char *p = str;                       //还是需要讲究的
  LinkStack *stack = Init_LinkStack(); //创建并初始化栈
  while (*p != '0') {
    if (IsNumber(*p)) { //如果是数字，直接输出
      NumberOperate(p);
    }
    p++; //既然要用while来循环，建议直接创建完while就来p++
    if (IsLeft(*p)) { //如果是左括号 直接进栈
      LeftOperate(stack, p);
    }
    if (IsRight(*p)) { //如果是右括号，弹栈，直到匹配到左括号为止
      RightOperate(stack); //原来函数在此，解耦后独立成了函数保持代码简介可读性
    }
    //如果是运算符号，需要比较优先级了

    p++;
  }
  printf("\n");
  return 0;
}

//嵌套循环好多好多，不影响速度？
