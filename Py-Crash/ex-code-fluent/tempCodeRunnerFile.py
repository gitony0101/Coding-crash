# 格式 map(函数名，可迭代类型)
# 可迭代类型：例如列表，元组，字符串、字典这样的
# 功能：将可迭代类型中的中的每一个元素执行一遍函数


# map实现原理
def mapIt(func, arr):
    # 定义一个新数组，承接改变的arr
    resultsArr = []
    for i in arr:
        # 调用传递过来的func函数迭代arr里面的可迭代元素
        result = func(i)
        resultsArr.append(result)
    return resultsArr


#测试
testArr = [0, 1, 2, 3]


def testFunc(x):
    x = x + 1
    return x


test01 = mapIt(testFunc(), testArr)
print(test01)
