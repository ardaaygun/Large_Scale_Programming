#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int base, exponent;
    double result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;


    result = pow(base, exponent);


    cout << "Base: " << base << " : Exponent: " << exponent << " : Result: " << result << endl;

    return 0;
}
