#include <iostream>
using namespace std;


class Employee {
public:

    virtual void calculateWeeklyPay() {
        cout << "Calculating pay for a generic employee." << endl;
    }


    virtual ~Employee() {}
};


class SalariedEmployee : public Employee {
public:
    void calculateWeeklyPay() override {
        cout << "Calculating fixed weekly salary." << endl;
    }
};


class HourlyEmployee : public Employee {
public:
    void calculateWeeklyPay() override {
        cout << "Calculating pay based on hours worked." << endl;
    }
};

int main() {

    SalariedEmployee salariedEmployee;
    HourlyEmployee hourlyEmployee;
    Employee* employeePtr;

    employeePtr = &salariedEmployee;
    employeePtr->calculateWeeklyPay();

    employeePtr = &hourlyEmployee;
    employeePtr->calculateWeeklyPay();

    return 0;
}
