# Chap5 - L-20-01_idoms_and_loop_idioms.py
print('Before')
for thing in [9,41,12,3,74,7,22,12]:
	print(thing)
print('After')

# finding the largest value(with process)

print("__Now,Finding the largest value(with process).__")

largest_so_far = -1
print('Before',largest_so_far)
for the_num in [9,41,12,3,74,7,22,12]:
	if the_num > largest_so_far:
		largest_so_far = the_num
	print(largest_so_far, the_num)
print("After", largest_so_far)


# counting in a loop
print("____count the loop____")
zork = 0 # we need too start from here as the innitialization.`
print('before',zork)
for thing in [9,41,12,3,74,7,22,12]:
	zork = zork + 1 # labling the number
	print(zork,thing)
print('After',zork)

#Summing in a Loop
print("_____Summing in the loop____")
zork = 0
print('Before',zork)
for thing in [9,41,12,3,74,7,22,12]:
	zork = zork + thing # sum from 0
	print(zork,thing)
print('After',zork)

# also, we can define the name as usual and find the average 
print("_____Find the Average in a loop____")
count = 0
sum = 0
print('Before',count,sum)
for value in [9,41,12,3,74,7,22,12]:
	count = count + 1
	sum = sum + value
	print(count,sum,value)
print('After',count,sum,sum/count)






