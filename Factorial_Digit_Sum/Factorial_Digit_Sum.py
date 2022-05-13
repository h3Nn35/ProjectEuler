import math
from unittest import result

def fak(n):
	if n == 0:
		return True
	else:	
		ergebnis = n * fak(n-1)
		return ergebnis

result = 0
fakultaet = str(fak(100))
digits = len(fakultaet)
for i in range(digits):
    result = result + int(fakultaet[i])

print(result)