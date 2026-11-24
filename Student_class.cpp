
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    double marks;

public:

    Student(int r, string n, double m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    Student s1(101, "Asha", 82.5);
    Student s2(102, "Rahul", 90.5);

    s1.display();
    s2.display();

    return 0;
}
