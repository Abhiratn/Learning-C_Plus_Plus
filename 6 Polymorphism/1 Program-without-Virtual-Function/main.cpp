#include <iostream>
using namespace std;

class Faculty {
    int facultyId;
    char facultyName[25];
    char facultyType;

public:
    // Parent Class Function
    void calculateSalary() {
        cout << "\nCalculating the salary of the faculty, no matter the faculty is regular or guest!!";
    }
};

class RegularFaculty : public Faculty {
public:
    // Child Class Function
    void calculateSalary() {
        cout << "\nCalculating the salary of a regular faculty!!";
    }
};

class GuestFaculty : public Faculty {
public:
    // Child Class Function
    void calculateSalary() {
        cout << "\nCalculating the salary of a guest faculty!!";
    }
};

int main() {
    Faculty* pFaculty;
    RegularFaculty rFaculty;
    GuestFaculty gFaculty;

    // Assigning the address of child class object into parent class pointer
    pFaculty = &rFaculty;
    // Invocation of calculateSalary() function with parent class pointer
    pFaculty->calculateSalary();

    // Assigning the address of child class object into parent class pointer
    pFaculty = &gFaculty;
    // Invocation of calculateSalary() function with parent class pointer
    pFaculty->calculateSalary();

    return 0;
}
