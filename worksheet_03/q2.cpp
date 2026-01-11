#include <iostream>
using namespace std;


class Tool {
public:
    void use() {
        cout << "Performing a generic task" << endl;
    }
};


class Hammer : public Tool {
public:
    void use() {
        cout << "Pounding a nail" << endl;
    }
};

int main() {
    Hammer myHammer;
    myHammer.use();  // Calls the overridden function

    return 0;
}