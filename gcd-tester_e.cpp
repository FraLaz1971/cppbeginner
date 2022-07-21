#include "gcd.h"
#include <iostream>
using namespace std;
/**
* A program to test the gcd procedure that uses the Euclide algorithm.
*/
int main() {
    long a,b;
    cout << "Enter the first number --> ";
    cin >> a;
    cout << "Enter the second number --> ";
    cin >> b;
    cout << "The gcd of " << a << " and " << b << " is "
    << gcd(a,b) << endl;
    return 0;
}
