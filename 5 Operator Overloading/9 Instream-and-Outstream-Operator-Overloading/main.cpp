#include <iostream>
using namespace std;

class Complex {
  int real, imag;
public:
  friend istream& operator>> (istream& is, Complex& c2);// Overloading input stream operator
  friend ostream& operator<< (ostream& os, const Complex& c2);// Overloading output stream operator
};

istream& operator>> (istream& is, Complex& c2) {
  cout << "Enter Real and Imaginary (separated by space): ";
  is >> c2.real >> c2.imag;  // Read values for real and imaginary parts from input stream
  return is;  // Return the input stream object to allow chaining
}

ostream& operator<< (ostream& os, const Complex& c2) {
  os << "The complex number is: ";
  os << c2.real << "i" << c2.imag;  // Write the complex number to the output stream
  return os;  // Return the output stream object to allow chaining
}

int main() {
  Complex c1, c2;
  
  cout << "Enter the first complex number:\n";
  cin >> c1;  // Use the overloaded input stream operator to read a complex number
  
  cout << "Enter the second complex number:\n";
  cin >> c2;  // Use the overloaded input stream operator to read a complex number
  
  cout << "Complex numbers entered:\n";
  cout << c1 << "\n";  // Use the overloaded output stream operator to print a complex number
  cout << c2 << "\n";  // Use the overloaded output stream operator to print a complex number
  
  return 0;
}
