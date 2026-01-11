#include <iostream>
#include <cmath>   // for sqrt() and pow()
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter length of leg A: ";
    cin >> a;

    cout << "Enter length of leg B: ";
    cin >> b;


    c = sqrt(pow(a, 2) + pow(b, 2));


    cout << "A: " << a << " -> B: " << b << " -> Hypotenuse: " << c << endl;

    return 0;
}
