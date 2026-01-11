#include <iostream>
#include <string>
#include "Pair.h"

int main() {

    Pair<int> intPair(15, 7);
    std::cout << "Int Pair- Min: " << intPair.getMin()
              << ", Max: " << intPair.getMax() << std::endl;


    Pair<std::string> stringPair("apple", "orange");
    std::cout << "String Pair- Min: " << stringPair.getMin()
              << ", Max: " << stringPair.getMax() << std::endl;

    return 0;
}
