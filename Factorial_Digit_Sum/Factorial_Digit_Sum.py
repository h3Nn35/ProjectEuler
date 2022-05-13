def fak(n):
	if n == 0:
		return True
	else:	
		ergebnis = n * fak(n-1)
		return ergebnis

result = 0
fakultaet = str(fak(100))
for i in range(len(fakultaet)):
    result += int(fakultaet[i])

print(result)