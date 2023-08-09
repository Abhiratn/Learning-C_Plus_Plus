#include <iostream>
using namespace std;
int main() {
  int x, y;
  cout << "Enter value of X & Y:\n";
  cin >> x >> y;
  int a = x - y;
  try {
    if (a != 0) {
      cout << "Result(x/a)=" << x / a;
    } else {
      throw(a);
    }
  } catch (int i) {
    cout << "Exception caught a=" << a;
  }
  return (0);
}
/*Scenario 1:
Input: x = 10, y = 5
Output: Result(x/a)=2
Explanation: Since a = x - y = 10 - 5 = 5, the condition a != 0 is satisfied.
Thus, the program calculates and outputs "Result(x/a)=2" because x/a = 10/5 = 2.

Scenario 2:
Input: x = 10, y = 10
Output: Exception caught a=0
Explanation: In this case, a = x - y = 10 - 10 = 0. Since a is equal to 0, the
condition a != 0 is not satisfied, and an exception is thrown. The program
catches the exception and outputs "Exception caught a=0".

Scenario 3:
Input: x = 7, y = 12
Output: Result(x/a)=-1
Explanation: Here, a = x - y = 7 - 12 = -5. As a is not equal to 0, the
condition a != 0 is satisfied. The program calculates x/a, which is -1.
Therefore, the output is "Result(x/a)=-1".

Scenario 4:
Input: x = 0, y = 5
Output: Result(x/a)=0
Explanation: In this case, a = x - y = 0 - 5 = -5. Since a is not equal to 0,
the condition a != 0 is satisfied. The program calculates x/a, which is 0.
Hence, the output is "Result(x/a)=0".*/