#include <iostream>
using namespace std;

class ABC {
  int x, y;
  void f1(void);

public:
  int z;
  void f2(void);
};

int main() {
  ABC a;

  // a.x =10; // will generate error x is a private data
  a.z = 10; // ok; as it is a public data
  // a.f1();  // Error f1() is private function
  a.f2(); // ok; f2 is public fuction

  return 0;
}

// this program has no error however u try to run it will generate error as f2
// has been declared void and it isnt been initiallised before calling