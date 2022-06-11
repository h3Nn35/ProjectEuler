from num2words import num2words

ergebnis = 0
for i in range(1, 1001, 1):
    ergebnis = ergebnis + len( ''.join(caracter for caracter in num2words(i) if caracter.isalnum()) )

print(ergebnis)