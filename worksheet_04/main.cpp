
#include <iostream>
#include "Calculator.h"

int main() {
    Calculator calc;

    int a = 8;
    int b = 5;


    std::cout << a << " + " << b << " = " << calc.add(a, b) << std::endl;
    std::cout << a << " - " << b << " = " << calc.subtract(a, b) << std::endl;

    return 0;
}
