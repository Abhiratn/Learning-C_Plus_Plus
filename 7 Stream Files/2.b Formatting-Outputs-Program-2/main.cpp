#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int num = 123;
  double pi = 3.14159;
  char symbol = '#';

  // setw(int w) - sets the field width
  cout << setw(10) << num << endl;

  // setprecision(int d) - sets the decimal precision
  cout << setprecision(4) << pi << endl;

  // setfill(int c) - sets the fill character
  cout << setfill('*') << setw(10) << symbol << endl;

  // setiosflags(long f) - sets various formatting flags
  cout << setiosflags(ios::showpos);
  cout << 5 << endl;

  // resetiosflags(long f) - resets the specified formatting flags
  cout << resetiosflags(ios::showpos);
  cout << 5 << endl;

  // Using manipulators together
  cout << setw(10) << setfill('@') << left << "Hello" << right << "World"
       << endl;

  return 0;
}
