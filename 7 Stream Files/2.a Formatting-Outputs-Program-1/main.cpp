#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int num = 1234;
  double value = 3.14159;

  // Using width()
  cout << "Using width():\n";
  cout.width(10); // Set the field width to 10
  cout << num << endl;
  cout.width(10);
  cout << value << endl;

  // Using precision()
  cout << "\nUsing precision():\n";
  cout.precision(4); // Set the precision to 4 decimal places
  cout << num << endl;
  cout << value << endl;

  // Using fill()
  cout << "\nUsing fill():\n";
  cout.fill('*'); // Set the fill character to '*'
  cout.width(10);
  cout << num << endl;
  cout.width(10);
  cout << value << endl;
  cout.fill(' '); // Reset the fill character to default space

  // Using setf()
  cout << "\nUsing setf():\n";
  cout.setf(ios::showpos); // Show the positive sign for numbers
  cout << num << endl;
  cout << value << endl;
  cout.unsetf(ios::showpos); // Reset the flag

  // Using unsetf()
  cout << "\nUsing unsetf():\n";
  cout.setf(ios::scientific); // Set scientific notation
  cout << value << endl;
  cout.unsetf(ios::scientific); // Unset scientific notation
  cout << value << endl;

  return 0;
}
