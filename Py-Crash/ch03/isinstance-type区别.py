from collections import abc, OrderedDict, UserDict

# isinstance和type区别
# isinstance():认为子类是一种父类类型，考虑继承关系
# type():不会认为子类是一种父类类型，不考虑继承关系。
# 如果要判断两个类型是否相同推荐使用isinstance()。
# abc.mapping 泛映射类型
my_dict = {}
print(isinstance(my_dict, abc.Mapping), type(my_dict).__name__ == "dict")
my_dict2 = OrderedDict([])  # 有序字典
print(isinstance(my_dict2, abc.Mapping), type(my_dict2).__name__ == "dict")


class StrkeyDict(UserDict):
    pass


my_dict3 = StrkeyDict()
print(isinstance(my_dict3, abc.Mapping), type(my_dict2).__name__ == "dict")
