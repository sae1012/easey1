#include <iostream>
#include <math.h>
#include "easy.h"
using namespace std;
int itc_sqrt(int num){
    for(long long n = 0; n <= num; n++){
        if(n * n > num){
            return -1;
        }
        if (n*n == num){
            return (int) n;
        }
    }
    if (num < 0){
        return -1;
    }
}
