#include <iostream>
using namespace std;

class complex {
  int real, imaginary;

public:
  complex() {} // Default constructor

  // Parameterized constructor
  complex(int a, int b) {
    real = a;
    imaginary = b;
  }
  friend complex operator+(complex c1,complex c2); // Declaration of friend function

  void display() {
    cout << "Real sum is: " << real << endl;
    cout << "Imaginary sum is: " << imaginary << endl;
  }
};

complex operator+(complex c1, complex c2) {
  complex temp;
  temp.real = c1.real + c2.real;
  temp.imaginary = c1.imaginary + c2.imaginary;
  return (temp);
}

int main() {
  complex c1(10, 20);
  complex c2(30, 50);
  complex c3 = c1 + c2; // Using the overloaded + operator with objects c1 and c2
  c3.display();
}
