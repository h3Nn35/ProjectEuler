from math import sqrt

def hexa(n):
    return int(n * (2 * n - 1))

def isPentagonal(n):
    ergebnis = (sqrt(1 + 24 * n) + 1.0) / 6.0
    return ergebnis == int(ergebnis)


i = 1

while 1 == 1:
    i += 2
    ergebnis = hexa(i)
    if isPentagonal(ergebnis) and ergebnis != 40755:
            break

print(ergebnis)