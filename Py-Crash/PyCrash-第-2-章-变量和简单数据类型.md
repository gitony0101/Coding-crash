# 1. 第 2 章 变量和简单数据类型

## 1.1. 运行 hello_world.py 时发生的情况

```python
print('Hello, Python!')
```

## 1.2. 变量

```python
message = "Hello world!"
print(message)
```

### 1.2.1. 变量的命名和使用

变量的命名和使用在 Python 中使用变量时,需要遵守一些规则和指南。违反这些规则将引发错误,而指南旨在让你编写的代码更容易阅读和理解。请务必牢记下述有关变量的规则：

- 变量名只能包含字母、数字和下划线。变量名能以字母或下划线打头,但不能以数字打头。例如,可将变量命名为 message_1 ,但不能将其命名为 1_message 。
- 变量名不能包含空格,但能使用下划线来分隔其中的单词。例如,变量名 greeting_message 可行,但变量名 greeting message 会引发错误。
- 不要将 Python 关键字和函数名用作变量名,即不要使用 Python 保留用于特殊用途的单词,如 print (请参见附录 A.4)。
- 变量名应既简短又具有描述性。例如,name 比 n 好,student_name 比 s_n 好,name_length 比 length_of_persons_name 好。
- 慎用小写字母 l 和大写字母 O ,因为它们可能被人错看成数字 1 和 0 。
- 要创建良好的变量名,需要经过一定的实践,在程序复杂而有趣时尤其如此。随着编写的程序越来越多,并开始阅读别人编写的代码,你将越来越善于创建有意义的变量名。

### 1.2.2. 变量是标签：**变量常被描述为可用于存储值的盒子。**

在你刚接触变量时,这种定义可能很有帮助,但它并没有准确描述 Python 内部表示变量的方式。一种好得多的定义是,变量是可以赋给值的标签,也可以说变量指向特定的值。

刚学习编程时,这种差别可能意义不大,但越早知道越好。你迟早会遇到变量的行为出乎意料的情形,此时如果对变量的工作原理有准确的认识,将有助于搞清楚代码是如何运行的。

注意 要理解新的编程概念,最佳的方式是尝试在程序中使用它们。如果你在完成本书的练习时陷入了困境,请尝试做点其他的事情。如果这样做后依然无法摆脱困境,请复习相关内容。

## 1.2. 字符串

大多数程序定义并收集某种数据,然后使用它们来做些有意义的事情。

有鉴于此,对数据进行分类大有裨益。我们将介绍的第一种数据类型是字符串。字符串虽然看似简单, 但能够以很多不同的方式使用。

```python
"This is a string"
'This is also a string'
```

```python
name = "ada lovelace"
print(name.title())
print(name.upper())
print(name.lower())
```

在这个示例中,变量 name 指向小写的字符串"ada lovelace" 。在函数调用 print() 中,方法 title() 出现在这个变量的后面。方法 是 Python 可对数据执行的操作。在 name.title() 中,name 后面的句点(. )让 Python 对变量 name 执行方法 title() 指定的操作。每个方法后面都跟着一对圆括号,这是因为方法通常需要额外的信息来完成其工作。这种信息是在圆括号内提供的。函数 title() 不需要额外的信息, 因此它后面的圆括号是空的。

存储数据时,方法 lower() 很有用。很多时候,你无法依靠用户来提供正确的大小写, 因此需要将字符串先转换为小写,再存储它们。以后需要显示这些信息时,再将其转换为最合适的大小写方式。

### 1.2.1. 在字符串中使用变量

```python
first_name = "ada"
last_name = "lovelace"
print(first_name + " " + last_name)
print(f"{first_name}    {last_name}")
```

这种字符串名为 f 字符串 。f 是 format(设置格式)的简写,因为 Python 通过把花括号内的变量替换为其值来设置字符串的格式。

```python
first_name = "ada"
last_name = "lovelace"
full_name = first_name + "" + last_name
print(f"Hello,{full_name.title()}!")
```

### 1.2.2. 使用制表符或换行符来添加空白

在编程中,空白 泛指任何非打印字符,如空格、制表符和换行符。你可以使用空白来组织输出,让用户阅读起来更容易。

```python
print("Python")
print("\tPython")
```

要在字符串中添加换行符,可使用字符组合\n :

```python
print("Languages:\nPython/nC++\nJava")
```

### 1.2.3. 删除空白

Python 能够找出字符串开头和末尾多余的空白。要确保字符串末尾没有空白,可使用方法 rstrip()

- 这种删除只是暂时

```python
favorite_language = 'python '
favorite_language.rstrip()
```

你还可以剔除字符串开头的空白,或者同时剔除字符串两边的空白。为此,可分别使用方法 lstrip() 和 strip() :

- 但是都删除不了中间的空白

```python
favorite_language = ' python '
favorite_language.lstrip()
favorite_language.strip()
```

使用字符串时避免语法错误

```python
message = "One of Python's strengths is its diverse community."
print(message)
```

撇号位于两个双引号之间,因此 Python 解释器能够正确地理解这个字符串

## 1.2. 数 常量

整数

```python
2+3

3/2

(21 +3 *4)*4

```

浮点数

```python
0.1 * 0.2

1 + 2.1
```

数中下划线：

```python
universe_age = 14_000_000_000
print(universe_age)
```

同时给多个变量赋值可在一行代码中给多个变量赋值,这有助于缩短程序并提高其可读性。这种做法最常用于将一系列数赋给一组变量。
例如,下面演示了如何将变量 x 、y 和 z 都初始化为零

```python
x,y,z = 0,0,0
```

常量

```python
n = 500
```

## 1.3. Python 数据类型

![](https://img-blog.csdnimg.cn/20200417152501259.jpg?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L21hbm9uZ2FqaWU=,size_16,color_FFFFFF,t_70#pic_center)

## 1.4. 注释

# 2. 向大家问好 on

# 3. 向大家问好

```python
print("hello")
```

Python 解释器将忽略第一行,只执行第二行。

### 3.1. 该编写什么样的注释

编写注释的主要目的是阐述代码要做什么,以及是如何做的。
在开发项目期间,你对各个部分如何协同工作了如指掌,但过段时间后,有些细节你可能不记得了。当然,你总是可以通过研究代码来确定各个部分的工作原理,但通过编写注释以清晰的自然语言对解决方案进行概述,可节省很多时间。

要成为专业程序员或与其他程序员合作,就必须编写有意义的注释。

- 当前,大多数软件是合作编写的,编写者可能是同一家公司的多名员工,也可能是众多致力于同一个开源项目的人员。训练有素的程序员都希望代码中包含注释,因此你最好从现在开始就在程序中添加描述性注释。
- 作为新手,最值得养成的习惯之一就是在代码中编写清晰、简洁的注释。
- 如果不确定是否要编写注释,就问问自己:在找到合理的解决方案之前,考虑了多个解决方案吗?如果答案是肯定的,就编写注释对你的解决方案进行说明吧。相比回过头去再添加注释,删除多余的注释要容易得多。从现在开始,本书的示例都将使用注释来阐述代码的工作原理。
