#include "fac.h"
#include <iostream>
using namespace std;
long factorial(long n){
    if (n < 0) {
        cerr << "ERROR: attempt to calculate factorial of a negative integer" << endl;
        return 0;
    }
    if (n==0) return 1;
    if (n==1) return 1;
    return n*factorial(n-1);
}
