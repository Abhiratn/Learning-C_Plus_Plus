#include <iostream> 

using namespace std;

class Number { // Define a class called Number
  int x, y, z; 

public: // Declare public member functions
  void get_data(void); // Function to get user input for x, y, and z
  void maximum(void); // Function to find and display the maximum value among x, y, and z
  void minimum(void); // Function to find and display the minimum value among x, y, and z
};

void Number::get_data(void) { // Implementation of the get_data() function
  cout << "\n Enter the value of the first number(x):" << endl;
  cin >> x; 
  cout << "\n Enter the value of the second number(y):" << endl;
  cin >> y;
  cout << "\n Enter the value of the Third number(z):" << endl; 
  cin >> z;
}

void Number::maximum(void) { // Implementation of the maximum() function
  int max; 
  max = x; // Initialize the maximum value to x
  if (max < y) // If y is greater than the current maximum value
    max = y; // Update the maximum value to y
  if (max < z) // If z is greater than the current maximum value
    max = z; // Update the maximum value to z
  cout << "\n Maximum value is=" << max << endl; // Display the maximum value to the user
}

void Number::minimum(void) { // Implementation of the minimum() function
  int min; // Declare a variable to store the minimum value
  min = x; // Initialize the minimum value to x
  if (min > y) // If y is smaller than the current minimum value
    min = y; // Update the minimum value to y
  if (min > z) // If z is smaller than the current minimum value
    min = z; // Update the minimum value to z
  cout << "\n Minimum value is=" << min << endl; // Display the minimum value to the user
}

int main() { // Main function
  Number num; // Declare an instance of the Number class
  num.get_data(); // Call the get_data() function to get user input
  num.maximum(); // Call the maximum() function to find and display the maximum value
  num.minimum(); // Call the minimum() function to find and display the minimum value
  return 0; 
}
