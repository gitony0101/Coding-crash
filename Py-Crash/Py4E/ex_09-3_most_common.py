# ex_09-3_most_common.py
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

		di[w] = di.get(w,0) + 1
		print(w,'--new--',di[w])

# now we want to find the most commmon word


maxs = -1  #quick maximun loop with the largest equals -1
theword = None

for k,v in di.items():
	print(k,v)
	if v > maxs:
		maxs = v
		theword = k #capture/remember the most common word

print('Done',maxs,theword )