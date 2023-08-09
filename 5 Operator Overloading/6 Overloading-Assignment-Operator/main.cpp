#include <iostream>
using namespace std;

class complex {
private:
  double real, imag;

public:
  complex() {
    // Default constructor
    real = 0;
    imag = 0;
  }

  complex(double r, double i) {
    // Constructor with arguments
    real = r;
    imag = i;
  }

  double getReal() const { return real; }

  double getImag() const { return imag; }

  complex &operator=(const complex &);
};

// Overloaded assignment operator
complex &complex::operator=(const complex &c) {
  // Assigns the real and imaginary parts of 'c' to the current object
  real = c.real;
  imag = c.imag;
  return *this;
}

int main() {
  complex c1(5, 10);
  complex c2(50, 100);

  cout << "c1 = " << c1.getReal() << "+" << c1.getImag() << "i" << endl;
  cout << "c2 = " << c2.getReal() << "+" << c2.getImag() << "i" << endl;

  c2 = c1; // Assigning c1 to c2 using the overloaded assignment operator

  cout << "Assign c1 to c2:" << endl;
  cout << "c2 = " << c2.getReal() << "+" << c2.getImag() << "i" << endl;
}
