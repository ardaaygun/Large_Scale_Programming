#include <iostream>

int main() {
    int n1, n2 ,n3,Sum, Average;
    std::cout<<" Enter three numbers: ";
    std::cin>> n1>> n2>> n3;
    Sum = n1 + n2 + n3;
    Average = Sum/3;

    std::cout<<"Sum: " << Sum << "   Average: " << Average;

return 0;
}
