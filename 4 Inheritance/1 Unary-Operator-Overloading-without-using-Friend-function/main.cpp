#include <iostream>
using namespace std;

class complex {
  int real, imaginary;

public:
  complex() {} //Default constructor
  complex(int a, int b) {
    real = a;
    imaginary = b;
  }

  // Unary operator overloading
  void operator-();

  void display() {
    cout << "Real value: " << real << endl;
    cout << "Imaginary value: " << imaginary << endl;
  }
};

void complex::operator-() {
  // Negating the real and imaginary parts
  real = -real;
  imaginary = -imaginary;
}

int main() {
  complex c1(10, 12);
  cout << "Real and Imaginary Value before operation" << endl;
  c1.display();

  // Applying unary operator '-' on object c1
  -c1;

  cout << "Real and Imaginary Value after operation" << endl;
  c1.display();
}
/*To apply the unary operator, -c1 is used, where the - symbol acts as the unary
 * negation operator. This statement invokes the operator-() function on the
 * object c1, which negates its real and imaginary values.*/