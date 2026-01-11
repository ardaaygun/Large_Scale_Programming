#include <iostream>
using namespace std;

class Widget {
public:
    static int totalWidgets;
    static int activeWidgets;


    Widget() {
        totalWidgets++;
        activeWidgets++;
    }

    ~Widget() {
        activeWidgets--;
    }


    static int getTotalWidgets() {
        return totalWidgets;
    }


    static int getActiveWidgets() {
        return activeWidgets;
    }
};


int Widget::totalWidgets = 0;
int Widget::activeWidgets = 0;

int main() {
    cout << "--- Program Start---\n";
    cout << "Total: " << Widget::getTotalWidgets()
         << ", Active: " << Widget::getActiveWidgets() << endl;


    Widget w1;
    Widget w2;
    cout << "--- After creating w1, w2---\n";
    cout << "Total: " << Widget::getTotalWidgets()
         << ", Active: " << Widget::getActiveWidgets() << endl;


    {
        Widget w3;
        cout << "--- Inside inner scope with w3---\n";
        cout << "Total: " << Widget::getTotalWidgets()
             << ", Active: " << Widget::getActiveWidgets() << endl;
    }

    cout << "--- Exited inner scope---\n";
    cout << "Total: " << Widget::getTotalWidgets()
         << ", Active: " << Widget::getActiveWidgets() << endl;

    return 0;
}
