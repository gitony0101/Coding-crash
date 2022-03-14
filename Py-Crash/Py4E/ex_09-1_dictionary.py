# ex_09-1.py
fname = input('Enter File:')
if len(fname) < 1 : fname = 'clown.txt'
#then what's next? open the fname:
hand = open(fname)

## make a dictionary:
di = dict() 
## corresponds the if w in di inner loop below:

for lin in hand:
	lin = lin.rstrip()
	## show the tripped txt:
	# print(lin)
	##split the words:
	wds = lin.split()
	## print the splitted words:
	# print(wds)
	##print every word:
	for w in wds:
		# print(w)
		# print('***************',w,di.get(w,-99))
		if w in di:
			di[w] = di[w] + 1
			print('~~~~~Existing~~~~~')
		else:
			di[w] = 1
			print('______New______')
		print(w,di[w])
		
print(di)
