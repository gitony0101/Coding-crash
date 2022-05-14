---
title: Linux 第一课 - Shell - 2
zhihu-url: https://zhuanlan.zhihu.com/p/462831975
zhihu-tags: Shell 编程开发, Linux
---

# 控制流与函数

## 1. 条件

### 1.1. if...else...

```bash
if condition1
then
    exec1
elif condition2
then
    exec2
else
    execn
fi
```

## 2. case...in...

```bash
case $name in
    a)  echo 'do a'
    ;;
    b)  echo 'do b'
    ;;
    *)  echo "don\'t do a nor b"
    ;;
esac
```

## 3. 循环

### 3.1. for...in...

```bash
for num in 1 2 3 4 5
do
  echo "The value is: $num"
done
```

```bash
for ((i=0; i<3; i++)); do
    touch test_${i}.txt
    echo "shell is easy" >> test_${i}.txt
done
```

### 3.2. while

```bash
while condition
do
  exec
done
```

## 4. 函数

### 4.1. 定义

```bash
# Single function
my_func() {
  action;

  [return int;]
}

# Part of a package
mypackage::my_func() {
  action;

  [return int;]
}
```

### 4.2. 参数

- 获取参数值：
  - $0： 固定，代表执行的文件名
  - $1 ： 代表传入的第 1 个参数
  - $n ： 代表传入的第 n 个参数
  - \$#：参数个数
  - \$\*： 以一个单字符串显示所有向脚本传递的参数。
  - \$@：与$\*相同，但是使用时加引号，并在引号中返回每个参数。
  - \$\$：脚本运行的当前进程号
  - \$：后台运行的最后一个进程的 ID
  - \$?： 显示最后命令的退出状态。0 表示没有错误，其他任何值表明有错误。

## 5. 文件与路径

```bash
if [-f /var/test.log]
then
  echo "File exts"
fi
```

## 6. 网络

- Install

```bash
curl -fsSL https://xxx/install.sh | sh
```

```powershell
iwr -useb https://xxx/install.ps1 | iex
```
