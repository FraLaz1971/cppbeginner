#include "gcd.h"
#include <iostream>
using namespace std;
long gcd(long a, long b) {
    long c;
    // if a and b are both zero, print an error and return 0
    if ( (a==0) && (b==0) ) {
    cerr << "WARNING: gcd called with both arguments equal to zero."
    << endl;
    return 0;
}
// Make sure a and b are both nonnegative
if (a<0) {
    a = -a;
}

if (b<0) {
    b = -b;
}
// if a is zero, the answer is b
if (a==0) return b;
// If b is zero,the answer is a
if (b==0) return a;

c = a%b;
return gcd(b,c);


}
