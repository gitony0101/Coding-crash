# hash 散列
print(hash("Tony"))
# 原子不可变数据类型（str、bytes和数值类型）都是可散列类型
# frozenset(不可变集合)也是可散列的
# 因为根据其定义，frozenset里只能容纳可散列类型。元组的话，只有当一个元组包含的所有元素都是可散列类型的情况下，它才是可散列的。

# 元组：
tt = (1, 2, (30, 40))
tl = (1, 2, [30, 40])
tf = (1, 2, frozenset([30, 40]))

print(hash(tt))
# print(hash(tl))  # TypeError: unhashable type: 'list', list不可哈希，不可散列
print(hash(tf))
