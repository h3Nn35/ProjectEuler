#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool isPermutation(int _original, int _zahl){
    int ziffern[10];
    string original = to_string(_original), zahl = to_string(_zahl), eins, zwei;
    int laengezahl = zahl.length(), laengeoriginal = original.length(), summe, anzahl, i, j;
    if (laengezahl != laengeoriginal)
        return false;

    for (i = 0; i < 10; i++){
        ziffern[i] = anzahl = 0;
        eins = to_string(i);
        for (j = 0; j < laengezahl; j++){
            zwei = original.substr(j, 1);
            if (eins == zwei)
                anzahl++;
        }
        ziffern[i] = anzahl;
    }

    for (i = 0; i < 10; i++){
        anzahl = 0;
        eins = to_string(i);
        for (j = 0; j < laengezahl; j++){
            zwei = zahl.substr(j, 1);
            if (eins == zwei)
                anzahl++;
        }
        if (anzahl != ziffern[i])
            return false;
    }
    return true;
}

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
    int anzahlprimes = 0;
    for (int a = 1001; a < 10000; a++){
        if (istPrimzahl(a))
            anzahlprimes++;
    }
    //int anzahl = 1061, x = 0;
    int anzahl = anzahlprimes, x = 0;
    int primzahlen[anzahl];
    for (int i = 1001; i < 10000; i++) {
        if (istPrimzahl(i)) {
            primzahlen[x] = i;
            x++;
        }
    }
    for (int i = 0; i < anzahl; i++){
        for (int j = i + 1; j < anzahl; j++){
            if (isPermutation(primzahlen[i], primzahlen[j])){
                for (x = j + 1; x < anzahl; x++){
                    if (isPermutation(primzahlen[j], primzahlen[x])){
                        if (primzahlen[j] - primzahlen[i] == primzahlen[x] - primzahlen[j])
                            cout << primzahlen[i] << "." << primzahlen[j] << "." << primzahlen[x] << endl;
                    }
                }
            }
        }
    }
    return EXIT_SUCCESS;
}
