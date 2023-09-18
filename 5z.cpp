#include <iostream>
#include "easy.h"
using namespace std;
int itc_revnbr(int num){
    int m = 0, u = 0, n = 0;
    m = (num % 10) * 100;
    u = ((num / 10) % 10) * 10;
    n = num / 100;
    return m + n + u;
}
