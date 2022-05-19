def istpalindrome(x):
    n = str(x)
    i = 0
    while i < (len(n) / 2):
        if n[i] != n[len(n) - i - 1]:
            return False
        i += 1
    return True


def drehen(x):
    zurueck = 0
    while x > 0:
        temp = x % 10
        zurueck = (zurueck * 10) + temp
        x = x // 10
    return zurueck


def main():
    anzahl = 0
    for i in range(10000):
        zahl = i
        for j in range(51):
            zahl = zahl + drehen(zahl)
            if istpalindrome(zahl):
                anzahl += 1
                break
    print(10000 - anzahl)


if __name__ == "__main__":
    main()
