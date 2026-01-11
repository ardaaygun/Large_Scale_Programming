#include <iostream>
#include <iomanip>
int main() {
    int lenght , volume;

    std::cout << "Enter the side lenght of the cube: ";
    std::cin >> lenght;
    volume = lenght * lenght * lenght;
    std::cout << "Volume of the cube : "<< volume;

        return 0;
}