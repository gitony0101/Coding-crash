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

`=, +=, -=, \*=, /=, %=, <<=, >>=, &=, |=, ^=`

- 自增减运算符： `++ --`

## 运算符优先级总览

[C++ 内置运算符、优先级和关联性](https://docs.microsoft.com/zh-cn/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-170)

# 语句

## If-else 条件语句

codes: ex,BMI,Integer,Lunar year

## 判断语句

- If-else 语句
  - 嵌套 if ： else if
- Switch case 语句
  - 嵌套 switch 语句


### 条件运算符 三元运算符 三目运算符

- 条件运算符 `Exp1 ? Exp2 : Exp3;`
  - 其中，Exp1、Exp2 和 Exp3 是表达式。请注意冒号的使用和位置。`? :` 表达式的值取决于 Exp1 的计算结果。
    - 如果 Exp1 为真，则计算 Exp2 的值，且 Exp2 的计算结果则为整个 `? :` 表达式的值。
    - 如果 Exp1 为假，则计算 Exp3 的值，且 Exp3 的计算结果则为整个 `? :` 表达式的值。`
      - ? 被称为三元运算符，因为它需要三个操作数，可以用来代替`if-else`语句。

```c++
if(condition){
   var = X;
}else{
   var = Y;
}
```

等价于：

```c++
(condition) ? var = X : var = Y;
```

### 流程图

- 判定奇数偶数流程

<div align = "center">
<div style="width:700px">

![img](./img/chapter-3-ifelseDIagram.png)

</div>
</div>

- 判定三角形类型流程

<div align = "center">
<div style="width:700px">

![img](img/chapter-3--Tri-ifelseDIagram.png)

</div>
</div>

- 体脂率计算器流程
  - 三个阈值：<18.5 低体脂率，>25 高体脂率，在 18.5-25 之间正常体脂率

<div align = "center">
<div style="width:700px">

![img](./img/BMI.jpg)

</div>
</div>

### 从 if-else 到 swich case 语句

对比两个计算器代码，在条件较多的时候，可以用 switch case 代码替代 if-else 代码，更清晰明了：提供了一条便捷路径，让我们在固定选项中做出选择。

请参考附属代码`chapter-3-1-exSwitchCase.cpp`

## 迭代语句——iteration——循环

迭代，知道重复执行操作到满足某个条件，或者超出某个范围。

- for 循环
  - `for (statement 1; statement 2; statement 3) { // code block to be executed }`
- while 循环
  - `while (condition) { statements; }`
- do-while 循环
  - `do { // code block to be executed } while (condition);`
    - 后面还跟 if 条件：可以理解为：while 是前后两个代码块的一个约束，在这个约束循环里面，哪个条件满足，就执行哪个条件，直到执行完 while
- 嵌套循环
  - 一个循环内可以嵌套另一个循环，最好别这样做，因为这样会导致循环无限循环。



### ++i 和 i++的区别


i++ 与 ++i 的主要区别有两个：

- i++ 返回原来的值，++i 返回加1后的值。
- i++ 不能作为左值，而++i 可以。




```cpp
void comparePrePostIncrement() {
  int i = 1, j;
  int m = 1, n;
  j = ++i;
  n = m++;

  printf("now i = %d  j = %d\nm = %d n = %d\n", i, j, m, n);
}

int main() {
  comparePrePostIncrement();
}

```



## 跳转语句

为了避免进入死循环

- `break` 跳出循环
- `continue` 跳出本次执行 进行下次循环
- `goto`
- `return`

## 三元表达式
？：
