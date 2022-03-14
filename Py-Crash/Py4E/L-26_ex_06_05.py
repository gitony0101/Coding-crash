# Python 4 everybody  ex_06_05
str = 'X-DSPAM-Confidence:0.8475 '# I modifeied the data here with an extra whitespace
colon = str.find(":")
print(colon)
sppos = str.find(' ',colon)
print(sppos)
num_after_colon = str[colon + 1:sppos]
print(num_after_colon)
#### solution:

print('----------Excercise 6.5--------solution----')
#with original dataset(no more white space after the num:
str = 'X-DSPAM-Confidence:0.8475' 
ipos= str.find(':')
print(ipos)
piece = str[ipos+1:]
print(piece)
value = float(piece)
print(value)