#include <iostream>
#include <string>
using namespace std;
/*结构体

创建方式：
- struct 结构体名 变量名
- struct 结构体名 变量名 = { 成员 1 值 ， 成员 2 值...}
- 定义结构体时顺便创建变量 使用较少

const struct *stu,用指针是为了节省内存，const可以防止误操作
结构体案例

*/

void exStruct01() {
  struct student {
    //成员列表
    string name; // 姓名
    int age;     //年龄
    int score;   // 分数
  } stu3;        // 结构体变量创建方式3 使用较少
}

int main() {}
