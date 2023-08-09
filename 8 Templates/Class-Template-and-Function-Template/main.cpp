#include <iostream>
using namespace std;

// Class Template
template <typename T>
class Pair {
private:
    T first;
    T second;
public:
    Pair(T a, T b) {
        first = a;
        second = b;
    }
    
    T getMax() {
        return (first > second) ? first : second;
    }
};

// Function Template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Using the Class Template
    Pair<int> intPair(5, 10);
    cout << "Max value: " << intPair.getMax() << endl;

    Pair<double> doublePair(3.14, 2.71);
    cout << "Max value: " << doublePair.getMax() << endl;

    // Using the Function Template
    int sumInt = add(5, 10);
    cout << "Sum (int): " << sumInt << endl;

    double sumDouble = add(3.14, 2.71);
    cout << "Sum (double): " << sumDouble << endl;

    return 0;
}
