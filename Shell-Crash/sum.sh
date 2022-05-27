#! /bin/bash

## 两数相加

sumFunc(){
echo "下面加法运算"
echo "请输入第一个数字"
read num1
echo "请第二个数字"
read num2
return $(($num1 + $num2))
}
sumFunc
#函数返回值在调用该函数后通过 $? 来获得。
# 或者此处令 numSum = sumFunc, 因return的是两数的和

echo "计算结果： $num1 + $num2  = $?"
##这里的数据类型有限制，例如200+100，结果不对



