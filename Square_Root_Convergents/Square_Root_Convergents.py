import math


def anzahlstellen(n):
    if n > 0:
        digits = int(math.log10(n)) + 1
    elif n == 0:
        digits = 1
    elif n < 0:
        digits = int(math.log10(-n)) + 2
    return digits


def main():
    limit = 1000
    zaehler = 3
    nenner = 2
    result = 0

    for i in range(limit):
        alterzaehler = zaehler
        zaehler = zaehler + 2 * nenner
        nenner = alterzaehler + nenner
        if anzahlstellen(zaehler) > anzahlstellen(nenner):
            result += 1

    print(result)


if __name__ == "__main__":
    main()
