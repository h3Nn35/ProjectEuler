#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c, anzahl, max = 0, spitzenreiter = 0;
    double temp;
    for (int x = 1; x < 1001; x++) {
        anzahl = 0;
        for (int i = 1; i < 998; i++) {
            a = i;
            for (int j = a; j < 998; j++) {
                b = j;
                temp = sqrt(a * a + b * b);
                if (temp - floor(temp) != 0 || a + b + temp != x)
                    continue;
                else
                    anzahl++;
            }
        }
        if (anzahl > max){
            max = anzahl;
            spitzenreiter = x;
        }
    }
    cout << spitzenreiter << endl;
    return EXIT_SUCCESS;
}