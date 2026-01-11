#include <iostream>
using namespace std;

class Vector {
private:
    int x, y, z;

public:

    Vector(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }


    Vector operator-(const Vector& other) {
        return Vector(x - other.x, y - other.y, z - other.z);
    }


    void print() {
        cout << "<" << x << ", " << y << ", " << z << ">" << endl;
    }
};

int main() {
    Vector v1(3, 2, 7);
    Vector v2(2, 2, 2);

    Vector result = v1 - v2;

    cout << "Result: ";
    result.print();  // <1, 0, 5>

    return 0;
}
