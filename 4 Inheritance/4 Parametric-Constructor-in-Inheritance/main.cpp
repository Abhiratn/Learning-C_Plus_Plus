#include <iostream>
using namespace std;

class A {
private:
  int a;

protected:
  int b;

public:
  A(int i, int j) {
    a = i;
    b = j;
    cout << "A initialized" << endl;
  }
  void display_ab(void) {
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
  }
  int get_a(void) { return a; }
};

class B {
private:
  int c;

protected:
  int d;

public:
  B(int i, int j) {
    c = i;
    d = j;
    cout << "B initialized" << endl;
  }
  void display_cd(void) {
    cout << "The value of c is: " << c << endl;
    cout << "The value of d is: " << d << endl;
  }
  int get_c(void) { return c; }
};

class C : public B, public A {
private: // Added private access specifier for class C
  int e, f, total;

public:
  // Parametric constructor for class C
  C(int m, int n, int o, int p, int q, int r) : A(m, n), B(o, p) {
    // Initialize the inherited members of A and B using their respective
    // constructors Initialize the members of class C
    e = q;
    f = r;
    cout << "C initialized" << endl;
  }
  void sum(void) { total = get_a() + b + get_c() + d + e + f; }
  void display(void) {
    cout << "The value of e is: " << e << endl;
    cout << "The value of f is: " << f << endl;
    cout << "The sum of a, b, c, d, e, and f is: " << total << endl;
  }
};

int main() {
  // Create an object of class C and pass the arguments to its constructor
  C objc(10, 20, 30, 40, 50, 60);

  // Call member functions to display the values and perform calculations
  objc.display_ab();
  objc.display_cd();
  objc.sum();
  objc.display();

  return 0;
}
