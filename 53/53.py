def factorial(n):
    if n > 1:
        return factorial(n - 1) * n
    return 1

anzahl = 0

for n in range(101):
    for r in range(n+1):
        if (factorial(n) / (factorial(r) * factorial(n - r))) >= 1000000:
            anzahl += 1
        
print(anzahl)
