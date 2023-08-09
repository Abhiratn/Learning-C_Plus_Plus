#include <iostream>
using namespace std;

class Inc {
private:
  int count;

public:
  Inc() {
    // Default constructor
    count = 0;
  }

  Inc(int C) {
    // Constructor with Argument
    count = C;
  }

  Inc operator++() {
    // Overloaded prefix increment operator (++count)
    return Inc(++count);
  }

  Inc operator--() {
    // Overloaded prefix decrement operator (--count)
    return Inc(--count);
  }

  void display(void) { cout << count << endl; }
};

int main(void) {
  Inc a, b(10), c, d, e(5), f(10);

  cout << "Before using the operator ++()\n";
  cout << "a = ";
  a.display();
  cout << "b = ";
  b.display();

  ++a;
  ++b;

  cout << "After using the operator ++()\n";
  cout << "a = ";
  a.display();
  cout << "b = ";
  b.display();

  c = ++a;
  d = ++b;

  cout << "Result prefix (on a) and postfix (on b)\n";
  cout << "c = ";
  c.display();
  cout << "d = ";
  d.display();

  c = ++a;
  d = ++b;

  cout << "Before using the operator --()\n";
  cout << "e = ";
  e.display();
  cout << "f = ";
  f.display();

  --e;
  --f;

  cout << "After using the operator --()\n";
  cout << "e = ";
  e.display();
  cout << "f = ";
  f.display();
}
