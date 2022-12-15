# C++ 编程笔记 02

# 操作符

主要用六种运算符

- 算术运算符
- 关系运算符
- 逻辑运算符
- 位运算符
- 赋值运算符
- 其他运算符

### 算数运算符

加减乘除取余数：

- +, -, \*, /, % (求余数)

### 逻辑和关系运算符

- <, >, <=, >=, ==, !=

- &&(且), ||(或), !(非)

- 运算符优先级

算数运算符 >> 关系运算符 >> 逻辑运算符

- 更多可以看:([**cpp Operator Precedence Table**](https://en.cppreference.com/w/cpp/language/operator_precedence) )

### 赋值运算符

复合赋值

- `=, +=, -=, \*=, /=, %=, <<=, >>=, &=, |=, ^=`

- 自增减运算符： `++ --`
  - `count++` 就是 `count +=1` 就是 `count = count + 1`





### ++i 前缀形式 和 i++ 后缀形式 的区别


i++ 与 ++i 的主要区别有两个：

- i++ 返回原来的值，++i 返回加1后的值。
- i++ 不能作为左值，而++i 可以。




例如 `  int a = 10; int b = 10;`

```c++
// a++ = 10
// a= 11
// ++b= 11
// b= 11
```



### `<<` 左移运算符和 `>>`右移运算符 

- `<<`是左移运算符的意思，左移运算符是用来将一个数的各二进制位全部左移若干位,右补0。高位左移后溢出，舍弃。
  - 语法格式：需要移位的数字 `<<` 移位的次数
- `>>`右移运算符按二进制形式把所有的数字向右移动对应的位数，低位移出(舍弃)。高位的空位补符号位，即正数补零，负数补1。
  - 语法格式：需要移位的数字 `>>` 移位的次数



## 运算符优先级总览

[C++ 内置运算符、优先级和关联性](https://docs.microsoft.com/zh-cn/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-170)

# 语句

## If-else 条件语句

codes: ex,BMI,Integer,Lunar year

```c++
#include <stdio.h>
using namespace std;

int main() { // if else
  int price = 0;
  int bill = 0;
  printf("请输入金额:\n");
  scanf("%d", &price);
  printf("请输入票面\n");
  scanf("%d", &bill);
  if (bill >= price) {
    printf("应该找您:%d \n", bill - price);
  } else {
    printf("您的钱不够，还差%d", price - bill);
  }

  printf("\n");
  return 0;
}

```

## 判断语句

- If-else 语句
  - 嵌套 if ： else if
- Switch case 语句
  - 嵌套 switch 语句


</div>
</div>

- 体脂率计算器流程
  - 三个阈值：<18.5 低体脂率，>25 高体脂率，在 18.5-25 之间正常体脂率

</div>
</div>

### 从 if-else 到 swich case 语句

对比两个计算器代码，在条件较多的时候，可以用 switch case 代码替代 if-else 代码，更清晰明了：提供了一条便捷路径，让我们在固定选项中做出选择。

## 迭代语句——iteration——循环

迭代，知道重复执行操作到满足某个条件，或者超出某个范围。

- for 循环
  - `for (statement 1; statement 2; statement 3) { // code block to be executed }`
- while 循环
  - `while (condition) { statements; }`
- do-while 循环 ： 当条件满足时，不断地重复循环体内的语句。
  - `do { // code block to be executed } while (condition);`
    - 后面还跟 if 条件：可以理解为：while 是前后两个代码块的一个约束，在这个约束循环里面，哪个条件满足，就执行哪个条件，直到不满足 `while(condition)`里面的condition 条件
- 嵌套循环
  - 一个循环内可以嵌套另一个循环，最好别这样做，因为这样会导致循环无限循环。



## 跳转语句

为了避免进入死循环

- `break` 跳出循环
- `continue` 跳出本次执行 进行下次循环
- `goto`
- `return`

```cpp
//猜数字
#include <cstdlib>
#include <random>
#include <stdio.h>
using namespace std;

int main() { // if else
  srand(time(0));// 必要，每次依照时间不同采随机数
  int rMin, rMax = 0;
  int input_number = 0;
  printf("请输入想猜的数字范围:\n");
  scanf("%d %d", &rMin, &rMax);
  int randNum = (rand() % (rMax - rMin + 1)) + rMin;
  printf("请输入你的数字:\n");
  scanf(" %d", &input_number);
  while (input_number != randNum) {
    if (input_number < randNum) {
      printf("小了\n");
    } else {
      printf("大了\n");
    }
    printf("请重新输入你的数字\n");
    scanf("%d", &input_number);
  }

  printf("\n恭喜你答对了,这个数字就是  %d\n", randNum);
  printf("\n");
  return 0;
}


```
