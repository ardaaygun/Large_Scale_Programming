#include <iostream>
#include <string>

using namespace std;

void printData(int value) {
    cout << "Integer: " << value << endl;
}

void printData(double value) {
    cout << "Double: " << value << endl;
}

void printData(const string& value) {
    cout << "String: " << value << endl;
}

int main() {
    printData(42);
    printData(3.14159);
    printData("Hello, C++!");

    return 0;
}
