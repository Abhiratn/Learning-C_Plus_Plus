/*Run this code in terminal
1)when you run it 1st time it will ask to enter the Text after entering the Text.
///////////////////////////////////////////////////////////
for example:(terminal)
PS ********> cd "**********" ; if ($?) { g++ UnformatedIOProgram2.cpp -o
UnformatedIOProgram2 } ; if ($?) { .\UnformatedIOProgram2 } Enter some text:
Hello, World! 
///////////////////////////////////////////////////////////
2)It will store the value of Hello world in buffer and will not show
any output after terminating or re-running it will print stored value inside of the buffer.
///////////////////////////////////////////////////////////
for example:(terminal) cd "********\" ; if ($?) { g++
UnformatedIOProgram2.cpp -o UnformatedIOProgram2 } ; if ($?) {
.\UnformatedIOProgram2 } 
Hello, World!
///////////////////////////////////////////////////////////
*/

#include <iostream>

using namespace std;
int main() {
  char buffer[80];

  cout << "Enter some text: ";
  cin.read(buffer, 20);
  cout.write(buffer, cin.gcount());
  return 0;
}
