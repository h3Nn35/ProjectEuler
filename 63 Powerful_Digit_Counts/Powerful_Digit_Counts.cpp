#include <iostream>
#include <cmath>

using namespace std;

int count_digit(int x){
        int count = 0;
        while (x != 0) {
            x = x / 10;
            ++count;
        }
        return count;
}

int main(){
    int i, anzahlstellen, ergebnis = 0, zahl, max = 2147483647;
    double test;
    for (i = 1; i < max; i++){
        anzahlstellen = count_digit(i);
        test = pow(i, (1.0 / anzahlstellen));
        zahl = round(test);
        if (pow(zahl, anzahlstellen) == i){
            ergebnis++;
            cout << i << endl;
            cout << max << endl;
            cout << ergebnis << endl << endl;
        }
    }
    cout << ergebnis << endl;
    return EXIT_SUCCESS;
}