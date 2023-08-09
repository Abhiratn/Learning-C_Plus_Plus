#include <iostream>
using namespace std;

int main() {
    int num ;
    cout << "enter num : ";
    cin >> num;
    cout << "Num : " << num << endl;

    // if statement
    if (num > 0) {
        cout << "The number is positive." << endl;
    }

    // if-else statement
    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    }
    else {
        cout << "The number is odd." << endl;
    }

    // switch statement
    switch (num) {
        case 1:
            cout << "The number is one." << endl;
            break;
        case 2:
            cout << "The number is two." << endl;
            break;
        case 3:
            cout << "The number is three." << endl;
            break;
        default:
            cout << "The number is not one, two, or three." << endl;
            break;
    }

    // nested if statement
    if (num >= 0) {
        if (num == 0) {
            cout << "The number is zero." << endl;
        }
        else {
            cout << "The number is positive." << endl;
        }
    }
    else {
        cout << "The number is negative." << endl;
    }

    return 0;
}
