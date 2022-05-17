#include <iostream>
#include "mathefunktionen.h"
#include "mathefunktionen.cpp"
using namespace std;

int main() {
    int summe = 0;
    for (int i = 0; i < 1000000; i++){
        if (istPalindrome(i) && istPalindrome(toBinary(i)))
                summe += i;
    }
    cout << summe;
    return EXIT_SUCCESS;
}
