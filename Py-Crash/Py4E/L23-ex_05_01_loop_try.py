# L23 ex_05_01.py
# while loop

num = 0
tot = 0.0
while True:
	sval = input('Enter a number:')
	if sval == 'done':
		break
	try:
		fval = float(sval)#we do not know whether the value can be transfered to the float
	except:
		print('Invalid input')
		#rethink here, how can we feel this part
		continue
	# print(fval)
	num = num + 1
	tot = tot + fval
print('All Done')
print(tot,num,tot/num)

