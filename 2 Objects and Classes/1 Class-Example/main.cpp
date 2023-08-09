#include <iostream>
using namespace std;

// Define a class named Employee
class Employee {
  // Private data members
  int id;
  char name[15];
  char dept[25];

public:
  // Public member function to get input from the user for employee's data
  void get_data(void) {
    cout << "Enter Employee ID: " << endl;
    cin >> id;
    cout << "Enter Name: " << endl;
    cin >> name;
    cout << "Enter Department: " << endl;
    cin >> dept;
  }

  // Public member function to display the employee's data
  void display_data(void) {
    cout << "Employee ID- " << id << endl;
    cout << "Employee Name- " << name << endl;
    cout << "Employee Department- " << dept << endl;
  }
};
//object Part to run the code
// The main function
int main() {
  // Create an object of the Employee class
  Employee emp1;

  // Call the get_data function to get input from the user
  emp1.get_data();

  // Call the display_data function to display the employee's data
  emp1.display_data();

  // Return 0 to indicate successful completion
  return 0;
}
