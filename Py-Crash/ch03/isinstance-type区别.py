from collections import abc, OrderedDict, UserDict

# isinstance和type区别
# isinstance():认为子类是一种父类类型，考虑继承关系
# type():不会认为子类是一种父类类型，不考虑继承关系。
# 如果要判断两个类型是否相同推荐使用isinstance()。
