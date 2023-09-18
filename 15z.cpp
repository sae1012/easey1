#include <iostream>
#include <cmath>
#include "easy.h"
using namespace std;
double itc_scir(int radius){
    double s;
    s = 3.14 * (radius*radius);
    if (radius > 0){
        return s;
    }
    else{
        return -1;
    }
}
