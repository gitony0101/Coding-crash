# Chap5 - L-20-02_idoms_and_loop_idioms.py
# find the number greater than 20
print("1.find the number greater than 20")
print('Before')
for value in [9,41,12,3,74,7,22,12]:
	if value > 20:
		print("Large number", value)
print('After')

#Search Using a Boolean Variable:
print("2.Search Using a Boolean Variable")

found = False # look at the initial boolean value
print('Before',found)
for value in [9,41,12,3,74,7,22,12]:
	if value == 3:
		found = True
	print(found, value)
print('After',found)

# Find the samllest value:
print("3._____Find the smallest value______")

# Min_so_far = -1
# print('Before',Min_so_far)
# for the_num in [9,41,12,3,74,7,22,12]:
# 	if the_num < Min_so_far:
# 		Min_so_far = the_num
# 	print(Min_so_far,the_num)
# print('After',Min_so_far)

# failed not work

Min_so_far = None
print("Before")
for value in [9,41,12,3,74,7,22,12]:
	if Min_so_far is None:
		Min_so_far = value
	elif value < Min_so_far:
		Min_so_far = value
	print('After',Min_so_far)