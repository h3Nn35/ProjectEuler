#include <iostream>
#include "mathefunktionen.cpp"

int main() {
    int kandidat = 10, summe = 0, anzahl = 0;
    string zumtesten, zumtesten2, kandidatAlsString;
    bool valid = true;
    kandidat = naechstePrimzahl(kandidat);
    do{
        valid = true;
        kandidatAlsString = to_string(kandidat);
        for (int i = 0; i < kandidatAlsString.length() - 1; i++){
            zumtesten = kandidatAlsString.substr(0, kandidatAlsString.length() - i - 1);
            zumtesten2 = kandidatAlsString.substr(i + 1, kandidatAlsString.length() - i);
            if (!istPrimzahl(stoi(zumtesten)) || !istPrimzahl(stoi(zumtesten2))) {
                valid = false;
                break;
            }
        }
        if (valid) {
            summe += kandidat;
            anzahl++;
            cout << anzahl << endl;
            cout << kandidat << endl;
        }
        kandidat = naechstePrimzahl(kandidat);
    }while (kandidat < 1000000);
    cout << summe;
    return EXIT_SUCCESS;
}
