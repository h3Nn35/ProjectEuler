from ast import AugStore
from sympy import false, isprime, true

def rotieren(zahl):
    zahl = str(zahl)
    ausgabe = ""
    for i in range(0, len(zahl), 1):
        if i == 0:
            ausgabe = ausgabe + zahl[len(zahl) - 1]
        else:
            ausgabe = ausgabe + zahl[i - 1]
    
    return int(ausgabe)

def teste(zahl):
    if isprime(zahl):
        for x in range(len(str(i)) - 1):
            zahl = rotieren(zahl)
            if not isprime(zahl):
                return false
        return true
    else:
        return false

ergebnis = 13

for i in range(101, 1000000, 2):
    if teste(i):
        ergebnis += 1
    
print(ergebnis)