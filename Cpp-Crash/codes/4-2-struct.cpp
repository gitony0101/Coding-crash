#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
/*结构体
创建方式：
- struct 结构体名 变量名
- struct 结构体名 变量名 = { 成员 1 值 ， 成员 2 值...}
- 定义结构体时顺便创建变量 使用较少
*stu,用指针是为了节省内存
冻结 const struct ，const可以防止误操作
结构体案例 老师带学生 三国无双 这里解决了怎么嵌套结构体数组了
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

//结构体嵌套结构体和结构体数组，总感觉很有用
struct teacher {
  //第一前提是之前已经创建好了结构体 此处是之前创建的student
  //成员列表
  int id;            // 职工编号
  string name;       //教师姓名
  int age;           //教师年龄
  student stu;       // 子结构体
  student sArray[5]; // 这样就可以了 结构体嵌套结构体数组
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
/*结构体案例一老师带学生
**案例描述：**
学校正在做毕设项目，每名老师带领 5 个学生，总共有 3
名老师，设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放
5名学生的数组作为成员 学生的成员有姓名、考试分数，创建数组存放 3
名老师，通过函数给每个老师及所带的学生赋值最终打印出老师数据以及老师所带的学生数据。
*/

void allocatspace(teacher tArray[], int len) { //主代码，开辟老师学生空间并赋值
  //给老师进行赋值，小技巧：
  string nameSeedtea = "JKMNO";
  string nameSeedStu = "ABCDE";
  for (int i = 0; i < len; i++) {
    tArray[i].name = "Teacher ";
    tArray[i].name += nameSeedtea[i]; // 这样就能命名Teacher_X了
    for (int j = 0; j < 5;
         j++) { //通过嵌套循环给每个老师带的学生赋值,默认一个老师带五个学生
      tArray[i].sArray[j].name = "Student "; //姓名赋值
      tArray[i].sArray[j].name += nameSeedStu[j];
      int randScore = rand() % 61 + 40;      // 40 ~ 100 分
      tArray[i].sArray[j].score = randScore; // 给学生分数赋值
    }
  }
}
void printTeaStuInfo(teacher tArray[], int len) { //打印老师学生信息
  for (int i = 0; i < len; i++) {
    printf("辅导教师姓名： %s，辅导学生信息：\n", tArray[i].name.c_str());
    for (int j = 0; j < 5; j++) {
      printf("\t学生姓名： %s, 分数：%d。\n", tArray[i].sArray[j].name.c_str(),
             tArray[i].sArray[j].score);
    }
  }
}
// 结构体案例一老师带学生结束
/**案例描述：**
设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放 5
名英雄。通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
*/

// 结构体案例二三国无双
struct DynastyWorrior { // 英雄的结构体
  // 姓名
  string name;
  // 年龄
  int age;
  // 性别
  string sex;
};

//冒泡排序实现年龄的升序排列
void bubbleSort(DynastyWorrior heroArr[], int len) { //冒泡排序
  for (int i = 0; i < len - 1; i++) {                //这里注意要减1
    for (int j = 0; j < len - i - 1; j++) {          //这里注意也要减1
      if (heroArr[j].age > heroArr[j + 1].age) {
        // int temp = heroArr[j].age;//此处错误，临时中专值也要是一个结构体
        DynastyWorrior temp = heroArr[j];
        // heroArr[j].age = heroArr[j +
        // 1].age;//错误，这一点致使你第一次打印错误，不能只转移年龄，结构体要全体转移

        heroArr[j] = heroArr[j + 1];
        // heroArr[j + 1].age = temp;//错误
        heroArr[j + 1] = temp;
      }
    }
  }
}
// 结构体案例二三国无双结束
int main() {
  // exStructStudents();
  // exNestedStruct01();
  // student stu05 = {"小七", 6, 99};
  // printStudentbyValue(stu05); // 值传递
  // printStudentbyAdd(&stu05);  //地址传递
  //
  // #####结构体案例一老师带学生#####
  // 0、创建随机数种子，否则，一直会有值被固定
  // srand((unsigned int)time(NULL));
  // // 1、创建三名老师的数组
  // teacher tArray[3]; //具体请参见上面teacher的结构体，尤其是
  // studentsArray[5];
  //                    // 嵌套结构体数组，一个老师带了五名学生

  // // 2、通过函数给三名老师赋值，并给老师带的学生信息赋值
  // int len = sizeof(tArray) / sizeof(tArray[0]); // 这里不会报错
  // allocatspace(tArray, len);
  // // 3、 打印所有老师所带学生的信息
  // printTeaStuInfo(tArray, len);
  // #####结构体案例一老师带学生结束#####
  //
  // #####结构体案例二三国无双#####
  // 1、创建英雄的结构体

  // 2、创建数组存放5名英雄
  DynastyWorrior heroArr[5] = {
      {"刘备", 23, "男"}, {"关羽", 22, "男"}, {"张飞", 20, "男"},
      {"赵云", 21, "男"}, {"貂蝉", 19, "女"},
  };
  int len = sizeof(heroArr) / sizeof(heroArr[0]);
  printf("排序前打印:\n");
  for (int i = 0; i < len; i++) {
    printf("%s %d %s\n", heroArr[i].name.c_str(), heroArr[i].age,
           heroArr[i].sex.c_str());
  } // 此处需要测试是否可以打印，必要的阶段性输出
  // 3、对数组进行排序，按年龄进行升序排列
  bubbleSort(heroArr, len);
  // 4、 将排序后的结果打印输出
  printf("冒泡排序后打印:\n");
  for (int i = 0; i < len; i++) {
    printf("%s %d %s\n", heroArr[i].name.c_str(), heroArr[i].age,
           heroArr[i].sex.c_str());
  }
  // #####结构体案例二三国无双结束#####
}
