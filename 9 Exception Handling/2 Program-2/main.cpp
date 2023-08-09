#include <iostream>
using namespace std;

// Function to perform division
void divide(int x, int y, int z) {
  cout << "Inside function\n";
  
  // Check if division is possible
  if ((x - y) != 0) {
    int r = z / (x - y);
    cout << "result = " << r << "\n";
  }
  else {
    // Throw an exception if division is not possible
    throw(x - y);
  }
}

int main() {
  try {
    cout << "Inside try block\n";
    
    // Call divide function with different arguments
    divide(10, 20, 30);//no error
    divide(10, 10, 20);// give error
  }
  catch (int i) {
    // Catch and handle the exception
    cout << "Caught the exception";
  }
  
  return 0;
}
