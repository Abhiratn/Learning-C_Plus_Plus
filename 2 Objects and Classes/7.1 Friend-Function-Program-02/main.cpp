#include <iostream>
using namespace std;

// Declaration of class Two to be used as friend by class One
class Two;

// Declaration of class One
class One {
  int a; // private member variable
public:
  void get_a(void);         // method to get value of a
  friend int min(One, Two); // declaration of friend function
};

// Declaration of class Two
class Two {
  int b; // private member variable
public:
  void get_b(void);         // method to get value of b
  friend int min(One, Two); // declaration of friend function
};

// Definition of method to get value of a
void One::get_a(void) {
  cout << "Enter the value of a:";
  cin >> a;
}

// Definition of method to get value of b
void Two::get_b(void) {
  cout << "Enter the value of b:";
  cin >> b;
}

// Definition of friend function to find minimum of a and b
int min(One o, Two t) {
  if (o.a <
      t.b) {    // if value of a in object o is less than value of b in object t
    return o.a; // return value of a
  } else {      // otherwise
    return t.b; // return value of b
  }
}

// Main function
int main() {
  One one;      // create object of class One
  Two two;      // create object of class Two
  int minvalue; // variable to store minimum value

  one.get_a(); // get value of a from user using object of class One
  two.get_b(); // get value of b from user using object of class Two
  minvalue = min(one, two); // find minimum value using friend function
  cout << "Minimum=" << minvalue << endl;

  return 0;
}
