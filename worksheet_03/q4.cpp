#include <iostream>
using namespace std;

class Find {
public:
    int FindMax (int a , int b) {
        if (a > b) {
            return a;
        }
        else {
            return b;
        }
    }
    int FindMax (int a , int b , int c) {
        int max = a;

        if (b > max) {
            max = b;
        }
        if (c > max) {
          max = c;
        }
        return max;
    }
    float FindMax (float a , float b) {
        if (a > b) {
            return a;
        }
        else {
            return b;
        }
    }
};

int main() {
    Find finder;

    cout << "Maximum of two integers: " << finder.FindMax(10, 15) << endl;
    cout << "Maximum of three integers: " << finder.FindMax(10, 15, 30) << endl;
    cout << "Maximum of two floats: " << finder.FindMax(7.5f, 9.5f) << endl;

    return 0;
}
