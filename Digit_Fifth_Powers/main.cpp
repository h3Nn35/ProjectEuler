#include <iostream>
using namespace std;

int main() {
    int summe, kandidat, d, temp, ergebnis = 0;
    for (int i = 2; i < 1000000; i++){
        summe = 0;
        kandidat = i;
        while (kandidat > 0){
            d = kandidat % 10;
            kandidat /= 10;
            temp = d;
            for (int i = 0; i < 4; i++)
                temp *= d;
            summe += temp;
        }
        if (summe == i)
            ergebnis += i;
    }
    cout << ergebnis << endl;
}
