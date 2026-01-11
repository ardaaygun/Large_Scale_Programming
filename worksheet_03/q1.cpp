#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int studentID;
    double GPA;
    Student(string name,int studentId , double GPA) {
        this -> name = name;
        this-> studentID = studentId;
        this -> GPA = GPA;

    }
    void setGPA(double GPA) {
        this-> GPA = GPA;
    }
    double getGPA() {
        return GPA;
    }
    void setName(string name) {
        this->name = name;

    }
    string getName() {
        return name;
    }

    int getStudentID() {
        return studentID;
    }
    void setStudentID(int studentID) {
        this->studentID = studentID;

    }

    void printDetails() {
        cout<<"Name: "<<name<<endl;
        cout<<"StudentID: "<<studentID<<endl;
        cout<<"GPA: "<<GPA<<endl;
    }
};

int main() {
    Student student1("Alice Johnson",1001,3.85);
    student1.printDetails();

    return 0;
}

