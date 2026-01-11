#include <iostream>

int main() {
    double km, miles;

    std::cout << "Enter distance in kilometers: ";
    std::cin >> km;

    miles = km * 0.621371;

    std::cout << km  <<"KM - " << miles<<"Miles" << std::endl;

    return 0;
}
