#include <iostream>
using namespace std;

class Counter{
    static int count;  // declaration of static member variable
    int n;  // non-static member variable
public:
    void set_data(void) {
        count++;  // increment static member variable
        n = count;  // assign value of static member variable to non-static member variable
    }
    void show_value_of_n(void){
        cout<<"The value of n is="<<n<<endl;  // display value of non-static member variable
    }
    static void show_count(void){
        cout<<"Count:"<<count<<endl;  // display value of static member variable
    }
};

int Counter::count=0;  // definition and initialization of static member variable

int main(){
    Counter c1, c2, c3;

    Counter::show_count();  // display initial value of static member variable

    c1.set_data();  // set value of non-static member variable for object c1
    c2.set_data();  // set value of non-static member variable for object c2

    Counter::show_count();  // display updated value of static member variable

    c3.set_data();  // set value of non-static member variable for object c3

    Counter::show_count();  // display updated value of static member variable

    c1.show_value_of_n();  // display value of non-static member variable for object c1
    c2.show_value_of_n();  // display value of non-static member variable for object c2
    c3.show_value_of_n();  // display value of non-static member variable for object c3

    return 0;
}
