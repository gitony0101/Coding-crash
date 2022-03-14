# Python 4 everybody work-pay ex_03_01

xh = input('Enter Hours:')
sr = input('Enter Rate:')
fh = float(xh)
fr = float(sr)
# print(fh,fr)
if fh > 40:
	print("Over time")
	reg_pay = fr * fh
	overtime_pay = (fh - 40) * (fr *0.5)
	print(reg_pay,overtime_pay)
	xp = reg_pay + overtime_pay
else:
	print("Regular time")
xp = fh * fr
print ('Pay', xp)