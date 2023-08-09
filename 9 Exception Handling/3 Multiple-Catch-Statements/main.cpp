#include <iostream>
using namespace std;

void test(int x) {
  try {
    if (x == 1) {
      throw 'a'; // Throw a char exception
    } else if (x == 0) {
      throw x; // Throw an int exception
    } else if (x == -1) {
      throw 1.0; // Throw a double exception
    }
  } catch (char c) {
    cout << "Caught a character: " << c << "\n\n"; // Catching char exception
  } catch (int m) {
    cout << "Caught an integer\n\n"; // Catching int exception
  } catch (double d) {
    cout << "Caught a double\n\n"; // Catching double exception
  }
}

int main() {
  cout << "Testing multiple catches\n";

  // Test cases
  cout << "x == 1\n";
  test(1); // Calling test function with x = 1
  cout << "x == 0\n";
  test(0); // Calling test function with x = 0
  cout << "x == -1\n";
  test(-1); // Calling test function with x = -1
  cout << "x == 2\n";
  test(2); // Calling test function with x = 2

  return 0;
}
