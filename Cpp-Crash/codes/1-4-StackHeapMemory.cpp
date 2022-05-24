#include <iostream>
using namespace std;

/*程序运行后：
栈内存Stack Memory (系统操作)
堆内存Heap Memory（手动操作）
 栈区 stack： 由编译器自动分配释放，存放函数的参数值，局部变量等
- 注意：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放

 堆区 heap：由程序员分配和释放，若不释放，程序结束时由操作系统回收
- 手动用new 进行开辟内存，用delete 释放内存
*/

//栈区数据注意事项:不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放

int *testStackFunc01(int b) { //     栈区
  b = 42;                     //行参数据例如b也会放在栈区
  int a = 10; //创建局部变量,存放在栈区,栈区的数据在函数执行完后自动释放
  return &a;  // 就是手欠返回局部变量的地址,看来这里报错了
              //
              //   注意左边的报错：
              // Address of stack memory associated with local variable 'a'
              // returned
  // 这是个蛮愚蠢的错误，我把局部变量的地址作为返回，但是局部数组变量是位于stack区的，函数结束后这个地址中的数据将失去意义;
}

//堆区 heap：由程序员分配和释放，若不释放，程序结束时由操作系统回收
// - 手动用new 进行开辟内存，用delete 释放内存

int *testHeapFunc01() { //堆区
                        // 利用new 关键字，可以讲数据开辟到堆区
  int *p = new int(10); //创建整型数据10,用指针接收堆区整型10的内存编号
  return p;
}

int main() {
  //栈区
  int *ptr01 = testStackFunc01(666); // 接收func函数的返回值
  // 第一次可以打印正确的数字是因为编译器做了保留，但是保留不会一直在：
  printf("%d\n", (int)*ptr01);
  // 第二次这个数据就不再保留了
  printf("%d\n", (int)*ptr01);
  //堆区new delete操作
  int *ptr02 = testHeapFunc01();
  printf("%d\n", (int)*ptr02); // 第一次输出，若不删除，能返回10
  printf("%d\n", (int)*ptr02); //第二次输出，若不手动删除，还能返回10
  //下同
  printf("%d\n", (int)*ptr02);
  printf("%d\n", (int)*ptr02);
}
