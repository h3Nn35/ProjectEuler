abundant = []
zahlen = []
ergebnis = 0

for i in range(12, 28123, 1):
    summe = 0
    for j in range(1, int(i / 2) + 1, 1):
        if i % j == 0:
            summe += j
    if summe > i:
        abundant.append(i)

laenge = len(abundant)

for a in range(0, laenge - 1, 1):
    if abundant[a] > 14100:
        break
    for b in range(a, laenge - 1, 1):
        i = abundant[a] + abundant[b]
        if i > 28123:
            break
        zahlen.append(i)

setzahlen = set(zahlen)

summe = 0

for i in range(1, 28124,1):
    summe += i

for i in setzahlen:
    ergebnis += i

print(summe - ergebnis)

