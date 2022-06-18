#include <cstdio>
#include <iostream>
using namespace std;
/*结构体

创建方式：
- struct 结构体名 变量名
- struct 结构体名 变量名 = { 成员 1 值 ， 成员 2 值...}
- 定义结构体时顺便创建变量 使用较少

const struct *stu,用指针是为了节省内存，const可以防止误操作
结构体案例
*/

//定义学生结构体，注意一下小尾巴
struct student {
  //成员列表
  string name; // 姓名
  int age;     //年龄
  int score;   // 分数
} stu3;        // 第三种构建方法 不推荐 见到要认识

//创建结构体的三种方式，打印结构体，结构体数组和指针
void exStructStudents() {
  // 结构体变量穿件方式1
  struct student stu0; // struct 命令关键字可以省略 省不省？？
  student stu1;        //省略过后的样子创建结构体stu1
  stu1.name = "张三";
  stu1.age = 18;
  stu1.score = 90;
  //第二种方式，直接创建
  student stu2 = {"李四", 19, 60}; // 挺直接的，推荐

  //第三种方式，已经在结构体定义的地方创建过了
  stu3.name = "王五";
  stu3.age = 45;
  stu3.score = 80;
  // 尝试遍历结构体怎么搞？结构体数组！！哈哈
  student stuArr[3] = {stu1, stu2, stu3};
  //嵌套结构体里面再把这里强调一下怎么直接创建
  for (int i = 0; i < 3; i++) {
    printf("姓名 %s,年龄 %d，分数 %d。\n", stuArr[i].name.c_str(),
           stuArr[i].age, stuArr[i].score);
  }
  //结构体指针
  student stu04 = {"赵六", 18, 100};
  student *p = &stu04;
  p->score = 80; //指针通过->操作符可以直接访问成员

  printf("结构体指针：\n姓名 %s,年龄 %d，分数 %d。\n", p->name.c_str(), p->age,
         p->score);
  printf("stu04的地址为 %p,大小为 %ld\n  p  的地址为 %p,大小为 %ld\n", &stu04,
         sizeof(stu04), p, sizeof(*p));
}

//结构体嵌套结构体，总感觉很有用
struct teacher {
  //第一前提是之前已经创建好了结构体 此处是之前创建的student
  //成员列表
  int id;      // 职工编号
  string name; //教师姓名
  int age;     //教师年龄
  student stu; // 子结构体
};

void exNestedStruct01() {
  teacher tArr[] = {{10086, "王老师", 42},
                    {10000, "张老师", 38},
                    {10010, "李老师", 25}}; //直接创建了，别废话
  student stuArr[] = {
      {"张三", 18, 80},
      {"李四", 19, 60},
      {"王五", 20, 70}}; //目前嵌套只能搞老师一对一，一直在想怎么一对多
  for (int i = 0; i < 3; i++) {
    tArr[i].stu = stuArr[i]; // 一个老师对一个学生，用点"."来调用子结构体
    printf("指导教师编号 %d，姓名：%s，年龄 %d。辅导学员姓名%s，年龄 %d,成绩 "
           "%d。\n",
           tArr[i].id, tArr[i].name.c_str(), tArr[i].age,
           tArr[i].stu.name.c_str(), tArr[i].stu.age, tArr[i].stu.score);
  } //给自己鼓个掌吧
}

//结构体做函数参数 ：值传递和地址传递
void printStudentbyValue(student stu) { //值传递, 用&stu也行，引用，你体会一下
  stu.age = 28;
  printf("姓名 %s,年龄 %d，分数 %d。\n", stu.name.c_str(), stu.age, stu.score);
}
void printStudentbyAdd(student *stu) { //地址传递
  stu->age = 28;
  printf("姓名 %s,年龄 %d，分数 %d。\n", stu->name.c_str(), stu->age,
         stu->score);
}
//使用const冻结，防止误操作
void printStubyValue01(student const stu) {
  // stu.age = 28;
  // Cannot assign to variable 'stu' with const-qualified type 'const student'
  // 看到了吧，直接报错
  printf("姓名 %s,年龄 %d，分数 %d。\n", stu.name.c_str(), stu.age, stu.score);
}

void printStubyValue02(const student stu) {
  // stu.age = 28;
  // Cannot assign to variable 'stu' with const-qualified type 'const student'
  // 一样的报错
  printf("姓名 %s,年龄 %d，分数 %d。\n", stu.name.c_str(), stu.age, stu.score);
}

void printStubyAdd(student const *stu) {
  // stu->age = 28;还是直接报错
  printf("姓名 %s,年龄 %d，分数 %d。\n", stu->name.c_str(), stu->age,
         stu->score);
}

//
int main() {
  // exStructStudents();
  // exNestedStruct01();
  student stu05 = {"小七", 6, 99};
  printStudentbyValue(stu05); // 值传递
  printStudentbyAdd(&stu05);  //地址传递
}
