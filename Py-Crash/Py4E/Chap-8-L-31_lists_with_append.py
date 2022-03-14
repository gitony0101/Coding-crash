# Chap-8-L-31_lists_with_append.py
numlist = list()
while True:
	inp = input('Enter a number:')
	if inp == 'done':break
	value = float(inp)
	numlist.append(value)
average = sum(numlist)/len(numlist)

print('Average:',average)