// Datei muss kompiliert werden mit >> gcc -fPIC -shared -o checkprime.so checkprime.c
//#include <stdlib.h>
//#include <stdio.h>
#include <math.h>

int istPrimzahl(int zahl);

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