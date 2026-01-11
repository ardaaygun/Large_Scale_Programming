#include <iomanip>
#include <iostream>

int main (){

    float  base , height ,area ;

    std::cout <<"Enter the base of the triangle:";
    std::cin>>base;
    std::cout<< "Enter the height of the triangle:";
    std::cin>> height;

    area = 0.5 * base  * height;

    std::cout<< std::fixed << std::setprecision(2);
    std::cout<< "Base:" << base << " | Height: " << height << " | Area: " << area << std::endl;
    return 0;

}