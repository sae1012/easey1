#include <iostream>
#include <math.h>
#include "easy.h"
using namespace std;
int itc_str(int a, int b, int c){
    int p, S;
    if (a + b > c && a + c > b && b + c > a ){
        p = (a + b + c) / 2;
        S = itc_sqrt((int)p * (p - a) * (p - b) * (p - c));
        return S;
        }
    else {
        return -1;
    }
}

