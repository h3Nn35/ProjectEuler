#include <iostream>
#include "mathefunktionen.h"

int factorial(int x){
    if (x > 1)
        return x * factorial(x - 1);
    return 1;
}

bool istPalindrome(string kandidat){
    int stelle = 0, i = 0;
    do{
        if (kandidat.substr(stelle + i, 1) != kandidat.substr(kandidat.length() - 1 - i, 1))
            return false;
        i++;
    }while(i < (kandidat.length()/2));
    return true;
}

bool istPalindrome(int kandidatalszahl){
    string kandidat = to_string(kandidatalszahl);
    int stelle = 0, i = 0;
    do{
        if (kandidat.substr(stelle + i, 1) != kandidat.substr(kandidat.length() - 1 - i, 1))
            return false;
        i++;
    }while(i < (kandidat.length()/2));
    return true;
}

string toBinary(int n)
{
    if (n == 0)
        return "0";
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

long naechstePrimzahl(long letzteZahl){
    long zahl = letzteZahl;
        do {
            zahl += 1;
        } while (!istPrimzahl(zahl));
        return zahl;
}

int naechstePrimzahl(int Startzahl){
    int zahl = Startzahl;
        do {
            zahl += 1;
        } while (!istPrimzahl(zahl));
        return zahl;
}

bool istPrimzahl(long zahl){
    if (zahl == 1)
        return false;
    if (zahl % 2 == 0)
        return false;
    if (zahl == 4)
        return false;
    for (long i = 2; i < zahl / 2; i++)
        if (zahl % i == 0)
            return false;
    return true;
}

bool istPrimzahl(int zahl){
    if (zahl == 1)
        return false;
    if (zahl % 2 == 0)
        return false;
    if (zahl == 4)
        return false;
    for (int i = 2; i < zahl / 2; i++)
        if (zahl % i == 0)
            return false;
    return true;
}