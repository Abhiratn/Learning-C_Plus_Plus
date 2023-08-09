#include <iostream>

using namespace std;

int main() {
    int i, j, n;

    // for loop
    cout << "For loop: ";
    for(i=1; i<=5; i++) {
        cout << i << " ";
    }

    cout << endl;

    // while loop
    cout << "While loop: ";
    i = 1;
    while(i <= 5) {
        cout << i << " ";
        i++;
    }

    cout << endl;

    // do-while loop
    cout << "Do-while loop: ";
    i = 1;
    do {
        cout << i << " ";
        i++;
    } while(i <= 5);

    cout << endl;

    // nested for loop
    cout << "Nested for loop: " << endl;
    for(i=1; i<=3; i++) {
        for(j=1; j<=3; j++) {
            cout << "i = " << i << ", j = " << j << endl;
        }
    }

    return 0;
}
