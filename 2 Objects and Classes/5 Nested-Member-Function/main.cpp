#include <iostream>
using namespace std;
#define MAX_SIZE 100

class Data {
  int num[MAX_SIZE]; // array to store the input numbers
  int n; // number of input numbers

public:
  void get_data(void); // function to get input from user
  int largest(void); // function to find the largest number
  void display_data(void); // function to display the largest number
};

void Data::get_data(void) {
  cout << "\n Enter the total numbers(n):" << endl;
  cin >> n;
  cout << "\n enter the number:" << endl;
  for (int i = 0; i < n; i++) {
    cout << "\n enter the number" << i + 1 << ":";
    cin >> num[i]; // store the input numbers in the array
  }
}

int Data::largest(void) {
  int max;
  max = num[0];
  for (int i = 1; i < n; i++) {
    if (max < num[i])
      max = num[i]; // update the maximum number if a larger number is found
  }
  return max; // return the largest number
}

void Data::display_data(void) {
  cout << "The largest number:" << largest() << endl; // display the largest number
}

int main() {
  Data num;
  num.get_data(); // get input from user
  num.display_data(); // display the largest number
}
