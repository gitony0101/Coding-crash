// #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
using namespace std;
/*就近匹配 检测括号是否匹配
- 扫描字符串，如果碰到左括号，直接入栈
- 如果碰到右括号，从栈顶弹出扩号元素，判断是否是左括号
  - 如果是，匹配成功
  - 如果不是，匹配失败
*/
#include "LinkStack.h" //引入头文件，此处用的是企业链表栈
                       //

typedef struct MyChar {
  LinkNode node;
  char *pAddres;
  int index;
} Mychar;

int Isleft(char c) { return c == '('; }

int Isright(char c) { return c == ')'; }

MyChar *Createmychar(char *p, int index) {
  MyChar *mychar = (MyChar *)malloc(sizeof(MyChar));
  mychar->pAddres = p;
  mychar->index = index;
  return mychar;
}

void Showerror(char *str, int pos) {
  printf("%s\n", str);
  for (int i = 0; i < pos; i++) {
    printf(" ");
  }
  printf("A");
}

int main() {

  //创建栈容器
  LinkStack *stack = Init_LinkStack();

  char *str = (char *)"sss1+3(sws)+asdfgsdfg((ss)"; //创造一个不匹配的左括号
  char *p = str;                                    //修改p不用修改str
  int index = 0;
  while (*p != '\0') {
    //如果是左括号直接进栈
    if (Isleft(*p)) {
      Push_LinkStack(stack, (LinkNode *)Createmychar(p, index));
    }
    //如果是右括号 从栈顶弹出元素 并判断是不是左括号
    if (Isright(*p)) {
      if (Size_LinkStack(stack) > 0) {

        MyChar *mychar = (MyChar *)Top_LinkStack(stack);
        if (Isleft(*(mychar->pAddres))) {
          Pop_LinkStack(stack);
          free(mychar);
        }
      } else {
        printf("右括号没有匹配左括号\n");
        Showerror(str, index);
        break;
      }
    }
    p++;
    index++;
  }

  while (Size_LinkStack(stack) > 0) {
    MyChar *mychar = (MyChar *)Top_LinkStack(stack);
    printf("左括号没有匹配右括号：\n");
    Showerror(str, mychar->index);
    Pop_LinkStack(stack);
    free(mychar);
  }

  printf("\n");
  return 0;
}
