#include <iostream>
using namespace std;

int main() {
    int longest = 0, anzahl, kandidat, spitzenreiter = 0;
    long n;
    for (int i = 1; i < 1000001; i++){
        kandidat = i;
        n = i;
        anzahl = 1;
        do {
            if (n % 2 == 0)
                n = n / 2;
            else
                n = 3 * n + 1;
            anzahl += 1;
        }while(n != 1);
        if (anzahl > longest) {
            longest = anzahl;
            spitzenreiter = kandidat;
        }
    }
    cout << spitzenreiter << endl;
}
