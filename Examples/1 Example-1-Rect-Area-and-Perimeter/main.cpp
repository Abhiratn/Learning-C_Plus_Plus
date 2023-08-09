#include <iostream>
using namespace std;
class Area{
    int l,b;
    public:
    void get_data(){
        cout<<"Enter length and breadth of rectangle : ";
        cin>>l>>b;
    }
    void area_display(){
        cout<<"Area of rectangle is : "<<l*b<<endl;
    }
    void pri_display(){
        cout<<"Perimeter of rectangle is : "<<2*(l+b)<<endl;
    }
};

int main(){
    Area a;
    a.get_data();
    a.area_display();
    a.pri_display();
}