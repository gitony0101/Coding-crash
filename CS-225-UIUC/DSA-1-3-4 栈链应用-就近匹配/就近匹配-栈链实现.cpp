// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*就近匹配 检测括号是否匹配
- 扫描字符串，如果碰到左括号，直接入栈
- 如果碰到右括号，从栈顶弹出扩号元素，判断是否是左括号
  - 如果是，匹配成功
  - 如果不是，匹配失败
*/
#include "LinkStack.h" //引入头文件，此处用的是企业链表栈

//定义结构体
typedef struct MYCHAR {
  LinkNode node; // 此结点负责让链表帮我们串起来，企业链表你懂的
  char *pAddres; //设定字符地址
  int index;     //遍历访问字符串时标记字符位置
} MyChar;

//编写左右括号判定函数
int IsLeft(char c) { return c == '('; }
int IsRight(char c) { return c == ')'; }
//创建创建maychar函数，下面可以直接调用
MyChar *CreateMyChar(char *p) {
  MyChar *mychar = (MyChar *)malloc(sizeof(MyChar));
  mychar->pAddres = p;
  return mychar;
}
//报错函数
void ShowError(char *str, int pos) {}

int main() {

  char *str = "sss1+3(sws)+asdfgsdfg((ss)"; //创造一个不匹配的左括号
  //初始化创建栈容器
  LinkStack *stack = Init_LinkStack();
  char *p = str; //不修改原指针指向，引入辅助指针p来修改p
  //用while遍历字符串，字符串结束标志： \0
  while (*p != '\0') {
    //如果左括号，直接进栈
    if (IsLeft(*p)) {
      Push_LinkStack(stack, (LinkNode *)CreateMyChar(p));
    }
    //如果是右括号，从栈顶弹出元素 判断是不是左括号
    if (IsRight(*p)) {                 //加入预判
      if (Size_LinkStack(stack) > 0) { //弹出栈顶元素
        MyChar *mychar = (MyChar *)Top_LinkStack(stack);
        if (IsLeft(*(mychar->pAddres))) { //如果弹出的是左括号
          Pop_LinkStack(stack);           //弹出
        }
      }
    } else { //碰见了右括号
    }
  }

  printf("\n");
  return 0;
}
