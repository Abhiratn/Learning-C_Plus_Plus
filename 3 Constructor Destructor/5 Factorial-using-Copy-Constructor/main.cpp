#include <iostream>
using namespace std;
class Copy {
  int var, fact;

public:
  Copy(int temp) { var = temp; }
  Copy(Copy &cpy) { var = cpy.var; }
  double calculate() {
    fact = 1;
    for (int i = 1; i <= var; i++) {
      fact = fact * i;
    }
    return fact;
  }
};

int main() {
  int n;
  cout << "Enter the Number:";
  cin >> n;
  Copy obj(n);
  Copy cpy = obj;
  cout << "\n\t"<< "Factorial is:" << obj.calculate();
  cout << "\n\t"<< "Factorial is:" << cpy.calculate();
}