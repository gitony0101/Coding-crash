# ex_09-2.py
fname = input('Enter File:')
if len(fname) < 1 : fname = 'clown.txt'
#then what's next? open the fname:
hand = open(fname)

## make a dictionary:
di = dict() 
## corresponds the if w in di inner loop below:

for lin in hand:
	lin = lin.rstrip()

	wds = lin.split()

	for w in wds:

		print('***************',w,di.get(w,-99))
		if w in di: 
			di[w] = di[w] + 1

		else:
			di[w] = 1

		# print(w,di[w])
print(di)
