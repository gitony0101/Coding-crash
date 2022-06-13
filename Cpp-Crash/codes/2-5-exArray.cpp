#include <cstdio>
#include <iostream>
using namespace std;
/*
一维数组 升序排列 逆转排列 冒泡排序

1. `数据类型 数组名[ 数组长度 ];`
2. `数据类型 数组名[ 数组长度 ] = { 值1，值2 ...};` # 把值也标出来
3. `数据类型 数组名[ ] = { 值1，值2 ...};` # 长度可以自己推测出来，电脑会查
*/

//一维数组 从零开始，命名要规范，不要和变量重名
void exUnarry01() {
  float arr01[] = {1.001, 2, 3, 435, 6, 7, 8, 3, 4, 32, 3}; //直接生成一维数组
  int countArr01 = sizeof(arr01) / sizeof(arr01[0]);        //统计元素个数
  printf("数组arr01中一共有%d个元素。\n", countArr01);
  printf("其中，第一个元素为%f,最后一个选素为%f\n", arr01[0],
         arr01[countArr01 - 1]);
  printf("整个数组所占空间为：%lu,平均每个元素所占空间为：%lu\n",
         sizeof(arr01), //对数组名进行 sizeof，可以获取整个数组占内存空间的大小
         sizeof(arr01[0])); //每个元素所占空间相同
  printf("数组首地址为%p，十进制地址为%d\n",
         arr01, //直接打印数组名，可以查看数组所占内存的首地址
         (int &)arr01); //注意这里的十进制转换
  printf("第一个元素地址为%p，十进制地址为%d\n", &arr01[0],
         (int &)arr01[0]); //注意首元素地址和数组首地址相同
  printf("第二个元素地址为%p，十进制地址为%d\n", &arr01[1], (int &)arr01[1]);
}

int main() { exUnarry01(); }
