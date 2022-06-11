#include <iostream>
#include <string>
using namespace std;

bool istPrimzahl(int zahl);
int naechstePrimzahl(int zahl);

int naechstePrimzahl(int zahl){
    do {
        zahl++;
    } while (!istPrimzahl(zahl));
    return zahl;
}

bool istPrimzahl(int zahl){
    if (zahl == 1 || zahl == 4)
        return false;
    for (int i = 2; i < (zahl / 2) + 1; i++)
        if (zahl % i == 0)
            return false;
    return true;
}


int main(){
    int kandidat = 10, summe = 0, anzahl = 0, laenge = 0;
    string alsstring = "", zumtesten = "", zumtesten2 = "";
    bool valid = true;
    kandidat = naechstePrimzahl(kandidat);
    do{
        cout << kandidat << "\r";
        cout.flush();
        valid = true;
        alsstring = to_string(kandidat);
        laenge = alsstring.length();
        for (int i = 0; i < laenge -1; i++){
            zumtesten = alsstring.substr(0, laenge - i - 1);
            zumtesten2 = alsstring.substr(i + 1, laenge);
            if (!istPrimzahl(stoi(zumtesten)) || !istPrimzahl(stoi(zumtesten2))){
                valid = false;
                break;
            }
        }
        if (valid){
            summe += kandidat;
            anzahl++;
        }
        kandidat = naechstePrimzahl(kandidat);
    }while(kandidat < 1000000);
    cout << endl;
    cout << anzahl << endl;
    cout << summe << endl;
    return EXIT_SUCCESS;
}
