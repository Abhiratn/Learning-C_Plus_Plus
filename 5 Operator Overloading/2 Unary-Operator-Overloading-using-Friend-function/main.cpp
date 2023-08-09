#include <iostream>
using namespace std;

class complex {
  int real, imaginary;

public:
  complex() {} // Default constructor
  complex(int a, int b) {
    real = a;
    imaginary = b;
  }

  // Unary operator overloading
  friend void operator-(complex &c); // Friend function declaration

  void display() {
    cout << "Real value: " << real << endl;
    cout << "Imaginary value: " << imaginary << endl;
  }
};

// Friend function definition
void operator-(complex &c) {
  // Negating the real and imaginary parts
  c.real = -c.real;
  c.imaginary = -c.imaginary;
}

int main() {
  complex c1(50, 100);
  cout << "Real and Imaginary Value before operation" << endl;
  c1.display();

  // Applying unary operator '-' on object c1
  -c1;

  cout << "Real and Imaginary Value after operation" << endl;
  c1.display();
}
/*Friend functions can access the private members of a class, allowing them to modify the object directly. Unary operator overloading using a friend function can be useful when the operator requires access to private data members or when it needs to modify the object directly.*/