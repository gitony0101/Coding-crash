# Python 4 everybody work-pay ex_0406-1

def computepay(hours, rate):
	print("In computepay",hours,rate)

xh = input('Enter Hours:')
sr = input('Enter Rate:')
fh = float(xh)
fr = float(sr)


#call the function computepay here:
computepay(fh,fr)
# compare the code:
# where the "fh" met the hour and the "fr" met the rate

# def computepay(hours, rate):
# 		print("In computepay",hours,rate)



if fh > 40:
	reg_pay = fr * fh
	overtime_pay = (fh - 40) * (fr *0.5)
	xp = reg_pay + overtime_pay
else:
	xp = fh * fr
print ('Pay', xp)
