#include "Timer.h"
#include <iostream>
#include <cmath>

using namespace std;

bool istPandigital(int zahl){
    string alsstring = to_string(zahl);
    int laenge = alsstring.length();
    int summe, zwei;
    for (int i = 0; i < laenge; i++) {
        summe = 0;
        for (int j = 0; j < laenge; j++) {
            zwei = stoi(alsstring.substr(j, 1));
            if (i + 1 == zwei)
                summe++;
        }
        if (summe != 1)
            return false;
    }
    return true;
}

bool istPrimzahl(int zahl){
    if (zahl == 2)
        return true;
    if (zahl == 1 || zahl % 2 == 0)
        return false;
    for (int i = 3; i < sqrt(zahl) + 1; i += 2)
        if (zahl % i == 0)
            return false;
    return true;
}


int main(){
    Timer t1;
    t1.start();
    int biggest;
    for (int i = 987654321; i > 999999; i -= 2){
        if (istPandigital(i)) {
            biggest = i;
            cout << i << "\r";
            cout.flush();
            if (istPrimzahl(i))
                break;
        }
    }
    t1.stop();
    cout << "Answer: " << biggest << endl << "Found in " << t1.getSeconds() << " seconds." << endl;
    return EXIT_SUCCESS;
}