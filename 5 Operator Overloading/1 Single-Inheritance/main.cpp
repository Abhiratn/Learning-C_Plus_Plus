#include <iostream>
using namespace std;

class A {
  int a;

public:
  int b;
  void input_ab(void); // Function to input values for a and b
  void output_a(void); // Function to output the value of a
  int get_a(void);     // Function to get the value of a
};

class B : public A { // Class B inheriting from class A (single inheritance)
  int c, d;

public:
  void input_c(void); // Function to input value for c
  void display(void); // Function to display values of b, c, and d
  void sum(void);     // Function to calculate the sum of a, b, and c
};

void A::input_ab() {
  cout << "\n Enter the value of a and b: " << endl;
  cin >> a >> b;
}

void A::output_a() { cout << "\n The Value of a is: " << a << endl; }

int A::get_a() { return a; }

void B::input_c() {
  cout << "\n Enter the value of c: " << endl;
  cin >> c;
}

void B::sum() {
  d = get_a() + b + c; // Accessing a member function of the base class (A) to
                       // get the value of a
}

void B::display() {
  cout << "\n The Value of b is: " << b << endl;
  cout << "\n The Value of c is: " << c << endl;
  cout << "\n The Value of d (sum of a, b, c) is: " << d << endl;
}

int main() {
  B objb;

  objb.input_ab(); // Inputting values for a and b
  objb.input_c();  // Inputting value for c
  objb.output_a(); // Outputting the value of a
  objb.sum();      // Calculating the sum of a, b, and c
  objb.display();  // Displaying values of b, c, and d

  objb.b = 0;     // Modifying the value of b
  objb.sum();     // Recalculating the sum of a, b, and c
  objb.display(); // Displaying updated values of b, c, and d
}
