#include <iostream>
#include <cmath>

using namespace std;

bool istPrimzahl(int zahl){
    if (zahl == 2)
        return true;
    if (zahl == 1 || zahl % 2 == 0)
        return false;
    for (int i = 3; i < sqrt(zahl) + 1; i += 2)
        if (zahl % i == 0)
            return false;
    return true;
}

int main(){
    int anzahlprimes = 0, i;
    for (i = 1; i < 1000000; i++){
        if (istPrimzahl(i))
            anzahlprimes++;
    }
    int anzahl = anzahlprimes, x = 0;
    int primzahlen[anzahl];
    for (i = 1; i < 1000000; i++) {
        if (istPrimzahl(i)) {
            primzahlen[x] = i;
            x++;
        }
    }

    cout << anzahlprimes;

    return EXIT_SUCCESS;
}