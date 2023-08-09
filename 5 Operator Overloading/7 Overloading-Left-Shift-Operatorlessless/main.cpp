#include <iostream>
using namespace std;

// Complex class declaration
class complex {
private:
  double real, imag; // Private data members for real and imaginary parts
public:
  // Default constructor
  complex() {
    real = 0;
    imag = 0;
  }

  // Parameterized constructor
  complex(double r, double i) {
    real = r;
    imag = i;
  }

  // Getter functions for real and imaginary parts
  double getReal() const { return real; }

  double getImag() const { return imag; }

  // Overloaded assignment operator (=)
  complex &operator=(const complex &);

  // Overloaded addition operator (+)
  const complex operator+(const complex &);

  // Overloaded pre-increment operator (++)
  complex &operator++();

  // Overloaded post-increment operator (++)
  complex operator++(int);

  // Friend function to overload addition operator (+)
  /* friend const Complex operator+(const complex&, const complex&); */

  // Friend function to overload the output stream operator (<<)
  friend ostream &operator<<(ostream &, const complex &);
};

// Overloaded assignment operator (=)
complex &complex::operator=(const complex &c) {
  real = c.real;
  imag = c.imag;
  return *this;
}

// Overloaded addition operator (+)
const complex complex::operator+(const complex &c) {
  complex temp;
  temp.real = this->real + c.real;
  temp.imag = this->imag + c.imag;
  return temp;
}

// Overloaded pre-increment operator (++)
complex &complex::operator++() {
  real++;
  imag++;
  return *this;
}

// Overloaded post-increment operator (++)
complex complex::operator++(int) {
  complex temp = *this;
  real++;
  imag++;
  return temp;
}

/* Not a member function of the complex class
const complex operator+(const complex& c1, const complex& c2) {
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
*/

// Overloaded output stream operator (<<)
ostream &operator<<(ostream &os, const complex &c) {
  os << c.real << "+" << c.imag << "i" << endl;
  return os;
}

int main() {
  complex c1(5, 10);
  cout << "c1 = " << c1.getReal() << "+" << c1.getImag() << "i" << endl;
  cout << "Using overloaded <<" << endl;
  cout << "c1 = " << c1 << endl;
}
