#include "fac.h"
#include <iostream>
using namespace std;
/**
* A program to test the gcd procedure that uses the Euclide algorithm.
*/
int main() {
    long a, b;
    cout << "Enter a positive integer number --> ";
    cin >> a;
    b = factorial(a);
    if (b > 0)
        cout << "The factorial of " << a << " is " << b << endl;
    else
        cerr << "Some error occurred" << endl;
    return 0;
}
