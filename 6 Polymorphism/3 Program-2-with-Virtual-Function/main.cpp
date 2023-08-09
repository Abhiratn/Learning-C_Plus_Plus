#include <iostream>
using namespace std;

// The Base class of C++ virtual function
class Vehicle {
public:
  // The virtual function
  virtual void Make() {
    cout << "Member function of the Base Class Vehicle Accessed" << endl;
  }
};

class FourWheeler : public Vehicle {
public:
  void Make() {
    cout << "Virtual member function of derived class FourWheeler Accessed" << endl;
  }
};

int main() {
  Vehicle *a, *b;
  a = new Vehicle();
  a->Make(); // Calls the base class function

  b = new FourWheeler();
  b->Make(); // Calls the derived class function
}
