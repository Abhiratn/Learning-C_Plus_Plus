#include <iostream>
using namespace std;
class Con_Decon {
public:
  Con_Decon() { cout << "\n Constructor"; }
  ~Con_Decon() { cout << "\n Deconstructor"; }
};
int main() { Con_Decon A; }