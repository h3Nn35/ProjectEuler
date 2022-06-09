ergebnis = 0
for i in range(1,1001,1):
    temp = i**i
    ergebnis = ergebnis +temp

alstext = str(ergebnis)

laenge = len(alstext)

substring = alstext[laenge - 10:]
print(alstext)
print(substring)