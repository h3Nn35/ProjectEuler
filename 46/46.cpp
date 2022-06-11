#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int istPrimzahl(int zahl);
int check(int i, const vector<int> & primzahlen);

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

int check(int i, const vector<int> & primzahlen){
    int x;
    double zahl;
    for (int a = 0; a < primzahlen.size(); a++){
        x = primzahlen[a];
        zahl = sqrt((i - x) / 2);
        if (zahl == (int)zahl)
            return 0;
    }
    return 1;
}

int main(){
    vector<int> primzahlen;
    primzahlen.push_back(2);
    for (int i = 3; i < 1000000; i += 2){
        if (istPrimzahl(i) == 1)
            primzahlen.push_back(i);
        else if (check(i, primzahlen) == 1){
            cout << i;
            break;
        }
    }
}