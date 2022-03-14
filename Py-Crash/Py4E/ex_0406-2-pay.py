# Python 4 everybody work-pay ex_0406-2

def computepay(hours, rate):
	# print("In computepay",hours,rate) 
		#this is an interesting part,feel it
	if hours > 40:
		reg_pay = rate * hours
		overtime_pay = (hours - 40) * (rate *0.5)
		pay = reg_pay + overtime_pay
	else:
		pay = rate * hours
	print("Returning",pay)
	return pay

xh = input('Enter Hours:')
sr = input('Enter Rate:')
fh = float(xh)
fr = float(sr)

xp = computepay(fh,fr)


print ('Pay', xp)
