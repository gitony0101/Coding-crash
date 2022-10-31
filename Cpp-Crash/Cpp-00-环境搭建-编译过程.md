# C++ 环境搭建


## 环境搭建

- tasks.json # 编译指令设置，用于编译 c++文件
- launch.json # 调试器设置，用于使用 vscode 自带的 debug 工具（左侧的小虫图标）
  - tasks.json 的"label"参数值和 launch.json 的"preLaunchTask"参数值需要保持一致
- c_cpp_properties.json # 用于使用 vscode 自带的代码提示工具如 IntelliSense
  - c_cpp_properties.json 的作用是：代码提示、代码跳转等
- makefile 一个含有一系列命令（directive）的，通过 Make 自动化编译工具，帮助 C/C++ 程序实现自动编译目标文件的文件。这个文件的默认命名是 "Makefile"。它描述了整个工程的编译、链接的规则。

clangd 是检查器
linter

tasks 的作用是啥？
launch 的作用是啥？
makefile 的作用是啥？
makefile 的编译工具有哪些？

## C/C++程序编译流程

### 预处理->编译->汇编->链接

![](./images/build.png)

1. 预编译

预处理相当于根据预处理指令组装新的 C/C++程序。读取 C/C++源程序，对其中的伪指令（以#开头的指令）进行处理

   - 将所有的“#define”删除，并且展开所有的宏定义
   - 处理所有的条件编译指令，如：“#if”、“#ifdef”、“#elif”、“#else”、“endif”等。
   - 处理“#include”预编译指令，将被包含的文件插入到该预编译指令的位置。
   - 删除所有的注释
   - 添加行号和文件名标识。以便于编译时编译器产生调试用的行号信息及用于编译时产生的编译错误或警告时能够显示行号
   - 保留所有的#pragma 编译器指令

2. 编译

   将预处理完的文件进行一系列词法分析、语法分析、语义分析及优化后，产生相应的汇编代码文件。

3. 汇编

   将编译完的汇编代码文件翻译成机器指令，并生成可重定位目标程序的`.o`文件，该文件为二进制文件，字节编码是机器指令。

4. 链接

   通过链接器将一个个目标文件（或许还会有库文件）链接在一起生成一个完整的可执行程序。

   由汇编程序生成的目标文件并不能立即就被执行，其中可能还有许多没有解决的问题。

   例如，某个源文件中的函数可能引用了另一个源文件中定义的某个符号（如变量或者函数调用等）；在程序中可能调用了某个库文件中的函数，等等。所有的这些问题，都需要经链接程序的处理方能得以解决。

   链接程序的主要工作就是将有关的目标文件彼此相连接，也就是将在一个文件中引用的符号同该符号在另外一个文件中的定义连接起来，使得所有的这些目标文件成为一个能够被操作系统装入执行的统一整体。

### “ESC”步骤编译

- [The C++ build process](https://faculty.cs.niu.edu/~mcmahon/CS241/Notes/build.html)
- ### `test`文件夹下`index.cpp`文件为例：

1. `clang++ -E index.cpp -o index.i` 预编译进行编译，生成`index.i`文件

2. `clang++ -S index.cpp -o index.s` 编译进行编译，生成`index.s` 汇编文件

3. `clang++ -c index.s -o index.o`,汇编器进行编译，生成`index.o`文件

4. `clang++ index.s -o index` 连接器进行编译，生成`index`文件
   - 继续输入`file index`
   - 输出： `index: Mach-O 64-bit executable x86_64`  (imac)
    >说明文件编译成功，可执行

编译完成， 输入：`./index`执行文件

- 每一步可以看看编译的文件的具体东西

