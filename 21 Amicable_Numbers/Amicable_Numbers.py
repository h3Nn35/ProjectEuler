def findsumofdiv(n):
    teiler = []
    summe = 0
    for i in range(1, n):
        if n % i == 0:
            teiler.append(i)
    for i in range(len(teiler)):
        summe += teiler[i]
    return summe


def amicable_numbers(eingabe):
    numbers = []
    for j in range(1, eingabe):
        x = findsumofdiv(j)
        if j == findsumofdiv(x) and j != x:
            numbers.append(j)

    ergebnis = 0
    for a in range(len(numbers)):
        ergebnis += numbers[a]

    return ergebnis

print(amicable_numbers(20000))