#include <iostream>
using namespace std;

class PowerCalculator {
public:
    PowerCalculator() {
        cout << "PowerCalculator object created." << endl;
    }

    ~PowerCalculator() {
        cout << "PowerCalculator object destroyed." << endl;
    }


    double calculate(double base, int exponent) {
        if (exponent == 0) {
            return 1;
        }
        else if (exponent > 0) {
            return base * calculate(base, exponent - 1);
        }
        else {
            return 1 / calculate(base, -exponent);
        }
    }
};

int main() {
    double base;
    int exponent;
    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;
    PowerCalculator pc;

    double result = pc.calculate(base, exponent);

    cout << base << " raised to the power of " << exponent << " is " << result << endl;

    return 0;
}
