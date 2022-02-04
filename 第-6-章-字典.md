# 第 6 章 字典

字典可存储的信息量几乎不受限制

- 如何遍历字典中的数据

- 储字典的列表、存储列表的字典

- 存储字典的字典

```python
alien_0 = {'color': 'green', 'points': 5}
print(alien_0['color'])
print(alien_0['points'])
```

## 使用字典

```python
alien_0 = {'color': 'green', 'points': 5}
new_points = alien_0['points']

print(f"You just earned {new_points} points!")
```

## 添加键值对

```python
alien_0 = {'color': 'green', 'points': 5}
print(alien_0)

alien_0['x_postion'] = 0
alien_0['y_position'] = 25
print(alien_0)
```

### 在空字典中添加键值

```python
alien_0 = {}
alien_0['color'] = 'green'
alien_0['points'] = 5
print(alien_0)
```

### 修改字典中的值

要修改字典中的值,可依次指定字典名、用方括号括起的键,以及与该键相关联的新值。

```python
alien_0 = {'color': 'green', 'points': 5}
print(f"The alien is {alien_0['color']}")

alien_0['color'] = 'yellow'
print(f"The alien is now {alien_0['color']}")
```

例 ：对一个能够以不同速度移动的外星人进行位置跟踪。为此,我们将存储该外星人的当前速度,并据此确定该外星人将向右移动多远:

```python
# 创建字典，存储外星人初始位置和移动速度
alien_0 = {'x_position': 0, 'y_position': 25, 'speed': 'slow'}
# 向右移动外星人
# 据当前速度决定将向右移动多远。

if alien_0['speed'] == 'slow':
    x_increment = 1
elif alien_0['speed'] == 'medium':
    x_increment = 2
else:
    # 这个外星人的速度是“快”
    x_increment = 3
# 新位置等于老位置加上移动距离

alien_0['x_position'] = alien_0['x_position'] + x_increment

print(f"New x-position: {alien_0['x_position']}")

```

还可以设置 alien_0['speed'] = 'fast‘ 来改变外星人的速度。

### 删除键值对

对于字典中不再需要的信息,可使用 del 语句将相应的键值对**彻底删除(永远消失)**。

使用 del 语句时,必须指定字典名和要删除的键。

```python
alien_0 = {'color': 'green', 'points': 5}
print(alien_0)

del alien_0['points']
print(alien_0)
```

### 由类似对象组成的字典

```python
fav_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}

for name, language in fav_languages.items():
    print(f"{name.title()}'s favorite language is {language.title()}.")
```

### get() ：有没有都看一下

调用 get() 时,如果没有指定第二个参数且指定的键不存在,Python 将返回值 None 。这个特殊值表示没有相应的值。None 并非错误,而是一个表示所需值不存在的特殊值

```python
alien_0 = {'color': 'green', 'speed': 'slow'}

point_value = alien_0.get('points')

print(point_value)
```

```python
alien_0 = {'color': 'green', 'speed': 'slow'}

point_value = alien_0.get('points','No point value assigned.')

print(point_value)
```

## 遍历字典

一个 Python 字典可能只包含几个键值对,也可能包含数百万个键值对。

鉴于字典可能包含大量数据,Python 支持对字典进行遍历。

字典可用于以各种方式存储信息, 因此有多种遍历方式:

- 可遍历字典的所有键值对,也可仅遍历键或值。

```python
user_0 = {
    'username': 'efermi',
    'first': 'enrico',
    'last': 'fermi',
}

for key, value in user_0.items():
    print(f"\nKey:{key}")
    print(f"\nValue:{value}")
```

### 仔细区分：keys() 、values() 、items()

```python
fav_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}

print(fav_languages.keys())
print(fav_languages.values())
print(fav_languages.items())
```

### 遍历字典中的所有键

```python
fav_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}

for name in fav_languages.keys():
    print(name.title())
```

```python
fav_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}

for a,b in fav_languages.items():
    print(a)
    print(b)
```

```python
fav_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}

for a in fav_languages:
    print(a.title())
```

列表结合字典双循环打印：

```python
fav_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}

friends = ['phil', 'sarah']

for name in fav_languages.keys():
    print(f"Hi {name.title()}!")

    if name in friends:
        language = fav_languages[name].title()
        print(f"\t{name.title()}, I see you love {language}!")
```

使用 keys（）查询：

```python
fav_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}

friends = ['phil', 'sarah','erin']

for name in fav_languages.keys():
    print(f"Hi {name.title()}!")

for name in friends:
    if name in fav_languages.keys():
            print(f"\t{name.title()}, I see you love {fav_languages[name].title()}!")
    else:
            print(f"\t{name.title()},please take our poll!")
```

原来的代码：

```python
fav_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}

if 'erin' not in fav_languages.keys():
    print("Erin, please take our poll!")
```

### 按特定顺序遍历字典中的所有键

从 Python 3.7 起,遍历字典时将按插入的顺序返回其中的元素。不过在有些情况下,你可能要按与此不同的顺序遍历字典。

```python
favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}

for name in sorted(favorite_languages.keys()):
    print(f"{name.title()}, thank you for taking the poll.")
```

遍历字典中的所有值 values()

```python
favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}

print("The following languages have been mentioned:")

for language in favorite_languages.values():
    print(language.title())
```

### 使用 set()遍历字典中的所有键（unique）

这种做法提取字典中所有的值,而没有考虑是否重复。

为剔除重复项, 可使用集合(set)。集合 中的每个元素都必须是独一无二的:

