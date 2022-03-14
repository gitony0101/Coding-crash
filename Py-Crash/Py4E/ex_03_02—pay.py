# Python 4 everybody work-pay ex_03_02

xh = input('Enter Hours:')
sr = input('Enter Rate:')
try:
	fh = float(xh)
	fr = float(sr)
except:
	print("Error,please enter numeric input")
	quit() #if blocked, just stop here,just quit

print(fh,fr)
if fh > 40:
	reg_pay = fr * fh
	overtime_pay = (fh - 40) * (fr *0.5)
	xp = reg_pay + overtime_pay
else:
	xp = fh * fr
print ('Pay', xp)
