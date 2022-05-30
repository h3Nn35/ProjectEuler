#include<iostream>
using namespace std;
// Takes quiet a long time: The answer is 76576500
int main(){
    int kandidat = 0, anzahl, zaehler = 1;
    do{
        anzahl = 0;
        kandidat += zaehler;
        zaehler += 1;
        for (int i = 1; i < (kandidat/2+1); i++){
            if (kandidat % i == 0)
                anzahl += 1;
        }
    }while (anzahl < 500);
    cout << kandidat << endl;
}