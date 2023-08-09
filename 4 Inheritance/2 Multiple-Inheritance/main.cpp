#include <iostream>
using namespace std;

class A {
  int a;

public:
  void input_a(void);  // Function to input value for a
  void output_a(void); // Function to output the value of a
  int get_a(void);     // Function to get the value of a
};

class B {
  int b;

public:
  void input_b(void);  // Function to input value for b
  void output_b(void); // Function to output the value of b
  int get_b(void);     // Function to get the value of b
};

class C : public A, public B { // Class C inheriting from both class A and class
                               // B (multiple inheritance)
  int c, d;

public:
  void input_c(void); // Function to input value for c
  void display(void); // Function to display values of c and d
  void sum(void);     // Function to calculate the sum of a, b, and c
};

void A::input_a() {
  cout << "\n Enter the value of a: " << endl;
  cin >> a;
}

void A::output_a() { cout << "\n The value of a is: " << a << endl; }

int A::get_a() { return a; }

void B::input_b() {
  cout << "\n Enter the value of b: " << endl;
  cin >> b;
}

void B::output_b() { cout << "\n The value of b is: " << b << endl; }

int B::get_b() { return b; }

void C::input_c() {
  cout << "\n Enter the value of c: " << endl;
  cin >> c;
}

void C::sum() {
  d = get_a() + get_b() + c; // Accessing member functions of base classes (A
                             // and B) to get values of a and b
}

void C::display() {
  cout << "\n The value of c is: " << c << endl;
  cout << "\n The value of d (sum of a, b, c) is: " << d << endl;
}

int main() {
  C objc;

  objc.input_a();  // Inputting value for a
  objc.input_b();  // Inputting value for b
  objc.input_c();  // Inputting value for c
  objc.output_a(); // Outputting the value of a
  objc.output_b(); // Outputting the value of b
  objc.sum();      // Calculating the sum of a, b, and c
  objc.display();  // Displaying values of c and d
}
