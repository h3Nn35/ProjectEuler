spitzenreiter = 0
summe = 0
anzahl = 100

for a in range(anzahl):
    for b in range(anzahl):
        summe = 0
        zahl = a**b
        alsstring = str(zahl)
        for x in alsstring:
            summe += int(x)
        if summe > spitzenreiter:
            spitzenreiter = summe

print(spitzenreiter)