```python
favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}
print("The following languages have been mentioned:")

for language in set(favorite_languages.values()):
    print(language.title())
```

注意 可使用一对花括号直接创建集合,并在其中用逗号分隔元素:

```python
languages = {'python', 'ruby', 'python', 'c'}
languages
```

```python
rivers = {
    'nile' : 'Egypt',
    'yangtze':'China',
    'mississippi':'US',
    'amazon':'Brazil'}

for river, country in rivers.items():
    print(f"The {river.title()} runs through {country.title()}.")
```

## 嵌套

嵌套是一项强大的功能：

- 将一系列字典存储在列表中
- 将列表作为值存储在字典中

你可以在：

- 列表中嵌套字典
- 在字典中嵌套列表
- 甚至在字典中嵌套字典

### 字典列表

```python
alien_0 = {'color': 'green', 'points': 5}
alien_1 = {'color': 'yellow', 'points': 10}
alien_2 = {'color': 'red', 'points': 15}

aliens = [alien_0, alien_1, alien_2] # 将字典存储在列表中
print(aliens)

for alien in aliens:
    print(alien)
```

更符合现实的情形是,外星人不止三个,且每个外星人都是使用代码自动生成的。
在下面的示例中,使用 range() 生成了 30 个外星人:

```python
# 创建用于存储外星人的列表
aliens = []

# 30 个外星人到达战场
for alien_number in range(30):
    new_alien = {'color': 'green', 'points': 5, 'speed': 'slow'}
    aliens.append(new_alien)

for alien in aliens[:7]:
    print(alien)

print("...") # 后面的外星人省略

# 显示创建了多少外星人：
print(f"Total number of aliens: {len(aliens)}")
```

for 循环 if 条件语句 修改外星人颜色速度

```python
aliens = []

for alien_number in range(30):
    new_alien = {'color': 'green', 'points': 5, 'speed': 'slow'}
    aliens.append(new_alien)

for alien in aliens[:7]:
    if alien['color'] == 'green' :
        alien['color'] = 'yellow'
        alien['speed'] = 'medium'
        alien['points'] = 10

# 显示前10个外星人：

for alien in aliens[:10]:
    print(alien)

print("...")
```

进一步扩展循环

```python
aliens = []

for alien_number in range(30):
    new_alien = {'color': 'green', 'points': 5, 'speed': 'slow'}
    aliens.append(new_alien)

for alien in aliens[0:3]:
    if alien['color'] == 'green' :
        alien['color'] = 'yellow'
        alien['speed'] = 'medium'
        alien['points'] = 10
    elif alien['color'] == 'yellow':
        alien['color'] = 'red'
        alien['speed'] = 'fast'
        alien['points'] = 15


# 显示前10个外星人：

for alien in aliens[:5]:
    print(alien)

print("...")
```

### 在字典中存储列表

下面的示例中,存储了比萨的两方面信息:外皮类型和配料列表。配料列表是一个与键'toppings' 相关联的值。要访问该列表,我们使用字典名和键'toppings' ,就像访问字典中的其他值一样。这将返回一个配料列表,而不是单个值

```python
# 存储比萨的信息
pizza = {'crust' : 'thick',
    'toppings' : ['mushrooms', 'extra cheese'],
}

# 概述披萨
print(f"You ordered a {pizza['crust']}-crust pizza with the following toppings:")

for topping in pizza['toppings']:
    print(f'{topping}')
```

每当需要在字典中将一个键关联到多个值时,都可以在字典中嵌套一个列表。

```python
# 创建一个字典，并存储信息
favorite_languages = {
    'jen': ['python', 'ruby'],
    'sarah': ['c'],
    'edward': ['ruby', 'go'],
    'phil': ['python', 'haskell'],
}

for name, languages in favorite_languages.items():
    print(f"\n{name.title()}'s favorite languages are:")
    for language in languages:
        print(f"{language.title()}")ß
```

### 在字典中存储字典

```python
# 创建字典的字典:

users = {
    'aeinstein':{
        'first': 'albert',
        'last':'einstein',
        'location':'princeton',},
    'mcurie':{
        'first':'marie',
        'last':'curie',
        'location':'paris',}
    }
for username, user_info in users.items():
    print(f"\nUser name: {username}")
    full_name = f"{user_info['first']} {user_info['last']}"
    location = user_info['location']
    print(f"\tFull name: {full_name.title()}")
    print(f"\tLocation: {location.title()}")
```

```python
pets = {
    'dog':{
        'animal':'dog',
        'owner':'john',
        'weight':20,
        'eats':'meat',},
    'cat':{
        'animal':'cat',
        'owner':'sarah',
        'weight':15,
        'eats':'fish',},
    'goldfish':{
        'animal':'goldfish',
        'owner':'edward',
        'weight':1,
        'eats':'fish',},
    'rabbit':{
        'animal':'rabbit',
        'owner':'phil',
        'weight':3,
        'eats':'carrots',},
}

for pet, pet_info in pets.items():
    print(f"\nPet: {pet.title()}")
    print(f"Its owner: {pet_info['owner'].title()}.\nIt weights {pet_info['weight']} pounds, you can feed it with {pet_info['eats']}.")

```

## 小结

在本章中,你学习了:

- 如何定义字典
- 如何使用存储在字典中的信息
- 如何访问和修改字典中的元素
- 如何遍历字典中的所有信息
- 遍历字典中所有的键值对、所有的键和所有的值;
- 如何在列表中嵌套字典、在字典中嵌套列表以及在字典中嵌套字典
