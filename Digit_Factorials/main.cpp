#include <iostream>
#include <cmath>
using namespace std;

int faktorial(int x){
    if (x > 1)
        return x * faktorial(x - 1);
    return 1;
}

int main() {
    int ergebnis = 0;
    for (int i = 3; i < 10000000; i++){
        int summe = 0, nummer = i;
        do{
            int temp = nummer % 10;
            nummer /= 10;
            summe += faktorial(temp);
        }while(nummer > 0);
        if (summe == i){
            ergebnis += summe;
        }
    }
    cout << ergebnis;
    return EXIT_SUCCESS;
}
