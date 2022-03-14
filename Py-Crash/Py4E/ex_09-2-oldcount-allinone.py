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
		# if the key is not there the count is Zero
		# oldcount = di.get(w,0) 
		# # get the value under the key be social with a key 
		# # or give me zero back
		# print(w,'~~old~~',oldcount)
		# newcount = oldcount + 1 
		# di[w] = newcount
 
	## all above in one line:
		#idiom :retrive/create/update counter

		di[w] = di.get(w,0) + 1
		print(w,'--new--',di[w])

print(di)
