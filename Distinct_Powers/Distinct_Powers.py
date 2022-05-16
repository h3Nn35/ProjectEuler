potenzen = []
anzahl = 0
ende = 101
for a in range(2, ende):
    for b in range(2, ende):
        ergebnis = a ** b
        if ergebnis in potenzen:
            continue
        else:
            potenzen.append(ergebnis)

print(len(potenzen))
