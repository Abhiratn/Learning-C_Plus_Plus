#include <cstring>
#include <iostream>
using namespace std;
class String {
  char *p; // Pointer to dynamically allocated character array
  int len; // Length of the character array

public:
  String() {} // Default constructor

  // Constructor to initialize the String object with a character array
  String(char *a) {
    len = strlen(a);
    p = new char[len + 1]; // Allocate memory for the character array
    strcpy(p, a);          // Copy the content of the character array 'a' to 'p'
  }

  // Conversion operator overloading to convert String object to a basic string
  // (char*)
  operator char *() {
    return p; // Return the pointer to the character array
  }

  void display() {
    cout << p; // Display the content of the character array
  }
};

int main() {
  String o1 = "LEARN PROGRAMMING";
  cout << "String of Class type: ";
  o1.display();
  cout << endl;

  char *str = o1; // Conversion from String object to basic string (char*)
  cout << "String of Basic type: " << str;
  return 0;
}
