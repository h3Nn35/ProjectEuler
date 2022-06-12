#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int istPrimzahl(int zahl){
    if (zahl == 2)
        return 1;
    if (zahl == 1 || zahl % 2 == 0)
        return 0;
    for (int i = 3; i < sqrt(zahl) + 1; i += 2)
        if (zahl % i == 0)
            return 0;
    return 1;
}

int main() {
    vector<int> primzahlen;
    int j, summe, anzahl, max = 0, spitzenreiter, x, y;
    primzahlen.push_back(2);
    for (int i = 3; i < 1000000; i+=2)
        if (istPrimzahl(i))
            primzahlen.push_back(i);

    //cout << primzahlen[primzahlen.size() - 165] << endl; 997651
    cout << primzahlen.size() << endl;

    for (int i = 78333; i < primzahlen.size(); i++){
        x = primzahlen[i];
        summe = j = anzahl = 0;
        while(summe < primzahlen[i]){
            y = primzahlen[j];
            summe += primzahlen[j];
            anzahl++;
            j++;
        }
        if (summe == primzahlen[i] && anzahl > max){
            spitzenreiter = primzahlen[i];
            max = anzahl;
        }
    }


    cout << spitzenreiter; //997651
    return EXIT_SUCCESS;
}
