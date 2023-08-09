// Program with Virtual Function
// This program showcases the concept of virtual functions in C++.
// The class hierarchy consists of a parent class "Faculty" and two child
// classes, "RegularFaculty" and "GuestFaculty". The virtual function
// "calculateSalary" is overridden in the child classes, allowing the program to
// dynamically determine the appropriate salary calculation based on the type of
// faculty. This enables polymorphism and ensures that the correct version of
// the function is invoked.

#include <iostream>
using namespace std;

class Faculty {
  int facultyId;
  char facultyName[25];
  char facultyType;

public:
  // Parent Class Function
  virtual void calculateSalary() {
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
  Faculty *pFaculty;
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
