from ctypes import *
from math import sqrt

eigen = CDLL('checkprime.so')
ende = False

primzahlen = []
primzahlen.append(2)
primzahlen.append(3)

for i in range(3, 1000000, 2):
    if eigen.istPrimzahl(i) == 1:
        primzahlen.append(i)
    else:
        for x in primzahlen:
            zahl = sqrt((i - x) / 2)
            if zahl == int(zahl):
                break
            if x == primzahlen[len(primzahlen) - 1]:
                print(i)
                ende = True
    if ende:
        break
