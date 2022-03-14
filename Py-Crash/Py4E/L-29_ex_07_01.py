# L-29 ex_07_01.py
fh = open('mbox-short.txt')
# print(fh)

for lx in fh:
	ly = lx.rstrip() # again, we strip the right whitespace
	print(ly.upper())