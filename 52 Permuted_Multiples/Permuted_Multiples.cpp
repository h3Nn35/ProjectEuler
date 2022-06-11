#include <iostream>

using namespace std;

bool istPermutation(int _original, int _zahl){
    int ziffern[10];
    string original = to_string(_original), zahl = to_string(_zahl), eins, zwei;
    int laengezahl = (int) zahl.length(), laengeoriginal = (int) original.length(), anzahl, i, j;
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

bool Permuted_Multiples(int zahl){
    for (int i = 2; i <= 6; i++){
        if (!istPermutation(zahl, i * zahl)){
            return false;
        }
    }
    return true;
}

int main(){
    int i;
    for (i = 1; i < 1000000; i++)
        if (Permuted_Multiples(i)){
            cout << i << endl;
            break;
        }
    return EXIT_SUCCESS;
}