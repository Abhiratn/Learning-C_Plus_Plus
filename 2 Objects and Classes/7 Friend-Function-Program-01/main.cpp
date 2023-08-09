#include <iostream>
using namespace std;
#define MAX_SIZE 100

// Declaration of the Sum class
class Sum {
  int num[MAX_SIZE]; // array to store the numbers
  int n;             // variable to store the total number of inputs

public:
  void get_number(void); // function to get the input numbers
  friend int add(Sum s); // friend function to add the input numbers
};

// Definition of the get_number() function of the Sum class
void Sum::get_number(void) {
  cout << "\nEnter the Total Numbers(n):\n";
  cin >> n;
  cout << "\nEnter the numbers:\n";
  for (int i = 0; i < n; i++) {
    cin >> num[i];
  }
}

// Definition of the add() function, which is a friend function of the Sum class
int add(Sum s) {
  int temp = 0;
  s.get_number(); // call the get_number() function of the Sum class to get the
                  // input numbers
  for (int i = 0; i < s.n; i++) {
    temp += s.num[i]; // add up the input numbers
  }
  return temp; // return the sum of input numbers
}

// Definition of the main() function
int main() {
  Sum s; // create an object of the Sum class
  int res;
  res = add(s); // call the add() function with the object of the Sum class as
                // an argument
  cout << "The sum of numbers is = " << res
       << endl; // display the sum of input numbers
  return 0;     // indicate successful program execution
}
