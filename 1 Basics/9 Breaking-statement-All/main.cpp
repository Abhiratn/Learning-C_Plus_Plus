#include <iostream>
using namespace std;
int main() {
  int n, num;
  cout << "Enter your number: ";
  cin >> num;
  for (n = 10; n > 0; n--) {
    // loop stopped because n > num and it triggers break
    if (n > num) {
      cout << "Loop is not working " << num << endl;
      break;
    }
    // loop is working and continuing n<num
    else if (n <= num) {
      cout << "Loop is working " << n << endl;
      continue;
    }
  }
}
/*
In this code, the `for` loop is used to iterate from `n=10` to `n=1`. Within the loop, there is an `if-else` statement with two conditions:

- If `n` is greater than the input `num`, then the loop is not working properly and the `break` statement is used to terminate the loop.
- If `n` is less than or equal to the input `num`, then the loop is working
properly and the `continue` statement is used to skip the current iteration and move to the next one.

This code shows how `break` and `continue` can be used to control the flow of a loop. `break` is used to terminate the loop early, while `continue` is used to skip a particular iteration and move to the next one.
*/