def build_person(first_name, last_name,age=None):
            ## age 默认没有，如果添加了再说
    """""返回一个字典,其中包含有关一个人的信息"""
    person = {'first': first_name, 'last': last_name}
    if age:
        person['age'] = age
    return person

musician = build_person('jimi', 'hendrix',age=30)
print(musician)

# 好像不太能用：

#      if type(age) == int:

#             person['age'] = age
#             return person
#         else:
#             print('Please enter a valid age')