import math

file = open('p099_base_exp.txt', 'r')
max = 0
spitzenreiter = 0
line = 0

for zeile in file:
    line += 1
    paar = zeile.split(",")
    basis = int(paar[0])
    exponent = int(paar[1])
    zahl = exponent * math.log10(basis)
    if zahl > max:
       spitzenreiter = line
       max = zahl

print(spitzenreiter)